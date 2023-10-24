
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT
 *  @generated
 *
 */

#include <folly/python/import.h>
#include <thrift/lib/python/capi/iobuf.h>
#include <thrift/lib/python/types.h>

#include <thrift/compiler/test/fixtures/constants/src/gen-python-capi/module/thrift_types_api.h>
#include <thrift/compiler/test/fixtures/constants/src/gen-python-capi/module/thrift_types_capi.h>


namespace apache {
namespace thrift {
namespace python {
namespace capi {
namespace {
bool ensure_module_imported() {
  static ::folly::python::import_cache_nocapture import((
      ::import_module__thrift_types_capi));
  return import();
}
  static constexpr std::int16_t _fbthrift__Internship__tuple_pos[5] = {
    1, 2, 3, 4, 5
  };
  static constexpr std::int16_t _fbthrift__Range__tuple_pos[2] = {
    1, 2
  };
  static constexpr std::int16_t _fbthrift__struct1__tuple_pos[2] = {
    1, 2
  };
  static constexpr std::int16_t _fbthrift__struct2__tuple_pos[4] = {
    1, 2, 3, 4
  };
  static constexpr std::int16_t _fbthrift__struct3__tuple_pos[3] = {
    1, 2, 3
  };
  static constexpr std::int16_t _fbthrift__struct4__tuple_pos[3] = {
    1, 2, 3
  };
} // namespace

ExtractorResult<::cpp2::Internship>
Extractor<::cpp2::Internship>::operator()(PyObject* obj) {
  int tCheckResult = typeCheck(obj);
  if (tCheckResult != 1) {
      if (tCheckResult == 0) {
        PyErr_SetString(PyExc_TypeError, "Not a Internship");
      }
      return extractorError<::cpp2::Internship>(
          "Marshal error: Internship");
  }
  StrongRef fbThriftData(getThriftData(obj));
  return Extractor<::apache::thrift::python::capi::ComposedStruct<
      ::cpp2::Internship>>{}(*fbThriftData);
}

ExtractorResult<::cpp2::Internship>
Extractor<::apache::thrift::python::capi::ComposedStruct<
    ::cpp2::Internship>>::operator()(PyObject* fbThriftData) {
  ::cpp2::Internship cpp;
  std::optional<std::string_view> error;
  Extractor<int32_t>{}.extractInto(
      cpp.weeks_ref(),
      PyTuple_GET_ITEM(fbThriftData, _fbthrift__Internship__tuple_pos[0]),
      error);
  Extractor<Bytes>{}.extractInto(
      cpp.title_ref(),
      PyTuple_GET_ITEM(fbThriftData, _fbthrift__Internship__tuple_pos[1]),
      error);
  Extractor<::apache::thrift::python::capi::ComposedEnum<::cpp2::Company>>{}.extractInto(
      cpp.employer_ref(),
      PyTuple_GET_ITEM(fbThriftData, _fbthrift__Internship__tuple_pos[2]),
      error);
  Extractor<double>{}.extractInto(
      cpp.compensation_ref(),
      PyTuple_GET_ITEM(fbThriftData, _fbthrift__Internship__tuple_pos[3]),
      error);
  Extractor<Bytes>{}.extractInto(
      cpp.school_ref(),
      PyTuple_GET_ITEM(fbThriftData, _fbthrift__Internship__tuple_pos[4]),
      error);
  if (error) {
    return folly::makeUnexpected(*error);
  }
  return cpp;
}


int Extractor<::cpp2::Internship>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module module import error");
  }
  int result =
      can_extract__module__Internship(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: Internship");
  }
  return result;
}


PyObject* Constructor<::cpp2::Internship>::operator()(
    const ::cpp2::Internship& val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::Internship>> ctor;
  StrongRef fbthrift_data(ctor(val));
  if (!fbthrift_data) {
    return nullptr;
  }
  return init__module__Internship(*fbthrift_data);
}

PyObject* Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::Internship>>::operator()(
    FOLLY_MAYBE_UNUSED const ::cpp2::Internship& val) {
  StrongRef fbthrift_data(createStructTuple(5));
  StrongRef _fbthrift__weeks(
    Constructor<int32_t>{}
    .constructFrom(val.weeks_ref()));
  if (!_fbthrift__weeks ||
      setStructField(
          *fbthrift_data,
          _fbthrift__Internship__tuple_pos[0],
          *_fbthrift__weeks) == -1) {
    return nullptr;
  }
  StrongRef _fbthrift__title(
    Constructor<Bytes>{}
    .constructFrom(val.title_ref()));
  if (!_fbthrift__title ||
      setStructField(
          *fbthrift_data,
          _fbthrift__Internship__tuple_pos[1],
          *_fbthrift__title) == -1) {
    return nullptr;
  }
  StrongRef _fbthrift__employer(
    Constructor<::apache::thrift::python::capi::ComposedEnum<::cpp2::Company>>{}
    .constructFrom(val.employer_ref()));
  if (!_fbthrift__employer ||
      setStructField(
          *fbthrift_data,
          _fbthrift__Internship__tuple_pos[2],
          *_fbthrift__employer) == -1) {
    return nullptr;
  }
  StrongRef _fbthrift__compensation(
    Constructor<double>{}
    .constructFrom(val.compensation_ref()));
  if (!_fbthrift__compensation ||
      setStructField(
          *fbthrift_data,
          _fbthrift__Internship__tuple_pos[3],
          *_fbthrift__compensation) == -1) {
    return nullptr;
  }
  StrongRef _fbthrift__school(
    Constructor<Bytes>{}
    .constructFrom(val.school_ref()));
  if (!_fbthrift__school ||
      setStructField(
          *fbthrift_data,
          _fbthrift__Internship__tuple_pos[4],
          *_fbthrift__school) == -1) {
    return nullptr;
  }
  return std::move(fbthrift_data).release();
}


ExtractorResult<::cpp2::Range>
Extractor<::cpp2::Range>::operator()(PyObject* obj) {
  int tCheckResult = typeCheck(obj);
  if (tCheckResult != 1) {
      if (tCheckResult == 0) {
        PyErr_SetString(PyExc_TypeError, "Not a Range");
      }
      return extractorError<::cpp2::Range>(
          "Marshal error: Range");
  }
  StrongRef fbThriftData(getThriftData(obj));
  return Extractor<::apache::thrift::python::capi::ComposedStruct<
      ::cpp2::Range>>{}(*fbThriftData);
}

ExtractorResult<::cpp2::Range>
Extractor<::apache::thrift::python::capi::ComposedStruct<
    ::cpp2::Range>>::operator()(PyObject* fbThriftData) {
  ::cpp2::Range cpp;
  std::optional<std::string_view> error;
  Extractor<int32_t>{}.extractInto(
      cpp.min_ref(),
      PyTuple_GET_ITEM(fbThriftData, _fbthrift__Range__tuple_pos[0]),
      error);
  Extractor<int32_t>{}.extractInto(
      cpp.max_ref(),
      PyTuple_GET_ITEM(fbThriftData, _fbthrift__Range__tuple_pos[1]),
      error);
  if (error) {
    return folly::makeUnexpected(*error);
  }
  return cpp;
}


int Extractor<::cpp2::Range>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module module import error");
  }
  int result =
      can_extract__module__Range(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: Range");
  }
  return result;
}


PyObject* Constructor<::cpp2::Range>::operator()(
    const ::cpp2::Range& val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::Range>> ctor;
  StrongRef fbthrift_data(ctor(val));
  if (!fbthrift_data) {
    return nullptr;
  }
  return init__module__Range(*fbthrift_data);
}

PyObject* Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::Range>>::operator()(
    FOLLY_MAYBE_UNUSED const ::cpp2::Range& val) {
  StrongRef fbthrift_data(createStructTuple(2));
  StrongRef _fbthrift__min(
    Constructor<int32_t>{}
    .constructFrom(val.min_ref()));
  if (!_fbthrift__min ||
      setStructField(
          *fbthrift_data,
          _fbthrift__Range__tuple_pos[0],
          *_fbthrift__min) == -1) {
    return nullptr;
  }
  StrongRef _fbthrift__max(
    Constructor<int32_t>{}
    .constructFrom(val.max_ref()));
  if (!_fbthrift__max ||
      setStructField(
          *fbthrift_data,
          _fbthrift__Range__tuple_pos[1],
          *_fbthrift__max) == -1) {
    return nullptr;
  }
  return std::move(fbthrift_data).release();
}


ExtractorResult<::cpp2::struct1>
Extractor<::cpp2::struct1>::operator()(PyObject* obj) {
  int tCheckResult = typeCheck(obj);
  if (tCheckResult != 1) {
      if (tCheckResult == 0) {
        PyErr_SetString(PyExc_TypeError, "Not a struct1");
      }
      return extractorError<::cpp2::struct1>(
          "Marshal error: struct1");
  }
  StrongRef fbThriftData(getThriftData(obj));
  return Extractor<::apache::thrift::python::capi::ComposedStruct<
      ::cpp2::struct1>>{}(*fbThriftData);
}

ExtractorResult<::cpp2::struct1>
Extractor<::apache::thrift::python::capi::ComposedStruct<
    ::cpp2::struct1>>::operator()(PyObject* fbThriftData) {
  ::cpp2::struct1 cpp;
  std::optional<std::string_view> error;
  Extractor<int32_t>{}.extractInto(
      cpp.a_ref(),
      PyTuple_GET_ITEM(fbThriftData, _fbthrift__struct1__tuple_pos[0]),
      error);
  Extractor<Bytes>{}.extractInto(
      cpp.b_ref(),
      PyTuple_GET_ITEM(fbThriftData, _fbthrift__struct1__tuple_pos[1]),
      error);
  if (error) {
    return folly::makeUnexpected(*error);
  }
  return cpp;
}


int Extractor<::cpp2::struct1>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module module import error");
  }
  int result =
      can_extract__module__struct1(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: struct1");
  }
  return result;
}


PyObject* Constructor<::cpp2::struct1>::operator()(
    const ::cpp2::struct1& val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::struct1>> ctor;
  StrongRef fbthrift_data(ctor(val));
  if (!fbthrift_data) {
    return nullptr;
  }
  return init__module__struct1(*fbthrift_data);
}

PyObject* Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::struct1>>::operator()(
    FOLLY_MAYBE_UNUSED const ::cpp2::struct1& val) {
  StrongRef fbthrift_data(createStructTuple(2));
  StrongRef _fbthrift__a(
    Constructor<int32_t>{}
    .constructFrom(val.a_ref()));
  if (!_fbthrift__a ||
      setStructField(
          *fbthrift_data,
          _fbthrift__struct1__tuple_pos[0],
          *_fbthrift__a) == -1) {
    return nullptr;
  }
  StrongRef _fbthrift__b(
    Constructor<Bytes>{}
    .constructFrom(val.b_ref()));
  if (!_fbthrift__b ||
      setStructField(
          *fbthrift_data,
          _fbthrift__struct1__tuple_pos[1],
          *_fbthrift__b) == -1) {
    return nullptr;
  }
  return std::move(fbthrift_data).release();
}


ExtractorResult<::cpp2::struct2>
Extractor<::cpp2::struct2>::operator()(PyObject* obj) {
  int tCheckResult = typeCheck(obj);
  if (tCheckResult != 1) {
      if (tCheckResult == 0) {
        PyErr_SetString(PyExc_TypeError, "Not a struct2");
      }
      return extractorError<::cpp2::struct2>(
          "Marshal error: struct2");
  }
  StrongRef fbThriftData(getThriftData(obj));
  return Extractor<::apache::thrift::python::capi::ComposedStruct<
      ::cpp2::struct2>>{}(*fbThriftData);
}

ExtractorResult<::cpp2::struct2>
Extractor<::apache::thrift::python::capi::ComposedStruct<
    ::cpp2::struct2>>::operator()(PyObject* fbThriftData) {
  ::cpp2::struct2 cpp;
  std::optional<std::string_view> error;
  Extractor<int32_t>{}.extractInto(
      cpp.a_ref(),
      PyTuple_GET_ITEM(fbThriftData, _fbthrift__struct2__tuple_pos[0]),
      error);
  Extractor<Bytes>{}.extractInto(
      cpp.b_ref(),
      PyTuple_GET_ITEM(fbThriftData, _fbthrift__struct2__tuple_pos[1]),
      error);
  Extractor<::apache::thrift::python::capi::ComposedStruct<::cpp2::struct1>>{}.extractInto(
      cpp.c_ref(),
      PyTuple_GET_ITEM(fbThriftData, _fbthrift__struct2__tuple_pos[2]),
      error);
  Extractor<list<int32_t>>{}.extractInto(
      cpp.d_ref(),
      PyTuple_GET_ITEM(fbThriftData, _fbthrift__struct2__tuple_pos[3]),
      error);
  if (error) {
    return folly::makeUnexpected(*error);
  }
  return cpp;
}


int Extractor<::cpp2::struct2>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module module import error");
  }
  int result =
      can_extract__module__struct2(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: struct2");
  }
  return result;
}


PyObject* Constructor<::cpp2::struct2>::operator()(
    const ::cpp2::struct2& val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::struct2>> ctor;
  StrongRef fbthrift_data(ctor(val));
  if (!fbthrift_data) {
    return nullptr;
  }
  return init__module__struct2(*fbthrift_data);
}

PyObject* Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::struct2>>::operator()(
    FOLLY_MAYBE_UNUSED const ::cpp2::struct2& val) {
  StrongRef fbthrift_data(createStructTuple(4));
  StrongRef _fbthrift__a(
    Constructor<int32_t>{}
    .constructFrom(val.a_ref()));
  if (!_fbthrift__a ||
      setStructField(
          *fbthrift_data,
          _fbthrift__struct2__tuple_pos[0],
          *_fbthrift__a) == -1) {
    return nullptr;
  }
  StrongRef _fbthrift__b(
    Constructor<Bytes>{}
    .constructFrom(val.b_ref()));
  if (!_fbthrift__b ||
      setStructField(
          *fbthrift_data,
          _fbthrift__struct2__tuple_pos[1],
          *_fbthrift__b) == -1) {
    return nullptr;
  }
  StrongRef _fbthrift__c(
    Constructor<::apache::thrift::python::capi::ComposedStruct<::cpp2::struct1>>{}
    .constructFrom(val.c_ref()));
  if (!_fbthrift__c ||
      setStructField(
          *fbthrift_data,
          _fbthrift__struct2__tuple_pos[2],
          *_fbthrift__c) == -1) {
    return nullptr;
  }
  StrongRef _fbthrift__d(
    Constructor<list<int32_t>>{}
    .constructFrom(val.d_ref()));
  if (!_fbthrift__d ||
      setStructField(
          *fbthrift_data,
          _fbthrift__struct2__tuple_pos[3],
          *_fbthrift__d) == -1) {
    return nullptr;
  }
  return std::move(fbthrift_data).release();
}


ExtractorResult<::cpp2::struct3>
Extractor<::cpp2::struct3>::operator()(PyObject* obj) {
  int tCheckResult = typeCheck(obj);
  if (tCheckResult != 1) {
      if (tCheckResult == 0) {
        PyErr_SetString(PyExc_TypeError, "Not a struct3");
      }
      return extractorError<::cpp2::struct3>(
          "Marshal error: struct3");
  }
  StrongRef fbThriftData(getThriftData(obj));
  return Extractor<::apache::thrift::python::capi::ComposedStruct<
      ::cpp2::struct3>>{}(*fbThriftData);
}

ExtractorResult<::cpp2::struct3>
Extractor<::apache::thrift::python::capi::ComposedStruct<
    ::cpp2::struct3>>::operator()(PyObject* fbThriftData) {
  ::cpp2::struct3 cpp;
  std::optional<std::string_view> error;
  Extractor<Bytes>{}.extractInto(
      cpp.a_ref(),
      PyTuple_GET_ITEM(fbThriftData, _fbthrift__struct3__tuple_pos[0]),
      error);
  Extractor<int32_t>{}.extractInto(
      cpp.b_ref(),
      PyTuple_GET_ITEM(fbThriftData, _fbthrift__struct3__tuple_pos[1]),
      error);
  Extractor<::apache::thrift::python::capi::ComposedStruct<::cpp2::struct2>>{}.extractInto(
      cpp.c_ref(),
      PyTuple_GET_ITEM(fbThriftData, _fbthrift__struct3__tuple_pos[2]),
      error);
  if (error) {
    return folly::makeUnexpected(*error);
  }
  return cpp;
}


int Extractor<::cpp2::struct3>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module module import error");
  }
  int result =
      can_extract__module__struct3(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: struct3");
  }
  return result;
}


PyObject* Constructor<::cpp2::struct3>::operator()(
    const ::cpp2::struct3& val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::struct3>> ctor;
  StrongRef fbthrift_data(ctor(val));
  if (!fbthrift_data) {
    return nullptr;
  }
  return init__module__struct3(*fbthrift_data);
}

PyObject* Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::struct3>>::operator()(
    FOLLY_MAYBE_UNUSED const ::cpp2::struct3& val) {
  StrongRef fbthrift_data(createStructTuple(3));
  StrongRef _fbthrift__a(
    Constructor<Bytes>{}
    .constructFrom(val.a_ref()));
  if (!_fbthrift__a ||
      setStructField(
          *fbthrift_data,
          _fbthrift__struct3__tuple_pos[0],
          *_fbthrift__a) == -1) {
    return nullptr;
  }
  StrongRef _fbthrift__b(
    Constructor<int32_t>{}
    .constructFrom(val.b_ref()));
  if (!_fbthrift__b ||
      setStructField(
          *fbthrift_data,
          _fbthrift__struct3__tuple_pos[1],
          *_fbthrift__b) == -1) {
    return nullptr;
  }
  StrongRef _fbthrift__c(
    Constructor<::apache::thrift::python::capi::ComposedStruct<::cpp2::struct2>>{}
    .constructFrom(val.c_ref()));
  if (!_fbthrift__c ||
      setStructField(
          *fbthrift_data,
          _fbthrift__struct3__tuple_pos[2],
          *_fbthrift__c) == -1) {
    return nullptr;
  }
  return std::move(fbthrift_data).release();
}


ExtractorResult<::cpp2::struct4>
Extractor<::cpp2::struct4>::operator()(PyObject* obj) {
  int tCheckResult = typeCheck(obj);
  if (tCheckResult != 1) {
      if (tCheckResult == 0) {
        PyErr_SetString(PyExc_TypeError, "Not a struct4");
      }
      return extractorError<::cpp2::struct4>(
          "Marshal error: struct4");
  }
  StrongRef fbThriftData(getThriftData(obj));
  return Extractor<::apache::thrift::python::capi::ComposedStruct<
      ::cpp2::struct4>>{}(*fbThriftData);
}

ExtractorResult<::cpp2::struct4>
Extractor<::apache::thrift::python::capi::ComposedStruct<
    ::cpp2::struct4>>::operator()(PyObject* fbThriftData) {
  ::cpp2::struct4 cpp;
  std::optional<std::string_view> error;
  Extractor<int32_t>{}.extractInto(
      cpp.a_ref(),
      PyTuple_GET_ITEM(fbThriftData, _fbthrift__struct4__tuple_pos[0]),
      error);
  Extractor<double>{}.extractInto(
      cpp.b_ref(),
      PyTuple_GET_ITEM(fbThriftData, _fbthrift__struct4__tuple_pos[1]),
      error);
  Extractor<int8_t>{}.extractInto(
      cpp.c_ref(),
      PyTuple_GET_ITEM(fbThriftData, _fbthrift__struct4__tuple_pos[2]),
      error);
  if (error) {
    return folly::makeUnexpected(*error);
  }
  return cpp;
}


int Extractor<::cpp2::struct4>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module module import error");
  }
  int result =
      can_extract__module__struct4(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: struct4");
  }
  return result;
}


PyObject* Constructor<::cpp2::struct4>::operator()(
    const ::cpp2::struct4& val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::struct4>> ctor;
  StrongRef fbthrift_data(ctor(val));
  if (!fbthrift_data) {
    return nullptr;
  }
  return init__module__struct4(*fbthrift_data);
}

PyObject* Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::struct4>>::operator()(
    FOLLY_MAYBE_UNUSED const ::cpp2::struct4& val) {
  StrongRef fbthrift_data(createStructTuple(3));
  StrongRef _fbthrift__a(
    Constructor<int32_t>{}
    .constructFrom(val.a_ref()));
  if (!_fbthrift__a ||
      setStructField(
          *fbthrift_data,
          _fbthrift__struct4__tuple_pos[0],
          *_fbthrift__a) == -1) {
    return nullptr;
  }
  StrongRef _fbthrift__b(
    Constructor<double>{}
    .constructFrom(val.b_ref()));
  if (!_fbthrift__b ||
      setStructField(
          *fbthrift_data,
          _fbthrift__struct4__tuple_pos[1],
          *_fbthrift__b) == -1) {
    return nullptr;
  }
  StrongRef _fbthrift__c(
    Constructor<int8_t>{}
    .constructFrom(val.c_ref()));
  if (!_fbthrift__c ||
      setStructField(
          *fbthrift_data,
          _fbthrift__struct4__tuple_pos[2],
          *_fbthrift__c) == -1) {
    return nullptr;
  }
  return std::move(fbthrift_data).release();
}


ExtractorResult<::cpp2::union1>
Extractor<::cpp2::union1>::operator()(PyObject* obj) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::cpp2::union1>(
      "Module module import error");
  }
  std::unique_ptr<folly::IOBuf> val(
      extract__module__union1(obj));
  if (!val) {
    CHECK(PyErr_Occurred());
    return extractorError<::cpp2::union1>(
        "Thrift serialize error: union1");
  }
  return detail::deserialize_iobuf<::cpp2::union1>(std::move(val));
}


ExtractorResult<::cpp2::union1>
Extractor<::apache::thrift::python::capi::ComposedStruct<
    ::cpp2::union1>>::operator()(PyObject* fbthrift_data) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::cpp2::union1>(
      "Module module import error");
  }
  auto obj = StrongRef(init__module__union1(fbthrift_data));
  if (!obj) {
      return extractorError<::cpp2::union1>(
          "Init from fbthrift error: union1");
  }
  return Extractor<::cpp2::union1>{}(*obj);
}

int Extractor<::cpp2::union1>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module module import error");
  }
  int result =
      can_extract__module__union1(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: union1");
  }
  return result;
}


PyObject* Constructor<::cpp2::union1>::operator()(
    const ::cpp2::union1& val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  auto ptr = construct__module__union1(
      detail::serialize_to_iobuf(val));
  if (!ptr) {
    CHECK(PyErr_Occurred());
  }
  return ptr;
}


PyObject* Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::union1>>::operator()(
    const ::cpp2::union1& val) {
  auto obj = StrongRef(Constructor<::cpp2::union1>{}(val));
  if (!obj) {
    return nullptr;
  }
  return getThriftData(*obj);
}

ExtractorResult<::cpp2::union2>
Extractor<::cpp2::union2>::operator()(PyObject* obj) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::cpp2::union2>(
      "Module module import error");
  }
  std::unique_ptr<folly::IOBuf> val(
      extract__module__union2(obj));
  if (!val) {
    CHECK(PyErr_Occurred());
    return extractorError<::cpp2::union2>(
        "Thrift serialize error: union2");
  }
  return detail::deserialize_iobuf<::cpp2::union2>(std::move(val));
}


ExtractorResult<::cpp2::union2>
Extractor<::apache::thrift::python::capi::ComposedStruct<
    ::cpp2::union2>>::operator()(PyObject* fbthrift_data) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::cpp2::union2>(
      "Module module import error");
  }
  auto obj = StrongRef(init__module__union2(fbthrift_data));
  if (!obj) {
      return extractorError<::cpp2::union2>(
          "Init from fbthrift error: union2");
  }
  return Extractor<::cpp2::union2>{}(*obj);
}

int Extractor<::cpp2::union2>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module module import error");
  }
  int result =
      can_extract__module__union2(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: union2");
  }
  return result;
}


PyObject* Constructor<::cpp2::union2>::operator()(
    const ::cpp2::union2& val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  auto ptr = construct__module__union2(
      detail::serialize_to_iobuf(val));
  if (!ptr) {
    CHECK(PyErr_Occurred());
  }
  return ptr;
}


PyObject* Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::union2>>::operator()(
    const ::cpp2::union2& val) {
  auto obj = StrongRef(Constructor<::cpp2::union2>{}(val));
  if (!obj) {
    return nullptr;
  }
  return getThriftData(*obj);
}

ExtractorResult<::cpp2::EmptyEnum>
Extractor<::cpp2::EmptyEnum>::operator()(PyObject* obj) {
  long val = PyLong_AsLong(obj);
  if (val == -1 && PyErr_Occurred()) {
    return extractorError<::cpp2::EmptyEnum>(
        "Error getting python int value: EmptyEnum");
  }
  return static_cast<::cpp2::EmptyEnum>(val);
}

int Extractor<::cpp2::EmptyEnum>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module module import error");
  }
  int result =
      can_extract__module__EmptyEnum(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: EmptyEnum");
  }
  return result;
}


PyObject* Constructor<::cpp2::EmptyEnum>::operator()(
    ::cpp2::EmptyEnum val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  auto ptr = construct__module__EmptyEnum(
      static_cast<int64_t>(val));
  if (!ptr) {
    CHECK(PyErr_Occurred());
  }
  return ptr;
}

ExtractorResult<::cpp2::City>
Extractor<::cpp2::City>::operator()(PyObject* obj) {
  long val = PyLong_AsLong(obj);
  if (val == -1 && PyErr_Occurred()) {
    return extractorError<::cpp2::City>(
        "Error getting python int value: City");
  }
  return static_cast<::cpp2::City>(val);
}

int Extractor<::cpp2::City>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module module import error");
  }
  int result =
      can_extract__module__City(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: City");
  }
  return result;
}


PyObject* Constructor<::cpp2::City>::operator()(
    ::cpp2::City val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  auto ptr = construct__module__City(
      static_cast<int64_t>(val));
  if (!ptr) {
    CHECK(PyErr_Occurred());
  }
  return ptr;
}

ExtractorResult<::cpp2::Company>
Extractor<::cpp2::Company>::operator()(PyObject* obj) {
  long val = PyLong_AsLong(obj);
  if (val == -1 && PyErr_Occurred()) {
    return extractorError<::cpp2::Company>(
        "Error getting python int value: Company");
  }
  return static_cast<::cpp2::Company>(val);
}

int Extractor<::cpp2::Company>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module module import error");
  }
  int result =
      can_extract__module__Company(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: Company");
  }
  return result;
}


PyObject* Constructor<::cpp2::Company>::operator()(
    ::cpp2::Company val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  auto ptr = construct__module__Company(
      static_cast<int64_t>(val));
  if (!ptr) {
    CHECK(PyErr_Occurred());
  }
  return ptr;
}

} // namespace capi
} // namespace python
} // namespace thrift
} // namespace apache
