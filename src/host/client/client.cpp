#include <iostream>
#include <memory>
#include <string>

#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <grpc++/client_context.h>
#include <grpc++/create_channel.h>
#include <grpc++/security/credentials.h>
#include "requests.grpc.pb.h"

namespace
{
    using GeneratedRpc::UserRequest;
    using GeneratedRpc::UserResponse;
    using GeneratedRpc::DeleteUserStatisticsRequest;
    using GeneratedRpc::DeleteUserStatisticsResponse;
    using GeneratedRpc::Api;

    typedef ::google::protobuf::RepeatedPtrField< ::std::string> UsersReplay;
}

class ClientService
{
public:
    ClientService(std::shared_ptr<grpc::Channel> channel)
        : m_stub(Api::NewStub(channel))
    {}
    uint32_t GetNumOfRequests(const std::string& username)
    {
        UserRequest request;
        request.set_username(username);
        UserResponse reply;
        grpc::ClientContext context;

        grpc::Status status = m_stub->GetNumOfRequests(&context, request, &reply);
        if (status.ok())
        {
            return reply.numofrequests();
        }
        else
        {
            return 0;
        }
    }

    std::string DeleteUserStatistics(const std::string& userName, UsersReplay& users)
    {
        DeleteUserStatisticsRequest request;
        request.set_name(userName);
        DeleteUserStatisticsResponse reply;
        grpc::ClientContext context;

        grpc::Status status = m_stub->DeleteUserStatistics(&context, request, &reply);
        if (status.ok())
        {
            users = reply.users();
            return reply.status();
        }
        else
        {
            return status.error_message();
        }
    }

private:
    std::unique_ptr<Api::Stub> m_stub;
};

int main(int argc, char** argv)
{
    if(argc < 2)
    {
        std::cout << "Enter user name " << std::endl;
        return 0;
    }
    std::string serverAddress("unix:/home/sergey/grpc_exemple/bin/Debug/grpc.sock");
    //std::string serverAddress("localhost:50055");
    ClientService client(grpc::CreateChannel(serverAddress, grpc::InsecureChannelCredentials()));

    std::string user(argv[1]);
    if(user.substr(0, 1) == "*")
    {
        user = user.substr(1);
        UsersReplay usersReplay;
        std::cout << "Deleted user: '" << user << "'' " <<  client.DeleteUserStatistics(user, usersReplay) << std::endl;

        std::cout << "Current users: " << std::endl;
        for(auto userReplay : usersReplay)
        {
            std::cout << "\t" << userReplay << std::endl;
        }
        return 0;
    }
    std::cout << "Num of requests: " <<  client.GetNumOfRequests(user) << std::endl;

    return 0;
}
