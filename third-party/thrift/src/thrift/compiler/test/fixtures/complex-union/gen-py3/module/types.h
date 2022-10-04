/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include <thrift/lib/py3/enums.h>
#include "thrift/compiler/test/fixtures/complex-union/src/gen-cpp2/module_data.h"
#include "thrift/compiler/test/fixtures/complex-union/src/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/complex-union/src/gen-cpp2/module_metadata.h"
namespace thrift {
namespace py3 {


template<>
const std::vector<std::pair<std::string_view, std::string_view>>& PyEnumTraits<
    ::cpp2::ComplexUnion::Type>::namesmap() {
  static const folly::Indestructible<NamesMap> pairs {
    {
    }
  };
  return *pairs;
}

template<>
const std::vector<std::pair<std::string_view, std::string_view>>& PyEnumTraits<
    ::cpp2::ListUnion::Type>::namesmap() {
  static const folly::Indestructible<NamesMap> pairs {
    {
    }
  };
  return *pairs;
}

template<>
const std::vector<std::pair<std::string_view, std::string_view>>& PyEnumTraits<
    ::cpp2::DataUnion::Type>::namesmap() {
  static const folly::Indestructible<NamesMap> pairs {
    {
    }
  };
  return *pairs;
}

template<>
const std::vector<std::pair<std::string_view, std::string_view>>& PyEnumTraits<
    ::cpp2::ValUnion::Type>::namesmap() {
  static const folly::Indestructible<NamesMap> pairs {
    {
    }
  };
  return *pairs;
}

template<>
const std::vector<std::pair<std::string_view, std::string_view>>& PyEnumTraits<
    ::cpp2::VirtualComplexUnion::Type>::namesmap() {
  static const folly::Indestructible<NamesMap> pairs {
    {
    }
  };
  return *pairs;
}

template<>
const std::vector<std::pair<std::string_view, std::string_view>>& PyEnumTraits<
    ::cpp2::NonCopyableUnion::Type>::namesmap() {
  static const folly::Indestructible<NamesMap> pairs {
    {
    }
  };
  return *pairs;
}


template<>
void reset_field<::cpp2::Val>(
    ::cpp2::Val& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.strVal_ref().copy_from(default_inst<::cpp2::Val>().strVal_ref());
      return;
    case 1:
      obj.intVal_ref().copy_from(default_inst<::cpp2::Val>().intVal_ref());
      return;
    case 2:
      obj.typedefValue_ref().copy_from(default_inst<::cpp2::Val>().typedefValue_ref());
      return;
  }
}

template<>
void reset_field<::cpp2::NonCopyableStruct>(
    ::cpp2::NonCopyableStruct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.num_ref().copy_from(default_inst<::cpp2::NonCopyableStruct>().num_ref());
      return;
  }
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::ComplexUnion>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::ListUnion>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::DataUnion>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::Val>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::ValUnion>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::VirtualComplexUnion>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::NonCopyableStruct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::NonCopyableUnion>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift
