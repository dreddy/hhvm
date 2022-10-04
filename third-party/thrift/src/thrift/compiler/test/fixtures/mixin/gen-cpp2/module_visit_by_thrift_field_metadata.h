/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/mixin/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/mixin/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByFieldId<::cpp2::Mixin1> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field1_ref());
    default:
      throwInvalidThriftId(fieldId, "::cpp2::Mixin1");
    }
  }
};

template <>
struct VisitByFieldId<::cpp2::Mixin2> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).m1_ref());
    case 2:
      return f(1, static_cast<T&&>(t).field2_ref());
    default:
      throwInvalidThriftId(fieldId, "::cpp2::Mixin2");
    }
  }
};

template <>
struct VisitByFieldId<::cpp2::Mixin3Base> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field3_ref());
    default:
      throwInvalidThriftId(fieldId, "::cpp2::Mixin3Base");
    }
  }
};

template <>
struct VisitByFieldId<::cpp2::Foo> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field4_ref());
    case 2:
      return f(1, static_cast<T&&>(t).m2_ref());
    case 3:
      return f(2, static_cast<T&&>(t).m3_ref());
    default:
      throwInvalidThriftId(fieldId, "::cpp2::Foo");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
