/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/no-legacy-apis/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/no-legacy-apis/gen-cpp2/module_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::test::fixtures::basic::MyStruct> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::test::fixtures::basic::MyUnion> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace test { namespace fixtures { namespace basic {

template <class Protocol_>
void MyStruct::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I64))) {
    goto _loop;
  }
_readField_myIntField:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int64_t>::readWithContext(*iprot, this->__fbthrift_field_myIntField, _readState);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_myStringField:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->__fbthrift_field_myStringField, _readState);
    
  }
 this->__isset.set(1, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<MyStruct>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I64))) {
        goto _readField_myIntField;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_myStringField;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t MyStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  {
    xfer += prot_->serializedFieldSize("myIntField", apache::thrift::protocol::T_I64, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int64_t>::serializedSize<false>(*prot_, this->__fbthrift_field_myIntField);
  }
  {
    xfer += prot_->serializedFieldSize("myStringField", apache::thrift::protocol::T_STRING, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_myStringField);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  {
    xfer += prot_->serializedFieldSize("myIntField", apache::thrift::protocol::T_I64, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int64_t>::serializedSize<false>(*prot_, this->__fbthrift_field_myIntField);
  }
  {
    xfer += prot_->serializedFieldSize("myStringField", apache::thrift::protocol::T_STRING, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_myStringField);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyStruct");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I64, 1, kPrevFieldId>(*prot_, "myIntField", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int64_t>::write(*prot_, this->__fbthrift_field_myIntField);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 1;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 2, kPrevFieldId>(*prot_, "myStringField", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->__fbthrift_field_myStringField);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


template <class Protocol_>
void MyUnion::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;
  _readState.fieldId = 0;

  _readState.readStructBegin(iprot);

  _readState.readFieldBegin(iprot);
  if (_readState.atStop()) {
    apache::thrift::clear(*this);
  } else {
    if (iprot->kUsesFieldNames()) {
      _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<MyUnion>>();
    }
    switch (_readState.fieldId) {
      case 1:
      {
        if (_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32)) {
          this->set_myEnum();
          ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::test::fixtures::basic::MyEnum>::readWithContext(*iprot, value_.myEnum, _readState);
          
        } else {
          _readState.skip(iprot);
        }
        break;
      }
      case 2:
      {
        if (_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT)) {
          this->set_myDataItem();
          _readState.beforeSubobject(iprot);
          ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::test::fixtures::basic::MyStruct>::readWithContext(*iprot, value_.myDataItem, _readState);
          _readState.afterSubobject(iprot);
          
        } else {
          _readState.skip(iprot);
        }
        break;
      }
      default:
      {
        _readState.skip(iprot);
        break;
      }
    }
    _readState.readFieldEnd(iprot);
    _readState.readFieldBegin(iprot);
    if (UNLIKELY(!_readState.atStop())) {
      using apache::thrift::protocol::TProtocolException;
      TProtocolException::throwUnionMissingStop();
    }
  }
  _readState.readStructEnd(iprot);
}
template <class Protocol_>
uint32_t MyUnion::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyUnion");
  switch(this->getType()) {
    case MyUnion::Type::myEnum:
    {
      xfer += prot_->serializedFieldSize("myEnum", apache::thrift::protocol::T_I32, 1);
      xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::test::fixtures::basic::MyEnum>::serializedSize<false>(*prot_, value_.myEnum);
      break;
    }
    case MyUnion::Type::myDataItem:
    {
      xfer += prot_->serializedFieldSize("myDataItem", apache::thrift::protocol::T_STRUCT, 2);
      xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::test::fixtures::basic::MyStruct>::serializedSize<false>(*prot_, value_.myDataItem);
      break;
    }
    case MyUnion::Type::__EMPTY__:;
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyUnion::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyUnion");
  switch(this->getType()) {
    case MyUnion::Type::myEnum:
    {
      xfer += prot_->serializedFieldSize("myEnum", apache::thrift::protocol::T_I32, 1);
      xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::test::fixtures::basic::MyEnum>::serializedSize<false>(*prot_, value_.myEnum);
      break;
    }
    case MyUnion::Type::myDataItem:
    {
      xfer += prot_->serializedFieldSize("myDataItem", apache::thrift::protocol::T_STRUCT, 2);
      xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::test::fixtures::basic::MyStruct>::serializedSize<true>(*prot_, value_.myDataItem);
      break;
    }
    case MyUnion::Type::__EMPTY__:;
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyUnion::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyUnion");
  switch(this->getType()) {
    case MyUnion::Type::myEnum:
    {
      constexpr int16_t kPrevFieldId = 0;
      xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 1, kPrevFieldId>(*prot_, "myEnum", false);
      xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::test::fixtures::basic::MyEnum>::write(*prot_, value_.myEnum);
      xfer += prot_->writeFieldEnd();
      break;
    }
    case MyUnion::Type::myDataItem:
    {
      constexpr int16_t kPrevFieldId = 1;
      xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRUCT, 2, kPrevFieldId>(*prot_, "myDataItem", false);
      xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::test::fixtures::basic::MyStruct>::write(*prot_, value_.myDataItem);
      xfer += prot_->writeFieldEnd();
      break;
    }
    case MyUnion::Type::__EMPTY__:;
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void MyUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t MyUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t MyUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t MyUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void MyUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t MyUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t MyUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t MyUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


}}} // test::fixtures::basic
