/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/templated-deserialize/src/gen-py3/module/metadata.h"

namespace cpp2 {
::apache::thrift::metadata::ThriftMetadata module_getThriftModuleMetadata() {
  ::apache::thrift::metadata::ThriftServiceMetadataResponse response;
  ::apache::thrift::metadata::ThriftMetadata& metadata = *response.metadata_ref();
  ::apache::thrift::detail::md::EnumMetadata<MyEnumA>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<SmallStruct>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<containerStruct>::gen(metadata);
  return metadata;
}
} // namespace cpp2
