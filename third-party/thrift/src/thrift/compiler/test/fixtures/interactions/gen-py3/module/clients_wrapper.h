/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#if __has_include(<thrift/compiler/test/fixtures/interactions/src/gen-cpp2/MyService.h>)
#include <thrift/compiler/test/fixtures/interactions/src/gen-cpp2/MyService.h>
#else
#include <thrift/compiler/test/fixtures/interactions/src/gen-cpp2/module_clients.h>
#endif

#include <folly/futures/Future.h>
#include <folly/futures/Promise.h>
#include <folly/Unit.h>
#include <thrift/lib/py3/clientcallbacks.h>
#include <thrift/lib/py3/client_wrapper.h>

#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <set>
#include <vector>

namespace cpp2 {

class MyServiceClientWrapper : public ::thrift::py3::ClientWrapper {
  public:
    using ::thrift::py3::ClientWrapper::ClientWrapper;

    folly::Future<folly::Unit> foo(
      apache::thrift::RpcOptions& rpcOptions);
    folly::Future<folly::Unit> interact(
      apache::thrift::RpcOptions& rpcOptions,
      int32_t arg_arg);
    folly::Future<int32_t> interactFast(
      apache::thrift::RpcOptions& rpcOptions);
    folly::Future<apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>> serialize(
      apache::thrift::RpcOptions& rpcOptions);

    class MyInteractionInteractionWrapper : public ClientWrapper {
      public:
        MyInteractionInteractionWrapper(
          std::unique_ptr<apache::thrift::GeneratedAsyncClient> async_client,
           std::shared_ptr<apache::thrift::RequestChannel> channel)
           : ClientWrapper(std::move(async_client), channel) {}

        folly::Future<int32_t> frobnicate(
          apache::thrift::RpcOptions& rpcOptions);
        folly::Future<folly::Unit> ping(
          apache::thrift::RpcOptions& rpcOptions);
        folly::Future<apache::thrift::ClientBufferedStream<bool>> truthify(
          apache::thrift::RpcOptions& rpcOptions);
    };

    class MyInteractionFastInteractionWrapper : public ClientWrapper {
      public:
        MyInteractionFastInteractionWrapper(
          std::unique_ptr<apache::thrift::GeneratedAsyncClient> async_client,
           std::shared_ptr<apache::thrift::RequestChannel> channel)
           : ClientWrapper(std::move(async_client), channel) {}

        folly::Future<int32_t> frobnicate(
          apache::thrift::RpcOptions& rpcOptions);
        folly::Future<folly::Unit> ping(
          apache::thrift::RpcOptions& rpcOptions);
        folly::Future<apache::thrift::ClientBufferedStream<bool>> truthify(
          apache::thrift::RpcOptions& rpcOptions);
    };

    class SerialInteractionInteractionWrapper : public ClientWrapper {
      public:
        SerialInteractionInteractionWrapper(
          std::unique_ptr<apache::thrift::GeneratedAsyncClient> async_client,
           std::shared_ptr<apache::thrift::RequestChannel> channel)
           : ClientWrapper(std::move(async_client), channel) {}

        folly::Future<folly::Unit> frobnicate(
          apache::thrift::RpcOptions& rpcOptions);
    };
    folly::Future<std::unique_ptr<::thrift::py3::ClientWrapper>> createMyInteraction();
    folly::Future<std::unique_ptr<::thrift::py3::ClientWrapper>> createMyInteractionFast();
    folly::Future<std::unique_ptr<::thrift::py3::ClientWrapper>> createSerialInteraction();
};


} // namespace cpp2
