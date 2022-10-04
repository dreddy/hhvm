/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/nimble/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/nimble/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::BasicTypes>::fields_names = {{
  "first",
  "second",
  "third",
  "isTrue",
}};
const std::array<int16_t, 4> TStructDataStorage<::cpp2::BasicTypes>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::cpp2::BasicTypes>::fields_types = {{
  TType::T_I32,
  TType::T_I32,
  TType::T_I64,
  TType::T_BOOL,
}};
const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::BasicTypes>::storage_names = {{
  "__fbthrift_field_first",
  "__fbthrift_field_second",
  "__fbthrift_field_third",
  "__fbthrift_field_isTrue",
}};
const std::array<int, 4> TStructDataStorage<::cpp2::BasicTypes>::isset_indexes = {{
  -1,
  0,
  1,
  2,
}};

} // namespace thrift
} // namespace apache
