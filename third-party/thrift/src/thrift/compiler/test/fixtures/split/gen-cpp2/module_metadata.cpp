/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/split/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/split/gen-cpp2/module_metadata.h"

// some of these functions can be so large that the compiler gives up optimizing
// them - and issues a warning which may be treated as an error!
//
// these functions are so rarely called that it is probably okay for them not to
// be optimized in practice
FOLLY_CLANG_DISABLE_WARNING("-Wignored-optimization-argument")

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);

void EnumMetadata<::cpp2::MyEnum>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums()->emplace("module.MyEnum", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name() = "module.MyEnum";
  using EnumTraits = TEnumTraits<::cpp2::MyEnum>;
  for (std::size_t i = 0; i != EnumTraits::size; ++i) {
    enum_metadata.elements()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i].str());
  }
}

const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyDataItem>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyDataItem", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyDataItem = res.first->second;
  module_MyDataItem.name() = "module.MyDataItem";
  module_MyDataItem.is_union() = false;
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStruct = res.first->second;
  module_MyStruct.name() = "module.MyStruct";
  module_MyStruct.is_union() = false;
  static const auto* const
  module_MyStruct_fields = new std::array<EncodedThriftField, 7>{{
    {1, "MyIntField", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "MyStringField", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "MyDataField", false, std::make_unique<Typedef>("module.MyDataItem", std::make_unique<Struct<::cpp2::MyDataItem>>("module.MyDataItem"), std::vector<ThriftConstStruct>{}), std::vector<ThriftConstStruct>{}},
    {4, "myEnum", false, std::make_unique<Enum<::cpp2::MyEnum>>("module.MyEnum"), std::vector<ThriftConstStruct>{}},
    {5, "oneway", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {6, "readonly", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {7, "idempotent", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_MyStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyStruct.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyUnion>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyUnion = res.first->second;
  module_MyUnion.name() = "module.MyUnion";
  module_MyUnion.is_union() = true;
  static const auto* const
  module_MyUnion_fields = new std::array<EncodedThriftField, 3>{{
    {1, "myEnum", false, std::make_unique<Enum<::cpp2::MyEnum>>("module.MyEnum"), std::vector<ThriftConstStruct>{}},
    {2, "myStruct", false, std::make_unique<Struct<::cpp2::MyStruct>>("module.MyStruct"), std::vector<ThriftConstStruct>{}},
    {3, "myDataItem", false, std::make_unique<Struct<::cpp2::MyDataItem>>("module.MyDataItem"), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_MyUnion_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyUnion.fields()->push_back(std::move(field));
  }
  return res.first->second;
}

void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_ping(FOLLY_MAYBE_UNUSED ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "ping";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_getRandomData(FOLLY_MAYBE_UNUSED ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "getRandomData";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_sink(FOLLY_MAYBE_UNUSED ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "sink";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_sink_sink_1;
  module_MyService_sink_sink_1.id() = 1;
  module_MyService_sink_sink_1.name() = "sink";
  module_MyService_sink_sink_1.is_optional() = false;
  auto module_MyService_sink_sink_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_sink_sink_1_type->writeAndGenType(*module_MyService_sink_sink_1.type(), metadata);
  func.arguments()->push_back(std::move(module_MyService_sink_sink_1));
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_putDataById(FOLLY_MAYBE_UNUSED ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "putDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_putDataById_id_1;
  module_MyService_putDataById_id_1.id() = 1;
  module_MyService_putDataById_id_1.name() = "id";
  module_MyService_putDataById_id_1.is_optional() = false;
  auto module_MyService_putDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_putDataById_id_1_type->writeAndGenType(*module_MyService_putDataById_id_1.type(), metadata);
  func.arguments()->push_back(std::move(module_MyService_putDataById_id_1));
  ::apache::thrift::metadata::ThriftField module_MyService_putDataById_data_2;
  module_MyService_putDataById_data_2.id() = 2;
  module_MyService_putDataById_data_2.name() = "data";
  module_MyService_putDataById_data_2.is_optional() = false;
  auto module_MyService_putDataById_data_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_MyService_putDataById_data_2_type->writeAndGenType(*module_MyService_putDataById_data_2.type(), metadata);
  func.arguments()->push_back(std::move(module_MyService_putDataById_data_2));
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_hasDataById(FOLLY_MAYBE_UNUSED ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "hasDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_hasDataById_id_1;
  module_MyService_hasDataById_id_1.id() = 1;
  module_MyService_hasDataById_id_1.name() = "id";
  module_MyService_hasDataById_id_1.is_optional() = false;
  auto module_MyService_hasDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_hasDataById_id_1_type->writeAndGenType(*module_MyService_hasDataById_id_1.type(), metadata);
  func.arguments()->push_back(std::move(module_MyService_hasDataById_id_1));
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_getDataById(FOLLY_MAYBE_UNUSED ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "getDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_getDataById_id_1;
  module_MyService_getDataById_id_1.id() = 1;
  module_MyService_getDataById_id_1.name() = "id";
  module_MyService_getDataById_id_1.is_optional() = false;
  auto module_MyService_getDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_getDataById_id_1_type->writeAndGenType(*module_MyService_getDataById_id_1.type(), metadata);
  func.arguments()->push_back(std::move(module_MyService_getDataById_id_1));
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_deleteDataById(FOLLY_MAYBE_UNUSED ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "deleteDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_deleteDataById_id_1;
  module_MyService_deleteDataById_id_1.id() = 1;
  module_MyService_deleteDataById_id_1.name() = "id";
  module_MyService_deleteDataById_id_1.is_optional() = false;
  auto module_MyService_deleteDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_deleteDataById_id_1_type->writeAndGenType(*module_MyService_deleteDataById_id_1.type(), metadata);
  func.arguments()->push_back(std::move(module_MyService_deleteDataById_id_1));
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_lobDataById(FOLLY_MAYBE_UNUSED ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "lobDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_lobDataById_id_1;
  module_MyService_lobDataById_id_1.id() = 1;
  module_MyService_lobDataById_id_1.name() = "id";
  module_MyService_lobDataById_id_1.is_optional() = false;
  auto module_MyService_lobDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_lobDataById_id_1_type->writeAndGenType(*module_MyService_lobDataById_id_1.type(), metadata);
  func.arguments()->push_back(std::move(module_MyService_lobDataById_id_1));
  ::apache::thrift::metadata::ThriftField module_MyService_lobDataById_data_2;
  module_MyService_lobDataById_data_2.id() = 2;
  module_MyService_lobDataById_data_2.name() = "data";
  module_MyService_lobDataById_data_2.is_optional() = false;
  auto module_MyService_lobDataById_data_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_MyService_lobDataById_data_2_type->writeAndGenType(*module_MyService_lobDataById_data_2.type(), metadata);
  func.arguments()->push_back(std::move(module_MyService_lobDataById_data_2));
  func.is_oneway() = true;
  service.functions()->push_back(std::move(func));
}

void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen(::apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  const ::apache::thrift::metadata::ThriftServiceContextRef* self = genRecurse(*response.metadata(), *response.services());
  DCHECK(self != nullptr);
  // TODO(praihan): Remove ThriftServiceContext from response. But in the meantime, we need to fill the field with the result of looking up in ThriftMetadata.
  ::apache::thrift::metadata::ThriftServiceContext context;
  context.module() = *self->module();
  context.service_info() = response.metadata()->services()->at(*self->service_name());
  response.context() = std::move(context);
}

const ThriftServiceContextRef* ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::genRecurse(FOLLY_MAYBE_UNUSED ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services) {
  ::apache::thrift::metadata::ThriftService module_MyService;
  module_MyService.name() = "module.MyService";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_ping,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_getRandomData,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_sink,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_putDataById,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_hasDataById,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_getDataById,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_deleteDataById,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_lobDataById,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_MyService);
  }
  // We need to keep the index around because a reference or iterator could be invalidated.
  auto selfIndex = services.size();
  services.emplace_back();
  ThriftServiceContextRef& context = services[selfIndex];
  metadata.services()->emplace("module.MyService", std::move(module_MyService));
  context.service_name() = "module.MyService";
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name() = "module";
  context.module() = std::move(module);
  return &context;
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::DbMixedStackArguments>>::gen_getDataByKey0(FOLLY_MAYBE_UNUSED ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "getDataByKey0";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  ::apache::thrift::metadata::ThriftField module_DbMixedStackArguments_getDataByKey0_key_1;
  module_DbMixedStackArguments_getDataByKey0_key_1.id() = 1;
  module_DbMixedStackArguments_getDataByKey0_key_1.name() = "key";
  module_DbMixedStackArguments_getDataByKey0_key_1.is_optional() = false;
  auto module_DbMixedStackArguments_getDataByKey0_key_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_DbMixedStackArguments_getDataByKey0_key_1_type->writeAndGenType(*module_DbMixedStackArguments_getDataByKey0_key_1.type(), metadata);
  func.arguments()->push_back(std::move(module_DbMixedStackArguments_getDataByKey0_key_1));
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::DbMixedStackArguments>>::gen_getDataByKey1(FOLLY_MAYBE_UNUSED ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  func.name() = "getDataByKey1";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE);
  func_ret_type->writeAndGenType(*func.return_type(), metadata);
  ::apache::thrift::metadata::ThriftField module_DbMixedStackArguments_getDataByKey1_key_1;
  module_DbMixedStackArguments_getDataByKey1_key_1.id() = 1;
  module_DbMixedStackArguments_getDataByKey1_key_1.name() = "key";
  module_DbMixedStackArguments_getDataByKey1_key_1.is_optional() = false;
  auto module_DbMixedStackArguments_getDataByKey1_key_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_DbMixedStackArguments_getDataByKey1_key_1_type->writeAndGenType(*module_DbMixedStackArguments_getDataByKey1_key_1.type(), metadata);
  func.arguments()->push_back(std::move(module_DbMixedStackArguments_getDataByKey1_key_1));
  func.is_oneway() = false;
  service.functions()->push_back(std::move(func));
}

void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::DbMixedStackArguments>>::gen(::apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  const ::apache::thrift::metadata::ThriftServiceContextRef* self = genRecurse(*response.metadata(), *response.services());
  DCHECK(self != nullptr);
  // TODO(praihan): Remove ThriftServiceContext from response. But in the meantime, we need to fill the field with the result of looking up in ThriftMetadata.
  ::apache::thrift::metadata::ThriftServiceContext context;
  context.module() = *self->module();
  context.service_info() = response.metadata()->services()->at(*self->service_name());
  response.context() = std::move(context);
}

const ThriftServiceContextRef* ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::DbMixedStackArguments>>::genRecurse(FOLLY_MAYBE_UNUSED ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services) {
  ::apache::thrift::metadata::ThriftService module_DbMixedStackArguments;
  module_DbMixedStackArguments.name() = "module.DbMixedStackArguments";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::DbMixedStackArguments>>::gen_getDataByKey0,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::DbMixedStackArguments>>::gen_getDataByKey1,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_DbMixedStackArguments);
  }
  // We need to keep the index around because a reference or iterator could be invalidated.
  auto selfIndex = services.size();
  services.emplace_back();
  ThriftServiceContextRef& context = services[selfIndex];
  metadata.services()->emplace("module.DbMixedStackArguments", std::move(module_DbMixedStackArguments));
  context.service_name() = "module.DbMixedStackArguments";
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name() = "module";
  context.module() = std::move(module);
  return &context;
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
