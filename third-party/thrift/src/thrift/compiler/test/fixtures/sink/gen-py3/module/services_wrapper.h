/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#if __has_include(<thrift/compiler/test/fixtures/sink/src/gen-cpp2/SinkService.h>)
#include <thrift/compiler/test/fixtures/sink/src/gen-cpp2/SinkService.h>
#else
#include <thrift/compiler/test/fixtures/sink/src/gen-cpp2/module_handlers.h>
#endif
#include <folly/python/futures.h>
#include <Python.h>

#include <memory>

namespace cpp2 {

class SinkServiceWrapper : virtual public SinkServiceSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit SinkServiceWrapper(PyObject *if_object, folly::Executor *exc);
folly::SemiFuture<folly::Unit> semifuture_onStartServing() override;
folly::SemiFuture<folly::Unit> semifuture_onStopRequested() override;
};

std::shared_ptr<apache::thrift::ServerInterface> SinkServiceInterface(PyObject *if_object, folly::Executor *exc);
} // namespace cpp2
