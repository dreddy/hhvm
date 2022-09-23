#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from cpython cimport bool as pbool, int as pint, float as pfloat

cimport folly.iobuf as _fbthrift_iobuf

cimport thrift.py3.builder

cimport facebook.thrift.annotation.thrift.types as _facebook_thrift_annotation_thrift_types
cimport facebook.thrift.annotation.thrift.builders as _facebook_thrift_annotation_thrift_builders
cimport apache.thrift.op.patch.types as _apache_thrift_op_patch_types
cimport apache.thrift.op.patch.builders as _apache_thrift_op_patch_builders

cimport test.fixtures.patch.module.types as _test_fixtures_patch_module_types

cdef class MyData_Builder(thrift.py3.builder.StructBuilder):
    cdef public str data1
    cdef public pint data2


cdef class InnerUnion_Builder(thrift.py3.builder.StructBuilder):
    cdef public bytes innerOption


cdef class MyUnion_Builder(thrift.py3.builder.StructBuilder):
    cdef public str option1
    cdef public pint option2
    cdef public object option3


cdef class MyStruct_Builder(thrift.py3.builder.StructBuilder):
    cdef public pbool boolVal
    cdef public pint byteVal
    cdef public pint i16Val
    cdef public pint i32Val
    cdef public pint i64Val
    cdef public pfloat floatVal
    cdef public pfloat doubleVal
    cdef public str stringVal
    cdef public bytes binaryVal
    cdef public _test_fixtures_patch_module_types.MyEnum enumVal
    cdef public object structVal
    cdef public object unionVal
    cdef public object lateStructVal
    cdef public pbool optBoolVal
    cdef public pint optByteVal
    cdef public pint optI16Val
    cdef public pint optI32Val
    cdef public pint optI64Val
    cdef public pfloat optFloatVal
    cdef public pfloat optDoubleVal
    cdef public str optStringVal
    cdef public bytes optBinaryVal
    cdef public _test_fixtures_patch_module_types.MyEnum optEnumVal
    cdef public object optStructVal
    cdef public object optLateStructVal
    cdef public list optListVal
    cdef public set optSetVal
    cdef public dict optMapVal


cdef class LateDefStruct_Builder(thrift.py3.builder.StructBuilder):
    pass


