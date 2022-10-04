/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/adapter/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<::facebook::thrift::test::Baz::Type, 5> TEnumDataStorage<::facebook::thrift::test::Baz::Type>::values = {{
  type::intField,
  type::setField,
  type::mapField,
  type::binaryField,
  type::longField,
}};
const std::array<folly::StringPiece, 5> TEnumDataStorage<::facebook::thrift::test::Baz::Type>::names = {{
  "intField",
  "setField",
  "mapField",
  "binaryField",
  "longField",
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::facebook::thrift::test::MyAnnotation>::fields_names = {{
  "signature",
}};
const std::array<int16_t, 1> TStructDataStorage<::facebook::thrift::test::MyAnnotation>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::facebook::thrift::test::MyAnnotation>::fields_types = {{
  TType::T_STRING,
}};
const std::array<folly::StringPiece, 1> TStructDataStorage<::facebook::thrift::test::MyAnnotation>::storage_names = {{
  "__fbthrift_field_signature",
}};
const std::array<int, 1> TStructDataStorage<::facebook::thrift::test::MyAnnotation>::isset_indexes = {{
  0,
}};

const std::array<folly::StringPiece, 11> TStructDataStorage<::facebook::thrift::test::Foo>::fields_names = {{
  "intField",
  "optionalIntField",
  "intFieldWithDefault",
  "setField",
  "optionalSetField",
  "mapField",
  "optionalMapField",
  "binaryField",
  "longField",
  "adaptedLongField",
  "doubleAdaptedField",
}};
const std::array<int16_t, 11> TStructDataStorage<::facebook::thrift::test::Foo>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
}};
const std::array<protocol::TType, 11> TStructDataStorage<::facebook::thrift::test::Foo>::fields_types = {{
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_SET,
  TType::T_SET,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_STRING,
  TType::T_I64,
  TType::T_I64,
  TType::T_I64,
}};
const std::array<folly::StringPiece, 11> TStructDataStorage<::facebook::thrift::test::Foo>::storage_names = {{
  "__fbthrift_field_intField",
  "__fbthrift_field_optionalIntField",
  "__fbthrift_field_intFieldWithDefault",
  "__fbthrift_field_setField",
  "__fbthrift_field_optionalSetField",
  "__fbthrift_field_mapField",
  "__fbthrift_field_optionalMapField",
  "__fbthrift_field_binaryField",
  "__fbthrift_field_longField",
  "__fbthrift_field_adaptedLongField",
  "__fbthrift_field_doubleAdaptedField",
}};
const std::array<int, 11> TStructDataStorage<::facebook::thrift::test::Foo>::isset_indexes = {{
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
}};

const std::array<folly::StringPiece, 5> TStructDataStorage<::facebook::thrift::test::Baz>::fields_names = {{
  "intField",
  "setField",
  "mapField",
  "binaryField",
  "longField",
}};
const std::array<int16_t, 5> TStructDataStorage<::facebook::thrift::test::Baz>::fields_ids = {{
  1,
  4,
  6,
  8,
  9,
}};
const std::array<protocol::TType, 5> TStructDataStorage<::facebook::thrift::test::Baz>::fields_types = {{
  TType::T_I32,
  TType::T_SET,
  TType::T_MAP,
  TType::T_STRING,
  TType::T_I64,
}};
const std::array<folly::StringPiece, 5> TStructDataStorage<::facebook::thrift::test::Baz>::storage_names = {{
  "intField",
  "setField",
  "mapField",
  "binaryField",
  "longField",
}};
const std::array<int, 5> TStructDataStorage<::facebook::thrift::test::Baz>::isset_indexes = {{
  0,
  1,
  2,
  3,
  4,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::facebook::thrift::test::detail::DirectlyAdapted>::fields_names = {{
  "field",
}};
const std::array<int16_t, 1> TStructDataStorage<::facebook::thrift::test::detail::DirectlyAdapted>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::facebook::thrift::test::detail::DirectlyAdapted>::fields_types = {{
  TType::T_I32,
}};
const std::array<folly::StringPiece, 1> TStructDataStorage<::facebook::thrift::test::detail::DirectlyAdapted>::storage_names = {{
  "__fbthrift_field_field",
}};
const std::array<int, 1> TStructDataStorage<::facebook::thrift::test::detail::DirectlyAdapted>::isset_indexes = {{
  0,
}};

const std::array<folly::StringPiece, 7> TStructDataStorage<::facebook::thrift::test::Bar>::fields_names = {{
  "structField",
  "optionalStructField",
  "structListField",
  "optionalStructListField",
  "unionField",
  "optionalUnionField",
  "adaptedStructField",
}};
const std::array<int16_t, 7> TStructDataStorage<::facebook::thrift::test::Bar>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
  7,
}};
const std::array<protocol::TType, 7> TStructDataStorage<::facebook::thrift::test::Bar>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
const std::array<folly::StringPiece, 7> TStructDataStorage<::facebook::thrift::test::Bar>::storage_names = {{
  "__fbthrift_field_structField",
  "__fbthrift_field_optionalStructField",
  "__fbthrift_field_structListField",
  "__fbthrift_field_optionalStructListField",
  "__fbthrift_field_unionField",
  "__fbthrift_field_optionalUnionField",
  "__fbthrift_field_adaptedStructField",
}};
const std::array<int, 7> TStructDataStorage<::facebook::thrift::test::Bar>::isset_indexes = {{
  0,
  1,
  2,
  3,
  4,
  5,
  6,
}};

const std::array<folly::StringPiece, 5> TStructDataStorage<::facebook::thrift::test::StructWithFieldAdapter>::fields_names = {{
  "field",
  "shared_field",
  "opt_shared_field",
  "opt_boxed_field",
  "boxed_field",
}};
const std::array<int16_t, 5> TStructDataStorage<::facebook::thrift::test::StructWithFieldAdapter>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
}};
const std::array<protocol::TType, 5> TStructDataStorage<::facebook::thrift::test::StructWithFieldAdapter>::fields_types = {{
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
}};
const std::array<folly::StringPiece, 5> TStructDataStorage<::facebook::thrift::test::StructWithFieldAdapter>::storage_names = {{
  "__fbthrift_field_field",
  "__fbthrift_field_shared_field",
  "__fbthrift_field_opt_shared_field",
  "__fbthrift_field_opt_boxed_field",
  "__fbthrift_field_boxed_field",
}};
const std::array<int, 5> TStructDataStorage<::facebook::thrift::test::StructWithFieldAdapter>::isset_indexes = {{
  0,
  -1,
  -1,
  -1,
  -1,
}};

const std::array<folly::StringPiece, 3> TStructDataStorage<::facebook::thrift::test::TerseAdaptedFields>::fields_names = {{
  "int_field",
  "string_field",
  "set_field",
}};
const std::array<int16_t, 3> TStructDataStorage<::facebook::thrift::test::TerseAdaptedFields>::fields_ids = {{
  1,
  2,
  3,
}};
const std::array<protocol::TType, 3> TStructDataStorage<::facebook::thrift::test::TerseAdaptedFields>::fields_types = {{
  TType::T_I32,
  TType::T_STRING,
  TType::T_SET,
}};
const std::array<folly::StringPiece, 3> TStructDataStorage<::facebook::thrift::test::TerseAdaptedFields>::storage_names = {{
  "__fbthrift_field_int_field",
  "__fbthrift_field_string_field",
  "__fbthrift_field_set_field",
}};
const std::array<int, 3> TStructDataStorage<::facebook::thrift::test::TerseAdaptedFields>::isset_indexes = {{
  -1,
  -1,
  -1,
}};

const std::array<folly::StringPiece, 0> TStructDataStorage<::facebook::thrift::test::A>::fields_names = {{
}};
const std::array<int16_t, 0> TStructDataStorage<::facebook::thrift::test::A>::fields_ids = {{
}};
const std::array<protocol::TType, 0> TStructDataStorage<::facebook::thrift::test::A>::fields_types = {{
}};
const std::array<folly::StringPiece, 0> TStructDataStorage<::facebook::thrift::test::A>::storage_names = {{
}};
const std::array<int, 0> TStructDataStorage<::facebook::thrift::test::A>::isset_indexes = {{
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::facebook::thrift::test::B>::fields_names = {{
  "a",
}};
const std::array<int16_t, 1> TStructDataStorage<::facebook::thrift::test::B>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::facebook::thrift::test::B>::fields_types = {{
  TType::T_STRUCT,
}};
const std::array<folly::StringPiece, 1> TStructDataStorage<::facebook::thrift::test::B>::storage_names = {{
  "__fbthrift_field_a",
}};
const std::array<int, 1> TStructDataStorage<::facebook::thrift::test::B>::isset_indexes = {{
  0,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::facebook::thrift::test::Config>::fields_names = {{
  "path",
}};
const std::array<int16_t, 1> TStructDataStorage<::facebook::thrift::test::Config>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::facebook::thrift::test::Config>::fields_types = {{
  TType::T_STRING,
}};
const std::array<folly::StringPiece, 1> TStructDataStorage<::facebook::thrift::test::Config>::storage_names = {{
  "__fbthrift_field_path",
}};
const std::array<int, 1> TStructDataStorage<::facebook::thrift::test::Config>::isset_indexes = {{
  0,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::facebook::thrift::test::MyStruct>::fields_names = {{
  "field",
  "set_string",
}};
const std::array<int16_t, 2> TStructDataStorage<::facebook::thrift::test::MyStruct>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::facebook::thrift::test::MyStruct>::fields_types = {{
  TType::T_I32,
  TType::T_SET,
}};
const std::array<folly::StringPiece, 2> TStructDataStorage<::facebook::thrift::test::MyStruct>::storage_names = {{
  "__fbthrift_field_field",
  "__fbthrift_field_set_string",
}};
const std::array<int, 2> TStructDataStorage<::facebook::thrift::test::MyStruct>::isset_indexes = {{
  0,
  1,
}};

} // namespace thrift
} // namespace apache
