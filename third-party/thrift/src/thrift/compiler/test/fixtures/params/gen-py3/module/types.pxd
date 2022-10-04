#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.utility cimport move as cmove
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as _fbthrift_iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.types cimport (
    bstring,
    bytes_to_string,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
    terse_field_ref as __terse_field_ref,
    union_field_ref as __union_field_ref,
    get_union_field_value as __get_union_field_value,
)
from thrift.py3.common cimport (
    RpcOptions as __RpcOptions,
    Protocol as __Protocol,
    cThriftMetadata as __fbthrift_cThriftMetadata,
    MetadataBox as __MetadataBox,
)
from folly.optional cimport cOptional as __cOptional

cimport module.types_fields as _fbthrift_types_fields

cdef extern from "thrift/compiler/test/fixtures/params/src/gen-py3/module/types.h":
  pass







cdef class List__i32(thrift.py3.types.List):
    cdef shared_ptr[vector[cint32_t]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cint32_t]])
    @staticmethod
    cdef shared_ptr[vector[cint32_t]] _make_instance(object items) except *

cdef class Map__i32_List__i32(thrift.py3.types.Map):
    cdef shared_ptr[cmap[cint32_t,vector[cint32_t]]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[cint32_t,vector[cint32_t]]])
    @staticmethod
    cdef shared_ptr[cmap[cint32_t,vector[cint32_t]]] _make_instance(object items) except *

cdef class Set__i32(thrift.py3.types.Set):
    cdef shared_ptr[cset[cint32_t]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cset[cint32_t]])
    @staticmethod
    cdef shared_ptr[cset[cint32_t]] _make_instance(object items) except *

cdef class Map__i32_Set__i32(thrift.py3.types.Map):
    cdef shared_ptr[cmap[cint32_t,cset[cint32_t]]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[cint32_t,cset[cint32_t]]])
    @staticmethod
    cdef shared_ptr[cmap[cint32_t,cset[cint32_t]]] _make_instance(object items) except *

cdef class Map__i32_i32(thrift.py3.types.Map):
    cdef shared_ptr[cmap[cint32_t,cint32_t]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[cint32_t,cint32_t]])
    @staticmethod
    cdef shared_ptr[cmap[cint32_t,cint32_t]] _make_instance(object items) except *

cdef class List__Map__i32_i32(thrift.py3.types.List):
    cdef shared_ptr[vector[cmap[cint32_t,cint32_t]]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cmap[cint32_t,cint32_t]]])
    @staticmethod
    cdef shared_ptr[vector[cmap[cint32_t,cint32_t]]] _make_instance(object items) except *

cdef class List__Set__i32(thrift.py3.types.List):
    cdef shared_ptr[vector[cset[cint32_t]]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cset[cint32_t]]])
    @staticmethod
    cdef shared_ptr[vector[cset[cint32_t]]] _make_instance(object items) except *

cdef class Map__i32_Map__i32_Set__i32(thrift.py3.types.Map):
    cdef shared_ptr[cmap[cint32_t,cmap[cint32_t,cset[cint32_t]]]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[cint32_t,cmap[cint32_t,cset[cint32_t]]]])
    @staticmethod
    cdef shared_ptr[cmap[cint32_t,cmap[cint32_t,cset[cint32_t]]]] _make_instance(object items) except *

cdef class List__Map__i32_Map__i32_Set__i32(thrift.py3.types.List):
    cdef shared_ptr[vector[cmap[cint32_t,cmap[cint32_t,cset[cint32_t]]]]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cmap[cint32_t,cmap[cint32_t,cset[cint32_t]]]]])
    @staticmethod
    cdef shared_ptr[vector[cmap[cint32_t,cmap[cint32_t,cset[cint32_t]]]]] _make_instance(object items) except *

cdef class List__List__Map__i32_Map__i32_Set__i32(thrift.py3.types.List):
    cdef shared_ptr[vector[vector[cmap[cint32_t,cmap[cint32_t,cset[cint32_t]]]]]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[vector[cmap[cint32_t,cmap[cint32_t,cset[cint32_t]]]]]])
    @staticmethod
    cdef shared_ptr[vector[vector[cmap[cint32_t,cmap[cint32_t,cset[cint32_t]]]]]] _make_instance(object items) except *


