// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: requests.proto
#ifndef GRPC_requests_2eproto__INCLUDED
#define GRPC_requests_2eproto__INCLUDED

#include "requests.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace GeneratedRpc {

class Api GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status GetProcesses(::grpc::ClientContext* context, const ::GeneratedRpc::RequestInfo& request, ::GeneratedRpc::ProcessesData* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GeneratedRpc::ProcessesData>> AsyncGetProcesses(::grpc::ClientContext* context, const ::GeneratedRpc::RequestInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GeneratedRpc::ProcessesData>>(AsyncGetProcessesRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GeneratedRpc::ProcessesData>* AsyncGetProcessesRaw(::grpc::ClientContext* context, const ::GeneratedRpc::RequestInfo& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetProcesses(::grpc::ClientContext* context, const ::GeneratedRpc::RequestInfo& request, ::GeneratedRpc::ProcessesData* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GeneratedRpc::ProcessesData>> AsyncGetProcesses(::grpc::ClientContext* context, const ::GeneratedRpc::RequestInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GeneratedRpc::ProcessesData>>(AsyncGetProcessesRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::GeneratedRpc::ProcessesData>* AsyncGetProcessesRaw(::grpc::ClientContext* context, const ::GeneratedRpc::RequestInfo& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_GetProcesses_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetProcesses(::grpc::ServerContext* context, const ::GeneratedRpc::RequestInfo* request, ::GeneratedRpc::ProcessesData* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetProcesses : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetProcesses() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetProcesses() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetProcesses(::grpc::ServerContext* context, const ::GeneratedRpc::RequestInfo* request, ::GeneratedRpc::ProcessesData* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetProcesses(::grpc::ServerContext* context, ::GeneratedRpc::RequestInfo* request, ::grpc::ServerAsyncResponseWriter< ::GeneratedRpc::ProcessesData>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetProcesses<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_GetProcesses : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetProcesses() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetProcesses() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetProcesses(::grpc::ServerContext* context, const ::GeneratedRpc::RequestInfo* request, ::GeneratedRpc::ProcessesData* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace GeneratedRpc


#endif  // GRPC_requests_2eproto__INCLUDED
