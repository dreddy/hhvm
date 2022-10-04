/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/frozen-struct/src/include1.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/include1_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::some::ns::IncludedA> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace some { namespace ns {

template <class Protocol_>
void IncludedA::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_i32Field:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->__fbthrift_field_i32Field, _readState);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_strField:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->__fbthrift_field_strField, _readState);
    
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
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<IncludedA>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_i32Field;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_strField;
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
uint32_t IncludedA::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("IncludedA");
  {
    xfer += prot_->serializedFieldSize("i32Field", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_i32Field);
  }
  {
    xfer += prot_->serializedFieldSize("strField", apache::thrift::protocol::T_STRING, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_strField);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t IncludedA::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("IncludedA");
  {
    xfer += prot_->serializedFieldSize("i32Field", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_i32Field);
  }
  {
    xfer += prot_->serializedFieldSize("strField", apache::thrift::protocol::T_STRING, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->__fbthrift_field_strField);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t IncludedA::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("IncludedA");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 1, kPrevFieldId>(*prot_, "i32Field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->__fbthrift_field_i32Field);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 1;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRING, 2, kPrevFieldId>(*prot_, "strField", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->__fbthrift_field_strField);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void IncludedA::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t IncludedA::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t IncludedA::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t IncludedA::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void IncludedA::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t IncludedA::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t IncludedA::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t IncludedA::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


}} // some::ns
