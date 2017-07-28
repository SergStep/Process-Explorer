#include <iostream>
#include <memory>
#include <string>
#include <map>

#include <grpc/grpc.h>
#include <grpc++/server.h>
#include <grpc++/server_builder.h>
#include <grpc++/server_context.h>
#include <grpc++/security/server_credentials.h>
#include "requests.grpc.pb.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <syslog.h>
#include <syslog.h>
#include <thread>
#include <boost/filesystem.hpp>
#include <boost/filesystem/fstream.hpp>

using GeneratedRpc::RequestInfo;
using GeneratedRpc::ProcessesData;
using GeneratedRpc::ProcessData;
using GeneratedRpc::Api;

namespace
{
    const std::string s_testDataPath = "/proc/";
}

int writeLog(char msg[256]);

int writeLog(const char* msg) { //writing to log
    FILE * pLog;
    pLog = fopen("./daemon.log", "a");
    if(pLog == NULL) {
        return 1;
    }
    char str[312];
    bzero(str, 312);
    strcat(str, msg);
    strcat(str, "\n");
    fputs(str, pLog);
    fclose(pLog);
    return 0;
}

class ServerService final : public Api::Service
{
    public:
        void RunServer()
        {
            try
            {
                //GetProcesses();
                std::string serverAddress("unix:/home/serg/ProcessExplorer/bin/Debug/grpc.sock");
                //std::string serverAddress("localhost:50055");

                grpc::ServerBuilder builder;

                builder.AddListeningPort(serverAddress, grpc::InsecureServerCredentials());

                builder.RegisterService(this);

                std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
                std::cout << "Server listening on " << serverAddress << std::endl;

                server->Wait();
            }
            catch (const std::exception& ex)
            {
                writeLog(ex.what());
            }
        }

        int Daemon(void)  //the daemon loop
        {

            //m_thread = std::thread(&ServerService::RunServer, this);
            //m_thread.detach();

            openlog("test-daemon", LOG_PERROR | LOG_PID, LOG_DAEMON);
            syslog(LOG_DEBUG,"The test-daemon has been started");
            closelog();

            RunServer();

            return 0;
        }

        void GetProcesses()
        {
            try
            {
                if(!boost::filesystem::exists(s_testDataPath))
                {
                    return;
                }
                std::string g_name("Name");
                std::string g_pid("Pid");
                std::string g_mem("VmSize");
                std::string g_userId("Uid");
                std::string g_cpu("avg_per_cpu");
                std::string g_delimiter(":");

                boost::filesystem::directory_iterator end;
                for (boost::filesystem::directory_iterator it(s_testDataPath); it != end; ++it)
                {
                    boost::filesystem::path folderPath = it->path();

                    if (!boost::filesystem::is_directory(folderPath))
                    {
                        continue;
                    }

                    std::string name;
                    std::string pid;
                    std::string mem;
                    std::string userId;
                    std::string cmdLine;
                    std::string cpu;

                    for (boost::filesystem::directory_iterator it(folderPath); it != end; ++it)
                    {
                        boost::filesystem::path filePath = it->path();
                        if (boost::filesystem::is_directory(filePath))
                        {
                            continue;
                        }

                        std::string fileName = filePath.filename().string();

                        if(fileName == "status")
                        {
                            std::ifstream file(filePath.string());
                            std::string line;

                            while (std::getline(file, line))
                            {
                                std::string param(line.substr(0, line.find_last_of(g_delimiter)));

                                if(g_name == param)
                                {
                                    name = line.substr(line.find_last_of(g_delimiter) + 2);
                                }
                                if(g_pid == param)
                                {
                                    pid = line.substr(line.find_last_of(g_delimiter) + 2);
                                }
                                if(g_mem == param)
                                {
                                    mem = line.substr(line.find_last_of(g_delimiter) + 2);
                                }
                                if(g_userId == param)
                                {
                                    userId = line.substr(line.find_last_of(g_delimiter) + 2, 1);
                                }
                            }
                        }
                        else if(fileName == "sched")
                        {
                            std::ifstream file(filePath.string());
                            std::string line;

                            while (std::getline(file, line))
                            {
                                std::string param(line.substr(0, line.find_first_of(" ")));

                                if(g_cpu == param)
                                {
                                    cpu = line.substr(line.find_last_of(g_delimiter) + 5);
                                }
                            }
                        }
                        else if(fileName == "cmdline")
                        {
                            std::ifstream file(filePath.string());
                            std::string line;
                            cmdLine = "_";

                            if(std::getline(file, line))
                            {
                                cmdLine = line;
                            }
                        }

                        if(name.empty() || pid.empty() || mem.empty() || userId.empty() || cmdLine.empty() || cpu.empty())
                        {
                            continue;
                        }

                        ProcessData processData;
                        processData.set_mem(mem);
                        processData.set_processid(pid);
                        processData.set_processname(name);
                        processData.set_userid(userId);
                        processData.set_commandline(cmdLine);
                        processData.set_cpu(cpu);

                        name.clear();
                        pid.clear();
                        mem.clear();
                        userId.clear();
                        cmdLine.clear();
                        cpu.clear();

                        std::lock_guard<std::mutex> lock(m_mutex);

                        *m_processesData.add_processes() = processData;

                    }
                }
            }

            catch(const std::exception& ex)
            {
                writeLog(ex.what());
            }
        }

    private:
        grpc::Status GetProcesses(grpc::ServerContext* context, const RequestInfo* request,
                              ProcessesData* reply) override
        {
            GetProcesses();
            std::lock_guard<std::mutex> lock(m_mutex);
            *reply = m_processesData;
            m_processesData.Clear();
            return grpc::Status::OK;
        }

        std::mutex m_mutex;
        std::thread m_thread;
        ProcessesData m_processesData;
};


int main(int argc, char** argv)
{

    writeLog("test-daemon started");

    pid_t parpid, sid;

    parpid = fork();
    if(parpid < 0) {
        exit(1);
    } else if(parpid != 0) {
        exit(0);
    }
    umask(0);//permission for working with the file system
    sid = setsid();//the process index generation
    if(sid < 0) {
        exit(1);
    }
    if((chdir("/")) < 0) {//to root of fs
        exit(1);
    }
    close(STDIN_FILENO);//close the standard input/output threads
    close(STDOUT_FILENO);
    close(STDERR_FILENO);

    ServerService daemon;

    return daemon.Daemon();
}
