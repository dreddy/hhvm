/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/stream/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace ident {
} // namespace ident
namespace detail {
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class FooStreamEx;
class FooEx;
} // cpp2
// END forward_declare
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;


class FOLLY_EXPORT FooStreamEx : public virtual apache::thrift::TException {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static const folly::StringPiece __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);

  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;
  static constexpr ::apache::thrift::ExceptionKind __fbthrift_cpp2_gen_exception_kind =
         ::apache::thrift::ExceptionKind::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionSafety __fbthrift_cpp2_gen_exception_safety =
         ::apache::thrift::ExceptionSafety::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionBlame __fbthrift_cpp2_gen_exception_blame =
         ::apache::thrift::ExceptionBlame::UNSPECIFIED;

 public:
  using __fbthrift_cpp2_type = FooStreamEx;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  FooStreamEx();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  FooStreamEx(apache::thrift::FragileConstructor);

  FooStreamEx(FooStreamEx&&) noexcept;

  FooStreamEx(const FooStreamEx& src);


  FooStreamEx& operator=(FooStreamEx&&) noexcept;
  FooStreamEx& operator=(const FooStreamEx& src);

  ~FooStreamEx() override;


 public:

  bool operator==(const FooStreamEx&) const;
  bool operator<(const FooStreamEx&) const;

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  const char* what() const noexcept override {
    return "::cpp2::FooStreamEx";
  }

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<FooStreamEx>;
  friend void swap(FooStreamEx& a, FooStreamEx& b);
};

template <class Protocol_>
unsigned long FooStreamEx::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


class FOLLY_EXPORT FooEx : public virtual apache::thrift::TException {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static const folly::StringPiece __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);

  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;
  static constexpr ::apache::thrift::ExceptionKind __fbthrift_cpp2_gen_exception_kind =
         ::apache::thrift::ExceptionKind::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionSafety __fbthrift_cpp2_gen_exception_safety =
         ::apache::thrift::ExceptionSafety::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionBlame __fbthrift_cpp2_gen_exception_blame =
         ::apache::thrift::ExceptionBlame::UNSPECIFIED;

 public:
  using __fbthrift_cpp2_type = FooEx;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  FooEx();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  FooEx(apache::thrift::FragileConstructor);

  FooEx(FooEx&&) noexcept;

  FooEx(const FooEx& src);


  FooEx& operator=(FooEx&&) noexcept;
  FooEx& operator=(const FooEx& src);

  ~FooEx() override;


 public:

  bool operator==(const FooEx&) const;
  bool operator<(const FooEx&) const;

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  const char* what() const noexcept override {
    return "::cpp2::FooEx";
  }

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<FooEx>;
  friend void swap(FooEx& a, FooEx& b);
};

template <class Protocol_>
unsigned long FooEx::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


} // cpp2
