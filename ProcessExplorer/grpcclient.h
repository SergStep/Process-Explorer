#ifndef GRPCCLIENT_H
#define GRPCCLIENT_H

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
    using GeneratedRpc::RequestInfo;
    using GeneratedRpc::ProcessData;
    using GeneratedRpc::ProcessesData;
    using GeneratedRpc::Api;

    typedef ::google::protobuf::RepeatedPtrField< ::std::string> UsersReplay;
}

class ClientService
{
public:
    ClientService(std::shared_ptr<grpc::Channel> channel);
    ProcessesData GetRunningProcesses();

private:
    std::unique_ptr<Api::Stub> m_stub;
};

#endif // GRPCCLIENT_H
