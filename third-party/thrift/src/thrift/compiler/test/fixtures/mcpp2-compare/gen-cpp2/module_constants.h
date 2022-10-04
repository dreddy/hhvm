/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/mcpp2-compare/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_constants_h.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_types.h"

namespace some { namespace valid { namespace ns {

struct module_constants {

  static constexpr bool const aBool_ = static_cast<bool>(true);
  static constexpr bool aBool() {
    return aBool_;
  }

  static constexpr ::std::int8_t const aByte_ = static_cast<::std::int8_t>(1);
  static constexpr ::std::int8_t aByte() {
    return aByte_;
  }

  static constexpr ::std::int16_t const a16BitInt_ = static_cast<::std::int16_t>(12);
  static constexpr ::std::int16_t a16BitInt() {
    return a16BitInt_;
  }

  static constexpr ::std::int32_t const a32BitInt_ = static_cast<::std::int32_t>(123);
  static constexpr ::std::int32_t a32BitInt() {
    return a32BitInt_;
  }

  static constexpr ::std::int64_t const a64BitInt_ = static_cast<::std::int64_t>(1234);
  static constexpr ::std::int64_t a64BitInt() {
    return a64BitInt_;
  }

  static constexpr float const aFloat_ = static_cast<float>(0.1);
  static constexpr float aFloat() {
    return aFloat_;
  }

  static constexpr double const aDouble_ = static_cast<double>(0.12);
  static constexpr double aDouble() {
    return aDouble_;
  }

  static constexpr char const * const aString_ = "Joe Doe";
  static constexpr char const * aString() {
    return aString_;
  }

  static ::std::vector<bool> const& aList();

  static ::std::map<::std::string, ::std::int32_t> const& anEmptyMap();

  static ::std::map<::std::int32_t, ::std::string> const& aMap();

  static ::std::set<::std::string> const& aSet();

  static ::std::vector<::std::vector<::std::int32_t>> const& aListOfLists();

  static ::std::vector<::std::map<::std::string, ::std::int32_t>> const& states();

  static ::std::vector<::some::valid::ns::MyEnumA> const& AConstList();

  static constexpr ::std::int32_t const AnIntegerEnum2_ = static_cast<::std::int32_t>(2);
  static constexpr ::std::int32_t AnIntegerEnum2() {
    return AnIntegerEnum2_;
  }

  static ::std::vector<::std::int32_t> const& AnIntegerEnum2();

  static constexpr ::some::valid::ns::MyEnumA const constEnumA_ = static_cast<::some::valid::ns::MyEnumA>( ::some::valid::ns::MyEnumA::fieldB);
  static constexpr ::some::valid::ns::MyEnumA constEnumA() {
    return constEnumA_;
  }

  static constexpr ::some::valid::ns::MyEnumA const constEnumB_ = static_cast<::some::valid::ns::MyEnumA>(static_cast< ::some::valid::ns::MyEnumA>(3));
  static constexpr ::some::valid::ns::MyEnumA constEnumB() {
    return constEnumB_;
  }

};

}}} // some::valid::ns
