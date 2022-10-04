/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/types/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/types/gen-cpp2/include_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace apache { namespace thrift { namespace fixtures { namespace types {
class SomeService;
}}}} // apache::thrift::fixtures::types
namespace apache::thrift {

template <>
class Client<::apache::thrift::fixtures::types::SomeService> : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "SomeService";
  }


  virtual void bounce_map(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::apache::thrift::fixtures::types::SomeMap& p_m);
  virtual void bounce_map(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::apache::thrift::fixtures::types::SomeMap& p_m);
 protected:
  void bounce_mapImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::apache::thrift::fixtures::types::SomeMap& p_m, bool stealRpcOptions = false);
 public:

  virtual void sync_bounce_map(::apache::thrift::fixtures::types::SomeMap& _return, const ::apache::thrift::fixtures::types::SomeMap& p_m);
  virtual void sync_bounce_map(apache::thrift::RpcOptions& rpcOptions, ::apache::thrift::fixtures::types::SomeMap& _return, const ::apache::thrift::fixtures::types::SomeMap& p_m);

  virtual folly::Future<::apache::thrift::fixtures::types::SomeMap> future_bounce_map(const ::apache::thrift::fixtures::types::SomeMap& p_m);
  virtual folly::SemiFuture<::apache::thrift::fixtures::types::SomeMap> semifuture_bounce_map(const ::apache::thrift::fixtures::types::SomeMap& p_m);
  virtual folly::Future<::apache::thrift::fixtures::types::SomeMap> future_bounce_map(apache::thrift::RpcOptions& rpcOptions, const ::apache::thrift::fixtures::types::SomeMap& p_m);
  virtual folly::SemiFuture<::apache::thrift::fixtures::types::SomeMap> semifuture_bounce_map(apache::thrift::RpcOptions& rpcOptions, const ::apache::thrift::fixtures::types::SomeMap& p_m);
  virtual folly::Future<std::pair<::apache::thrift::fixtures::types::SomeMap, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_bounce_map(apache::thrift::RpcOptions& rpcOptions, const ::apache::thrift::fixtures::types::SomeMap& p_m);
  virtual folly::SemiFuture<std::pair<::apache::thrift::fixtures::types::SomeMap, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_bounce_map(apache::thrift::RpcOptions& rpcOptions, const ::apache::thrift::fixtures::types::SomeMap& p_m);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<::apache::thrift::fixtures::types::SomeMap> co_bounce_map(const ::apache::thrift::fixtures::types::SomeMap& p_m) {
    return co_bounce_map<false>(nullptr, p_m);
  }
  template <int = 0>
  folly::coro::Task<::apache::thrift::fixtures::types::SomeMap> co_bounce_map(apache::thrift::RpcOptions& rpcOptions, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
    return co_bounce_map<true>(&rpcOptions, p_m);
  }
#else
  folly::coro::Task<::apache::thrift::fixtures::types::SomeMap> co_bounce_map(const ::apache::thrift::fixtures::types::SomeMap& p_m) {
    co_return co_await folly::coro::detachOnCancel(semifuture_bounce_map(p_m));
  }
  folly::coro::Task<::apache::thrift::fixtures::types::SomeMap> co_bounce_map(apache::thrift::RpcOptions& rpcOptions, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
    co_return co_await folly::coro::detachOnCancel(semifuture_bounce_map(rpcOptions, p_m));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::apache::thrift::fixtures::types::SomeMap> co_bounce_map(apache::thrift::RpcOptions* rpcOptions, const ::apache::thrift::fixtures::types::SomeMap& p_m) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = bounce_mapCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      bounce_mapImpl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_m);
    } else {
      bounce_mapImpl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_m);
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    ::apache::thrift::fixtures::types::SomeMap _return;
    if (auto ew = recv_wrapped_bounce_map(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void bounce_map(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::apache::thrift::fixtures::types::SomeMap& p_m);


  static folly::exception_wrapper recv_wrapped_bounce_map(::apache::thrift::fixtures::types::SomeMap& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_bounce_map(::apache::thrift::fixtures::types::SomeMap& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_bounce_map(::apache::thrift::fixtures::types::SomeMap& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_bounce_map(::apache::thrift::fixtures::types::SomeMap& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void bounce_mapT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::apache::thrift::fixtures::types::SomeMap& p_m);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> bounce_mapCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void binary_keyed_map(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::vector<::std::int64_t>& p_r);
  virtual void binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::vector<::std::int64_t>& p_r);
 protected:
  void binary_keyed_mapImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::vector<::std::int64_t>& p_r, bool stealRpcOptions = false);
 public:

  virtual void sync_binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& _return, const ::std::vector<::std::int64_t>& p_r);
  virtual void sync_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, ::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& _return, const ::std::vector<::std::int64_t>& p_r);

  virtual folly::Future<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>> future_binary_keyed_map(const ::std::vector<::std::int64_t>& p_r);
  virtual folly::SemiFuture<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>> semifuture_binary_keyed_map(const ::std::vector<::std::int64_t>& p_r);
  virtual folly::Future<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>> future_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::int64_t>& p_r);
  virtual folly::SemiFuture<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>> semifuture_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::int64_t>& p_r);
  virtual folly::Future<std::pair<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::int64_t>& p_r);
  virtual folly::SemiFuture<std::pair<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::int64_t>& p_r);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>> co_binary_keyed_map(const ::std::vector<::std::int64_t>& p_r) {
    return co_binary_keyed_map<false>(nullptr, p_r);
  }
  template <int = 0>
  folly::coro::Task<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>> co_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::int64_t>& p_r) {
    return co_binary_keyed_map<true>(&rpcOptions, p_r);
  }
#else
  folly::coro::Task<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>> co_binary_keyed_map(const ::std::vector<::std::int64_t>& p_r) {
    co_return co_await folly::coro::detachOnCancel(semifuture_binary_keyed_map(p_r));
  }
  folly::coro::Task<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>> co_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<::std::int64_t>& p_r) {
    co_return co_await folly::coro::detachOnCancel(semifuture_binary_keyed_map(rpcOptions, p_r));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>> co_binary_keyed_map(apache::thrift::RpcOptions* rpcOptions, const ::std::vector<::std::int64_t>& p_r) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = binary_keyed_mapCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      binary_keyed_mapImpl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_r);
    } else {
      binary_keyed_mapImpl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_r);
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    ::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t> _return;
    if (auto ew = recv_wrapped_binary_keyed_map(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void binary_keyed_map(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::std::vector<::std::int64_t>& p_r);


  static folly::exception_wrapper recv_wrapped_binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void binary_keyed_mapT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::vector<::std::int64_t>& p_r);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> binary_keyed_mapCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};

} // namespace apache::thrift

namespace apache { namespace thrift { namespace fixtures { namespace types {
using SomeServiceAsyncClient [[deprecated("Use apache::thrift::Client<SomeService> instead")]] = ::apache::thrift::Client<SomeService>;
}}}} // apache::thrift::fixtures::types
