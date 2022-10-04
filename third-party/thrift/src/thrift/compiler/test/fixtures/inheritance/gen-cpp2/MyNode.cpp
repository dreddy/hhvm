/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/inheritance/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/MyNode.h"
#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/MyNode.tcc"
#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

std::unique_ptr<apache::thrift::AsyncProcessor> apache::thrift::ServiceHandler<::cpp2::MyNode>::getProcessor() {
  return std::make_unique<::cpp2::MyNodeAsyncProcessor>(this);
}

apache::thrift::ServiceHandler<::cpp2::MyNode>::CreateMethodMetadataResult apache::thrift::ServiceHandler<::cpp2::MyNode>::createMethodMetadata() {
  return ::apache::thrift::detail::ap::createMethodMetadataMap<::cpp2::MyNodeAsyncProcessor>(getServiceRequestInfoMap().value().get());
}

std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> apache::thrift::ServiceHandler<::cpp2::MyNode>::getServiceRequestInfoMap() const {
  return __fbthrift_serviceInfoHolder.requestInfoMap();
}

::cpp2::MyNodeServiceInfoHolder apache::thrift::ServiceHandler<::cpp2::MyNode>::__fbthrift_serviceInfoHolder;


void apache::thrift::ServiceHandler<::cpp2::MyNode>::do_mid() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("do_mid");
}

void apache::thrift::ServiceHandler<::cpp2::MyNode>::sync_do_mid() {
  return do_mid();
}

folly::SemiFuture<folly::Unit> apache::thrift::ServiceHandler<::cpp2::MyNode>::semifuture_do_mid() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_do_mid.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  sync_do_mid();
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> apache::thrift::ServiceHandler<::cpp2::MyNode>::future_do_mid() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_do_mid.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_do_mid(), getInternalKeepAlive());
}

#if FOLLY_HAS_COROUTINES
folly::coro::Task<void> apache::thrift::ServiceHandler<::cpp2::MyNode>::co_do_mid() {
  auto expected{apache::thrift::detail::si::InvocationType::Coro};
  __fbthrift_invocation_do_mid.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
  folly::throw_exception(apache::thrift::detail::si::UnimplementedCoroMethod::withCapturedArgs<>());
}

folly::coro::Task<void> apache::thrift::ServiceHandler<::cpp2::MyNode>::co_do_mid(apache::thrift::RequestParams /* params */) {
  auto expected{apache::thrift::detail::si::InvocationType::CoroParam};
  __fbthrift_invocation_do_mid.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Coro, std::memory_order_relaxed);
  return co_do_mid();
}
#endif // FOLLY_HAS_COROUTINES

void apache::thrift::ServiceHandler<::cpp2::MyNode>::async_tm_do_mid(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
#if FOLLY_HAS_COROUTINES
determineInvocationType:
#endif // FOLLY_HAS_COROUTINES
  auto invocationType = __fbthrift_invocation_do_mid.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
#if FOLLY_HAS_COROUTINES
        __fbthrift_invocation_do_mid.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::CoroParam, std::memory_order_relaxed);
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_do_mid(params);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
#else // FOLLY_HAS_COROUTINES
        __fbthrift_invocation_do_mid.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
#endif // FOLLY_HAS_COROUTINES
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_do_mid();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_do_mid();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
#if FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::CoroParam:
      {
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_do_mid(params);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Coro:
      {
        auto task = co_do_mid();
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
#endif // FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        sync_do_mid();
        callback->done();
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
#if FOLLY_HAS_COROUTINES
  } catch (apache::thrift::detail::si::UnimplementedCoroMethod& ex) {
    std::tie() = std::move(ex).restoreArgs<>();
    goto determineInvocationType;
#endif // FOLLY_HAS_COROUTINES
  } catch (...) {
    callback->exception(std::current_exception());
  }
}


namespace cpp2 {

void MyNodeSvNull::do_mid() {
  return;
}


const char* MyNodeAsyncProcessor::getServiceName() {
  return "MyNode";
}

void MyNodeAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyNode>>::gen(response);
}

void MyNodeAsyncProcessor::processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

void MyNodeAsyncProcessor::processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, iface_, std::move(req), std::move(serializedRequest), methodMetadata, protType, context, eb, tm);
}

void MyNodeAsyncProcessor::executeRequest(apache::thrift::ServerRequest&& request, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) {
  apache::thrift::detail::ap::execute(this, std::move(request), apache::thrift::detail::ServerRequestHelper::protocol(request), methodMetadata);
}

const MyNodeAsyncProcessor::ProcessMap& MyNodeAsyncProcessor::getOwnProcessMap() {
  return kOwnProcessMap_;
}

const MyNodeAsyncProcessor::ProcessMap MyNodeAsyncProcessor::kOwnProcessMap_ {
  {"do_mid",
    {&MyNodeAsyncProcessor::setUpAndProcess_do_mid<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyNodeAsyncProcessor::setUpAndProcess_do_mid<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &MyNodeAsyncProcessor::executeRequest_do_mid<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyNodeAsyncProcessor::executeRequest_do_mid<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
};

apache::thrift::ServiceRequestInfoMap const& MyNodeServiceInfoHolder::requestInfoMap() const {
  static folly::Indestructible<apache::thrift::ServiceRequestInfoMap> requestInfoMap{staticRequestInfoMap()};
  return *requestInfoMap;
}

apache::thrift::ServiceRequestInfoMap MyNodeServiceInfoHolder::staticRequestInfoMap() {
  apache::thrift::ServiceRequestInfoMap requestInfoMap = {
  {"do_mid",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "MyNode.do_mid",
     std::nullopt,
     apache::thrift::concurrency::NORMAL}},
  };
  apache::thrift::ServiceRequestInfoMap parentMap = ::cpp2::MyRootServiceInfoHolder::staticRequestInfoMap();
  requestInfoMap.insert(std::begin(parentMap), std::end(parentMap));

  return requestInfoMap;
}
} // cpp2
