/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/maps-with-incomplete-types/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <vector>

#include <thrift/lib/cpp2/gen/module_metadata_h.h>
#include "thrift/compiler/test/fixtures/maps-with-incomplete-types/gen-cpp2/module_types.h"


namespace apache {
namespace thrift {
namespace detail {
namespace md {

template <>
class StructMetadata<::apache::thrift::test::B> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::test::A> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
