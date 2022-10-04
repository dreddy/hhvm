/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/basic/gen-cpp2/DbMixedStackArgumentsAsyncClient.h"
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_types.h"
#include "thrift/annotation/gen-cpp2/hack_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace test { namespace fixtures { namespace basic {
class DbMixedStackArguments;
class DbMixedStackArgumentsAsyncProcessor;

class DbMixedStackArgumentsServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};
}}} // test::fixtures::basic

namespace apache::thrift {
template <>
class ServiceHandler<::test::fixtures::basic::DbMixedStackArguments> : public apache::thrift::ServerInterface {
 public:
  std::string_view getGeneratedName() const override { return "DbMixedStackArguments"; }

  static const char* __fbthrift_thrift_uri() {
    return "test.dev/fixtures/basic/DbMixedStackArguments";
  }

  typedef ::test::fixtures::basic::DbMixedStackArgumentsAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;
 private:
  std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> getServiceRequestInfoMap() const;
 public:

  virtual void sync_getDataByKey0(::std::string& /*_return*/, std::unique_ptr<::std::string> /*key*/);
  [[deprecated("Use sync_getDataByKey0 instead")]] virtual void getDataByKey0(::std::string& /*_return*/, std::unique_ptr<::std::string> /*key*/);
  virtual folly::Future<std::unique_ptr<::std::string>> future_getDataByKey0(std::unique_ptr<::std::string> p_key);
  virtual folly::SemiFuture<std::unique_ptr<::std::string>> semifuture_getDataByKey0(std::unique_ptr<::std::string> p_key);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<std::unique_ptr<::std::string>> co_getDataByKey0(std::unique_ptr<::std::string> p_key);
  virtual folly::coro::Task<std::unique_ptr<::std::string>> co_getDataByKey0(apache::thrift::RequestParams params, std::unique_ptr<::std::string> p_key);
#endif
  virtual void async_tm_getDataByKey0(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback, std::unique_ptr<::std::string> p_key);
  virtual void sync_getDataByKey1(::std::string& /*_return*/, std::unique_ptr<::std::string> /*key*/);
  [[deprecated("Use sync_getDataByKey1 instead")]] virtual void getDataByKey1(::std::string& /*_return*/, std::unique_ptr<::std::string> /*key*/);
  virtual folly::Future<std::unique_ptr<::std::string>> future_getDataByKey1(std::unique_ptr<::std::string> p_key);
  virtual folly::SemiFuture<std::unique_ptr<::std::string>> semifuture_getDataByKey1(std::unique_ptr<::std::string> p_key);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<std::unique_ptr<::std::string>> co_getDataByKey1(std::unique_ptr<::std::string> p_key);
  virtual folly::coro::Task<std::unique_ptr<::std::string>> co_getDataByKey1(apache::thrift::RequestParams params, std::unique_ptr<::std::string> p_key);
#endif
  virtual void async_tm_getDataByKey1(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback, std::unique_ptr<::std::string> p_key);
 private:
  static ::test::fixtures::basic::DbMixedStackArgumentsServiceInfoHolder __fbthrift_serviceInfoHolder;
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_getDataByKey0{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_getDataByKey1{apache::thrift::detail::si::InvocationType::AsyncTm};
};

} // namespace apache::thrift

namespace test { namespace fixtures { namespace basic {
using DbMixedStackArgumentsSvIf [[deprecated("Use apache::thrift::ServiceHandler<DbMixedStackArguments> instead")]] = ::apache::thrift::ServiceHandler<DbMixedStackArguments>;
}}} // test::fixtures::basic
namespace test { namespace fixtures { namespace basic {
class DbMixedStackArgumentsSvNull : public ::apache::thrift::ServiceHandler<DbMixedStackArguments> {
 public:
  void getDataByKey0(::std::string& /*_return*/, std::unique_ptr<::std::string> /*key*/) override;
  void getDataByKey1(::std::string& /*_return*/, std::unique_ptr<::std::string> /*key*/) override;
};

class DbMixedStackArgumentsAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessorBase {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  ::apache::thrift::ServiceHandler<::test::fixtures::basic::DbMixedStackArguments>* iface_;
 public:
  // This is implemented in case the corresponding AsyncProcessorFactory did not implement createMethodMetadata.
  // This can happen if the service is using a custom AsyncProcessorFactory but re-using the same AsyncProcessor.
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  // By default, this overload will be called for generated services
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  void executeRequest(apache::thrift::ServerRequest&& serverRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessorBase::ProcessFuncs<DbMixedStackArgumentsAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessorBase::ProcessMap<ProcessFuncs>;
  static const DbMixedStackArgumentsAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const DbMixedStackArgumentsAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_getDataByKey0(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_getDataByKey0(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_getDataByKey0(apache::thrift::ContextStack* ctx, ::std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_getDataByKey0(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_getDataByKey1(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_getDataByKey1(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_getDataByKey1(apache::thrift::ContextStack* ctx, ::std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_getDataByKey1(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  DbMixedStackArgumentsAsyncProcessor(::apache::thrift::ServiceHandler<::test::fixtures::basic::DbMixedStackArguments>* iface) :
      iface_(iface) {}
  ~DbMixedStackArgumentsAsyncProcessor() override {}
};

}}} // test::fixtures::basic
