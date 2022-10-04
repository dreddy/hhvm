/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/complex-struct/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/complex-struct/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<::cpp2::MyEnum, 5> TEnumDataStorage<::cpp2::MyEnum>::values = {{
  type::MyValue1,
  type::MyValue2,
  type::MyValue3,
  type::MyValue4,
  type::MyValue5,
}};
const std::array<folly::StringPiece, 5> TEnumDataStorage<::cpp2::MyEnum>::names = {{
  "MyValue1",
  "MyValue2",
  "MyValue3",
  "MyValue4",
  "MyValue5",
}};

const std::array<::cpp2::MyUnion::Type, 6> TEnumDataStorage<::cpp2::MyUnion::Type>::values = {{
  type::myEnum,
  type::myStruct,
  type::myDataItem,
  type::complexNestedStruct,
  type::longValue,
  type::intValue,
}};
const std::array<folly::StringPiece, 6> TEnumDataStorage<::cpp2::MyUnion::Type>::names = {{
  "myEnum",
  "myStruct",
  "myDataItem",
  "complexNestedStruct",
  "longValue",
  "intValue",
}};

const std::array<::cpp2::MyUnionFloatFieldThrowExp::Type, 4> TEnumDataStorage<::cpp2::MyUnionFloatFieldThrowExp::Type>::values = {{
  type::myEnum,
  type::setFloat,
  type::myDataItem,
  type::complexNestedStruct,
}};
const std::array<folly::StringPiece, 4> TEnumDataStorage<::cpp2::MyUnionFloatFieldThrowExp::Type>::names = {{
  "myEnum",
  "setFloat",
  "myDataItem",
  "complexNestedStruct",
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::MyStructFloatFieldThrowExp>::fields_names = {{
  "myLongField",
  "MyByteField",
  "myStringField",
  "myFloatField",
}};
const std::array<int16_t, 4> TStructDataStorage<::cpp2::MyStructFloatFieldThrowExp>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::cpp2::MyStructFloatFieldThrowExp>::fields_types = {{
  TType::T_I64,
  TType::T_BYTE,
  TType::T_STRING,
  TType::T_FLOAT,
}};
const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::MyStructFloatFieldThrowExp>::storage_names = {{
  "__fbthrift_field_myLongField",
  "__fbthrift_field_MyByteField",
  "__fbthrift_field_myStringField",
  "__fbthrift_field_myFloatField",
}};
const std::array<int, 4> TStructDataStorage<::cpp2::MyStructFloatFieldThrowExp>::isset_indexes = {{
  0,
  1,
  2,
  3,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::MyStructMapFloatThrowExp>::fields_names = {{
  "myLongField",
  "mapListOfFloats",
}};
const std::array<int16_t, 2> TStructDataStorage<::cpp2::MyStructMapFloatThrowExp>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::MyStructMapFloatThrowExp>::fields_types = {{
  TType::T_I64,
  TType::T_MAP,
}};
const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::MyStructMapFloatThrowExp>::storage_names = {{
  "__fbthrift_field_myLongField",
  "__fbthrift_field_mapListOfFloats",
}};
const std::array<int, 2> TStructDataStorage<::cpp2::MyStructMapFloatThrowExp>::isset_indexes = {{
  0,
  1,
}};

const std::array<folly::StringPiece, 0> TStructDataStorage<::cpp2::MyDataItem>::fields_names = {{
}};
const std::array<int16_t, 0> TStructDataStorage<::cpp2::MyDataItem>::fields_ids = {{
}};
const std::array<protocol::TType, 0> TStructDataStorage<::cpp2::MyDataItem>::fields_types = {{
}};
const std::array<folly::StringPiece, 0> TStructDataStorage<::cpp2::MyDataItem>::storage_names = {{
}};
const std::array<int, 0> TStructDataStorage<::cpp2::MyDataItem>::isset_indexes = {{
}};

const std::array<folly::StringPiece, 28> TStructDataStorage<::cpp2::MyStruct>::fields_names = {{
  "MyIntField",
  "MyStringField",
  "MyDataField",
  "myEnum",
  "MyBoolField",
  "MyByteField",
  "MyShortField",
  "MyLongField",
  "MyDoubleField",
  "lDouble",
  "lShort",
  "lInteger",
  "lLong",
  "lString",
  "lBool",
  "lByte",
  "mShortString",
  "mIntegerString",
  "mStringMyStruct",
  "mStringBool",
  "mIntegerInteger",
  "mIntegerBool",
  "sShort",
  "sMyStruct",
  "sLong",
  "sString",
  "sByte",
  "mListList",
}};
const std::array<int16_t, 28> TStructDataStorage<::cpp2::MyStruct>::fields_ids = {{
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
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
}};
const std::array<protocol::TType, 28> TStructDataStorage<::cpp2::MyStruct>::fields_types = {{
  TType::T_I64,
  TType::T_STRING,
  TType::T_STRUCT,
  TType::T_I32,
  TType::T_BOOL,
  TType::T_BYTE,
  TType::T_I16,
  TType::T_I64,
  TType::T_DOUBLE,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_SET,
  TType::T_SET,
  TType::T_SET,
  TType::T_SET,
  TType::T_SET,
  TType::T_MAP,
}};
const std::array<folly::StringPiece, 28> TStructDataStorage<::cpp2::MyStruct>::storage_names = {{
  "__fbthrift_field_MyIntField",
  "__fbthrift_field_MyStringField",
  "__fbthrift_field_MyDataField",
  "__fbthrift_field_myEnum",
  "__fbthrift_field_MyBoolField",
  "__fbthrift_field_MyByteField",
  "__fbthrift_field_MyShortField",
  "__fbthrift_field_MyLongField",
  "__fbthrift_field_MyDoubleField",
  "__fbthrift_field_lDouble",
  "__fbthrift_field_lShort",
  "__fbthrift_field_lInteger",
  "__fbthrift_field_lLong",
  "__fbthrift_field_lString",
  "__fbthrift_field_lBool",
  "__fbthrift_field_lByte",
  "__fbthrift_field_mShortString",
  "__fbthrift_field_mIntegerString",
  "__fbthrift_field_mStringMyStruct",
  "__fbthrift_field_mStringBool",
  "__fbthrift_field_mIntegerInteger",
  "__fbthrift_field_mIntegerBool",
  "__fbthrift_field_sShort",
  "__fbthrift_field_sMyStruct",
  "__fbthrift_field_sLong",
  "__fbthrift_field_sString",
  "__fbthrift_field_sByte",
  "__fbthrift_field_mListList",
}};
const std::array<int, 28> TStructDataStorage<::cpp2::MyStruct>::isset_indexes = {{
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
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::SimpleStruct>::fields_names = {{
  "age",
  "name",
}};
const std::array<int16_t, 2> TStructDataStorage<::cpp2::SimpleStruct>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::SimpleStruct>::fields_types = {{
  TType::T_I64,
  TType::T_STRING,
}};
const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::SimpleStruct>::storage_names = {{
  "__fbthrift_field_age",
  "__fbthrift_field_name",
}};
const std::array<int, 2> TStructDataStorage<::cpp2::SimpleStruct>::isset_indexes = {{
  0,
  1,
}};

const std::array<folly::StringPiece, 18> TStructDataStorage<::cpp2::ComplexNestedStruct>::fields_names = {{
  "setOfSetOfInt",
  "listofListOfListOfListOfEnum",
  "listOfListOfMyStruct",
  "setOfListOfListOfLong",
  "setOfSetOfsetOfLong",
  "mapStructListOfListOfLong",
  "mKeyStructValInt",
  "listOfMapKeyIntValInt",
  "listOfMapKeyStrValList",
  "mapKeySetValLong",
  "mapKeyListValLong",
  "mapKeyMapValMap",
  "mapKeySetValMap",
  "NestedMaps",
  "mapKeyIntValList",
  "mapKeyIntValSet",
  "mapKeySetValInt",
  "mapKeyListValSet",
}};
const std::array<int16_t, 18> TStructDataStorage<::cpp2::ComplexNestedStruct>::fields_ids = {{
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
  12,
  13,
  14,
  15,
  16,
  17,
  18,
}};
const std::array<protocol::TType, 18> TStructDataStorage<::cpp2::ComplexNestedStruct>::fields_types = {{
  TType::T_SET,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_SET,
  TType::T_SET,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
}};
const std::array<folly::StringPiece, 18> TStructDataStorage<::cpp2::ComplexNestedStruct>::storage_names = {{
  "__fbthrift_field_setOfSetOfInt",
  "__fbthrift_field_listofListOfListOfListOfEnum",
  "__fbthrift_field_listOfListOfMyStruct",
  "__fbthrift_field_setOfListOfListOfLong",
  "__fbthrift_field_setOfSetOfsetOfLong",
  "__fbthrift_field_mapStructListOfListOfLong",
  "__fbthrift_field_mKeyStructValInt",
  "__fbthrift_field_listOfMapKeyIntValInt",
  "__fbthrift_field_listOfMapKeyStrValList",
  "__fbthrift_field_mapKeySetValLong",
  "__fbthrift_field_mapKeyListValLong",
  "__fbthrift_field_mapKeyMapValMap",
  "__fbthrift_field_mapKeySetValMap",
  "__fbthrift_field_NestedMaps",
  "__fbthrift_field_mapKeyIntValList",
  "__fbthrift_field_mapKeyIntValSet",
  "__fbthrift_field_mapKeySetValInt",
  "__fbthrift_field_mapKeyListValSet",
}};
const std::array<int, 18> TStructDataStorage<::cpp2::ComplexNestedStruct>::isset_indexes = {{
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
  11,
  12,
  13,
  14,
  15,
  16,
  17,
}};

const std::array<folly::StringPiece, 6> TStructDataStorage<::cpp2::MyUnion>::fields_names = {{
  "myEnum",
  "myStruct",
  "myDataItem",
  "complexNestedStruct",
  "longValue",
  "intValue",
}};
const std::array<int16_t, 6> TStructDataStorage<::cpp2::MyUnion>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
}};
const std::array<protocol::TType, 6> TStructDataStorage<::cpp2::MyUnion>::fields_types = {{
  TType::T_I32,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_I64,
  TType::T_I32,
}};
const std::array<folly::StringPiece, 6> TStructDataStorage<::cpp2::MyUnion>::storage_names = {{
  "myEnum",
  "myStruct",
  "myDataItem",
  "complexNestedStruct",
  "longValue",
  "intValue",
}};
const std::array<int, 6> TStructDataStorage<::cpp2::MyUnion>::isset_indexes = {{
  0,
  1,
  2,
  3,
  4,
  5,
}};

const std::array<folly::StringPiece, 22> TStructDataStorage<::cpp2::defaultStruct>::fields_names = {{
  "myLongDFset",
  "myLongDF",
  "portDFset",
  "portNum",
  "myBinaryDFset",
  "myBinary",
  "myByteDFSet",
  "myByte",
  "myDoubleDFset",
  "myDoubleDFZero",
  "myDouble",
  "field3",
  "myList",
  "mySet",
  "simpleStruct",
  "listStructDFset",
  "myUnion",
  "listUnionDFset",
  "mapNestlistStructDfSet",
  "mapJavaTypeDFset",
  "emptyMap",
  "enumMapDFset",
}};
const std::array<int16_t, 22> TStructDataStorage<::cpp2::defaultStruct>::fields_ids = {{
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
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
}};
const std::array<protocol::TType, 22> TStructDataStorage<::cpp2::defaultStruct>::fields_types = {{
  TType::T_I64,
  TType::T_I64,
  TType::T_I32,
  TType::T_I32,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_BYTE,
  TType::T_BYTE,
  TType::T_DOUBLE,
  TType::T_DOUBLE,
  TType::T_DOUBLE,
  TType::T_MAP,
  TType::T_LIST,
  TType::T_SET,
  TType::T_STRUCT,
  TType::T_LIST,
  TType::T_STRUCT,
  TType::T_LIST,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
}};
const std::array<folly::StringPiece, 22> TStructDataStorage<::cpp2::defaultStruct>::storage_names = {{
  "__fbthrift_field_myLongDFset",
  "__fbthrift_field_myLongDF",
  "__fbthrift_field_portDFset",
  "__fbthrift_field_portNum",
  "__fbthrift_field_myBinaryDFset",
  "__fbthrift_field_myBinary",
  "__fbthrift_field_myByteDFSet",
  "__fbthrift_field_myByte",
  "__fbthrift_field_myDoubleDFset",
  "__fbthrift_field_myDoubleDFZero",
  "__fbthrift_field_myDouble",
  "__fbthrift_field_field3",
  "__fbthrift_field_myList",
  "__fbthrift_field_mySet",
  "__fbthrift_field_simpleStruct",
  "__fbthrift_field_listStructDFset",
  "__fbthrift_field_myUnion",
  "__fbthrift_field_listUnionDFset",
  "__fbthrift_field_mapNestlistStructDfSet",
  "__fbthrift_field_mapJavaTypeDFset",
  "__fbthrift_field_emptyMap",
  "__fbthrift_field_enumMapDFset",
}};
const std::array<int, 22> TStructDataStorage<::cpp2::defaultStruct>::isset_indexes = {{
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
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
}};

const std::array<folly::StringPiece, 9> TStructDataStorage<::cpp2::MyStructTypeDef>::fields_names = {{
  "myLongField",
  "myLongTypeDef",
  "myStringField",
  "myStringTypedef",
  "myMapField",
  "myMapTypedef",
  "myListField",
  "myListTypedef",
  "myMapListOfTypeDef",
}};
const std::array<int16_t, 9> TStructDataStorage<::cpp2::MyStructTypeDef>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
}};
const std::array<protocol::TType, 9> TStructDataStorage<::cpp2::MyStructTypeDef>::fields_types = {{
  TType::T_I64,
  TType::T_I64,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_MAP,
}};
const std::array<folly::StringPiece, 9> TStructDataStorage<::cpp2::MyStructTypeDef>::storage_names = {{
  "__fbthrift_field_myLongField",
  "__fbthrift_field_myLongTypeDef",
  "__fbthrift_field_myStringField",
  "__fbthrift_field_myStringTypedef",
  "__fbthrift_field_myMapField",
  "__fbthrift_field_myMapTypedef",
  "__fbthrift_field_myListField",
  "__fbthrift_field_myListTypedef",
  "__fbthrift_field_myMapListOfTypeDef",
}};
const std::array<int, 9> TStructDataStorage<::cpp2::MyStructTypeDef>::isset_indexes = {{
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::MyUnionFloatFieldThrowExp>::fields_names = {{
  "myEnum",
  "setFloat",
  "myDataItem",
  "complexNestedStruct",
}};
const std::array<int16_t, 4> TStructDataStorage<::cpp2::MyUnionFloatFieldThrowExp>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::cpp2::MyUnionFloatFieldThrowExp>::fields_types = {{
  TType::T_I32,
  TType::T_LIST,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::MyUnionFloatFieldThrowExp>::storage_names = {{
  "myEnum",
  "setFloat",
  "myDataItem",
  "complexNestedStruct",
}};
const std::array<int, 4> TStructDataStorage<::cpp2::MyUnionFloatFieldThrowExp>::isset_indexes = {{
  0,
  1,
  2,
  3,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::TypeRemapped>::fields_names = {{
  "lsMap",
  "ioMap",
  "BigInteger",
  "binaryTestBuffer",
}};
const std::array<int16_t, 4> TStructDataStorage<::cpp2::TypeRemapped>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::cpp2::TypeRemapped>::fields_types = {{
  TType::T_MAP,
  TType::T_MAP,
  TType::T_I32,
  TType::T_STRING,
}};
const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::TypeRemapped>::storage_names = {{
  "__fbthrift_field_lsMap",
  "__fbthrift_field_ioMap",
  "__fbthrift_field_BigInteger",
  "__fbthrift_field_binaryTestBuffer",
}};
const std::array<int, 4> TStructDataStorage<::cpp2::TypeRemapped>::isset_indexes = {{
  0,
  1,
  2,
  3,
}};

const std::array<folly::StringPiece, 0> TStructDataStorage<::cpp2::emptyXcep>::fields_names = {{
}};
const std::array<int16_t, 0> TStructDataStorage<::cpp2::emptyXcep>::fields_ids = {{
}};
const std::array<protocol::TType, 0> TStructDataStorage<::cpp2::emptyXcep>::fields_types = {{
}};
const std::array<folly::StringPiece, 0> TStructDataStorage<::cpp2::emptyXcep>::storage_names = {{
}};
const std::array<int, 0> TStructDataStorage<::cpp2::emptyXcep>::isset_indexes = {{
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::reqXcep>::fields_names = {{
  "message",
  "errorCode",
}};
const std::array<int16_t, 2> TStructDataStorage<::cpp2::reqXcep>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::reqXcep>::fields_types = {{
  TType::T_STRING,
  TType::T_I32,
}};
const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::reqXcep>::storage_names = {{
  "__fbthrift_field_message",
  "__fbthrift_field_errorCode",
}};
const std::array<int, 2> TStructDataStorage<::cpp2::reqXcep>::isset_indexes = {{
  -1,
  -1,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::optXcep>::fields_names = {{
  "message",
  "errorCode",
}};
const std::array<int16_t, 2> TStructDataStorage<::cpp2::optXcep>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::optXcep>::fields_types = {{
  TType::T_STRING,
  TType::T_I32,
}};
const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::optXcep>::storage_names = {{
  "__fbthrift_field_message",
  "__fbthrift_field_errorCode",
}};
const std::array<int, 2> TStructDataStorage<::cpp2::optXcep>::isset_indexes = {{
  0,
  1,
}};

const std::array<folly::StringPiece, 6> TStructDataStorage<::cpp2::complexException>::fields_names = {{
  "message",
  "listStrings",
  "errorEnum",
  "unionError",
  "structError",
  "lsMap",
}};
const std::array<int16_t, 6> TStructDataStorage<::cpp2::complexException>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
}};
const std::array<protocol::TType, 6> TStructDataStorage<::cpp2::complexException>::fields_types = {{
  TType::T_STRING,
  TType::T_LIST,
  TType::T_I32,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_MAP,
}};
const std::array<folly::StringPiece, 6> TStructDataStorage<::cpp2::complexException>::storage_names = {{
  "__fbthrift_field_message",
  "__fbthrift_field_listStrings",
  "__fbthrift_field_errorEnum",
  "__fbthrift_field_unionError",
  "__fbthrift_field_structError",
  "__fbthrift_field_lsMap",
}};
const std::array<int, 6> TStructDataStorage<::cpp2::complexException>::isset_indexes = {{
  0,
  1,
  2,
  3,
  4,
  5,
}};

} // namespace thrift
} // namespace apache
