#include <grpcclient.h>


ClientService::ClientService(std::shared_ptr<grpc::Channel> channel)
    : m_stub(Api::NewStub(channel))
{}
ProcessesData ClientService::GetRunningProcesses()
{
    RequestInfo request;
    ProcessesData reply;
    grpc::ClientContext context;

    grpc::Status status = m_stub->GetProcesses(&context, request, &reply);
    if (status.ok())
    {
        return reply;
    }
    else
    {
        return ProcessesData();
    }
}
