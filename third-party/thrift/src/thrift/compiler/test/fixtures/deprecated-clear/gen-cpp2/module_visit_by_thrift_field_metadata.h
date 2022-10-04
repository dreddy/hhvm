/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/deprecated-clear/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/deprecated-clear/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByFieldId<::apache::thrift::test::StructWithDefaultStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).bool_field_ref());
    case 2:
      return f(1, static_cast<T&&>(t).byte_field_ref());
    case 3:
      return f(2, static_cast<T&&>(t).short_field_ref());
    case 4:
      return f(3, static_cast<T&&>(t).int_field_ref());
    case 5:
      return f(4, static_cast<T&&>(t).long_field_ref());
    case 6:
      return f(5, static_cast<T&&>(t).float_field_ref());
    case 7:
      return f(6, static_cast<T&&>(t).double_field_ref());
    case 8:
      return f(7, static_cast<T&&>(t).string_field_ref());
    case 9:
      return f(8, static_cast<T&&>(t).binary_field_ref());
    case 10:
      return f(9, static_cast<T&&>(t).enum_field_ref());
    case 11:
      return f(10, static_cast<T&&>(t).list_field_ref());
    case 12:
      return f(11, static_cast<T&&>(t).set_field_ref());
    case 13:
      return f(12, static_cast<T&&>(t).map_field_ref());
    default:
      throwInvalidThriftId(fieldId, "::apache::thrift::test::StructWithDefaultStruct");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
