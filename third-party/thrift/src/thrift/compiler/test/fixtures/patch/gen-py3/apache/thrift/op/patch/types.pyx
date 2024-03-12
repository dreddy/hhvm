#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.object cimport PyTypeObject, Py_LT, Py_LE, Py_EQ, Py_NE, Py_GT, Py_GE
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr
from libcpp.optional cimport optional as __optional
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from cpython cimport bool as pbool
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
from thrift.py3.types import _IsSet as _fbthrift_IsSet
from thrift.py3.types cimport make_unique
cimport thrift.py3.types
cimport thrift.py3.exceptions
from thrift.py3.std_libcpp cimport sv_to_str as __sv_to_str, string_view as __cstring_view
from thrift.py3.types cimport (
    cSetOp as __cSetOp,
    richcmp as __richcmp,
    set_op as __set_op,
    setcmp as __setcmp,
    list_index as __list_index,
    list_count as __list_count,
    list_slice as __list_slice,
    list_getitem as __list_getitem,
    set_iter as __set_iter,
    map_iter as __map_iter,
    map_contains as __map_contains,
    map_getitem as __map_getitem,
    reference_shared_ptr as __reference_shared_ptr,
    get_field_name_by_index as __get_field_name_by_index,
    reset_field as __reset_field,
    translate_cpp_enum_to_python,
    SetMetaClass as __SetMetaClass,
    const_pointer_cast,
    constant_shared_ptr,
    NOTSET as __NOTSET,
    EnumData as __EnumData,
    EnumFlagsData as __EnumFlagsData,
    UnionTypeEnumData as __UnionTypeEnumData,
    createEnumDataForUnionType as __createEnumDataForUnionType,
)
cimport thrift.py3.serializer as serializer
import folly.iobuf as _fbthrift_iobuf
from folly.optional cimport cOptional
from folly.memory cimport to_shared_ptr as __to_shared_ptr
from folly.range cimport Range as __cRange

import sys
from collections.abc import Sequence, Set, Mapping, Iterable
import weakref as __weakref
import builtins as _builtins
cimport apache.thrift.type.id.types as _apache_thrift_type_id_types
import apache.thrift.type.id.types as _apache_thrift_type_id_types
cimport apache.thrift.type.standard.types as _apache_thrift_type_standard_types
import apache.thrift.type.standard.types as _apache_thrift_type_standard_types

cimport apache.thrift.op.patch.types_reflection as _types_reflection



@__cython.auto_pickle(False)
cdef class GeneratePatch(thrift.py3.types.Struct):
    def __init__(GeneratePatch self, **kwargs):
        self._cpp_obj = make_shared[cGeneratePatch]()
        self._fields_setter = _fbthrift_types_fields.__GeneratePatch_FieldsSetter._fbthrift_create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(GeneratePatch self, **kwargs):
        return self

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return _fbthrift_IsSet("GeneratePatch", {
        })

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cGeneratePatch] cpp_obj):
        __fbthrift_inst = <GeneratePatch>GeneratePatch.__new__(GeneratePatch)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst


    def __hash__(GeneratePatch self):
        return super().__hash__()

    def __repr__(GeneratePatch self):
        return super().__repr__()

    def __str__(GeneratePatch self):
        return super().__str__()


    def __copy__(GeneratePatch self):
        cdef shared_ptr[cGeneratePatch] cpp_obj = make_shared[cGeneratePatch](
            deref(self._cpp_obj)
        )
        return GeneratePatch._fbthrift_create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cGeneratePatch](
            self._cpp_obj,
            (<GeneratePatch>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__GeneratePatch()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cGeneratePatch].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "patch.GeneratePatch"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[cGeneratePatch](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 0

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(GeneratePatch self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cGeneratePatch](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(GeneratePatch self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cGeneratePatch]()
        with nogil:
            needed = serializer.cdeserialize[cGeneratePatch](buf, self._cpp_obj.get(), proto)
        return needed


    def _to_python(self):
        import importlib
        import thrift.python.converter
        python_types = importlib.import_module(
            "apache.thrift.op.patch.thrift_types"
        )
        return thrift.python.converter.to_python_struct(python_types.GeneratePatch, self)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        return thrift.util.converter.to_py_struct(py_deprecated_types.GeneratePatch, self)
@__cython.auto_pickle(False)
cdef class GeneratePatchNew(thrift.py3.types.Struct):
    def __init__(GeneratePatchNew self, **kwargs):
        self._cpp_obj = make_shared[cGeneratePatchNew]()
        self._fields_setter = _fbthrift_types_fields.__GeneratePatchNew_FieldsSetter._fbthrift_create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(GeneratePatchNew self, **kwargs):
        return self

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return _fbthrift_IsSet("GeneratePatchNew", {
        })

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cGeneratePatchNew] cpp_obj):
        __fbthrift_inst = <GeneratePatchNew>GeneratePatchNew.__new__(GeneratePatchNew)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst


    def __hash__(GeneratePatchNew self):
        return super().__hash__()

    def __repr__(GeneratePatchNew self):
        return super().__repr__()

    def __str__(GeneratePatchNew self):
        return super().__str__()


    def __copy__(GeneratePatchNew self):
        cdef shared_ptr[cGeneratePatchNew] cpp_obj = make_shared[cGeneratePatchNew](
            deref(self._cpp_obj)
        )
        return GeneratePatchNew._fbthrift_create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cGeneratePatchNew](
            self._cpp_obj,
            (<GeneratePatchNew>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__GeneratePatchNew()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cGeneratePatchNew].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "patch.GeneratePatchNew"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[cGeneratePatchNew](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 0

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(GeneratePatchNew self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cGeneratePatchNew](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(GeneratePatchNew self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cGeneratePatchNew]()
        with nogil:
            needed = serializer.cdeserialize[cGeneratePatchNew](buf, self._cpp_obj.get(), proto)
        return needed


    def _to_python(self):
        import importlib
        import thrift.python.converter
        python_types = importlib.import_module(
            "apache.thrift.op.patch.thrift_types"
        )
        return thrift.python.converter.to_python_struct(python_types.GeneratePatchNew, self)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        return thrift.util.converter.to_py_struct(py_deprecated_types.GeneratePatchNew, self)
@__cython.auto_pickle(False)
cdef class AssignOnlyPatch(thrift.py3.types.Struct):
    def __init__(AssignOnlyPatch self, **kwargs):
        self._cpp_obj = make_shared[cAssignOnlyPatch]()
        self._fields_setter = _fbthrift_types_fields.__AssignOnlyPatch_FieldsSetter._fbthrift_create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(AssignOnlyPatch self, **kwargs):
        return self

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return _fbthrift_IsSet("AssignOnlyPatch", {
        })

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cAssignOnlyPatch] cpp_obj):
        __fbthrift_inst = <AssignOnlyPatch>AssignOnlyPatch.__new__(AssignOnlyPatch)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst


    def __hash__(AssignOnlyPatch self):
        return super().__hash__()

    def __repr__(AssignOnlyPatch self):
        return super().__repr__()

    def __str__(AssignOnlyPatch self):
        return super().__str__()


    def __copy__(AssignOnlyPatch self):
        cdef shared_ptr[cAssignOnlyPatch] cpp_obj = make_shared[cAssignOnlyPatch](
            deref(self._cpp_obj)
        )
        return AssignOnlyPatch._fbthrift_create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cAssignOnlyPatch](
            self._cpp_obj,
            (<AssignOnlyPatch>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__AssignOnlyPatch()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cAssignOnlyPatch].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "patch.AssignOnlyPatch"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[cAssignOnlyPatch](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 0

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(AssignOnlyPatch self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cAssignOnlyPatch](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(AssignOnlyPatch self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cAssignOnlyPatch]()
        with nogil:
            needed = serializer.cdeserialize[cAssignOnlyPatch](buf, self._cpp_obj.get(), proto)
        return needed


    def _to_python(self):
        import importlib
        import thrift.python.converter
        python_types = importlib.import_module(
            "apache.thrift.op.patch.thrift_types"
        )
        return thrift.python.converter.to_python_struct(python_types.AssignOnlyPatch, self)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        py_deprecated_types = importlib.import_module("thrift.lib.thrift.patch.ttypes")
        return thrift.util.converter.to_py_struct(py_deprecated_types.AssignOnlyPatch, self)
FieldId = int
