// Autogenerated by Thrift Compiler (facebook)
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
// @generated

package module

import (
	"bytes"
	"context"
	"sync"
	"fmt"
	thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)

// (needed to ensure safety because of naive import list construction.)
var _ = thrift.ZERO
var _ = fmt.Printf
var _ = sync.Mutex{}
var _ = bytes.Equal
var _ = context.Background

var GoUnusedProtection__ int;

// Attributes:
//  - Id
type GetEntityRequest struct {
  Id string `thrift:"id,1" db:"id" json:"id"`
}

func NewGetEntityRequest() *GetEntityRequest {
  return &GetEntityRequest{}
}


func (p *GetEntityRequest) GetId() string {
  return p.Id
}
type GetEntityRequestBuilder struct {
  obj *GetEntityRequest
}

func NewGetEntityRequestBuilder() *GetEntityRequestBuilder{
  return &GetEntityRequestBuilder{
    obj: NewGetEntityRequest(),
  }
}

func (p GetEntityRequestBuilder) Emit() *GetEntityRequest{
  return &GetEntityRequest{
    Id: p.obj.Id,
  }
}

func (g *GetEntityRequestBuilder) Id(id string) *GetEntityRequestBuilder {
  g.obj.Id = id
  return g
}

func (g *GetEntityRequest) SetId(id string) *GetEntityRequest {
  g.Id = id
  return g
}

func (p *GetEntityRequest) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *GetEntityRequest)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 1: ", err)
  } else {
    p.Id = v
  }
  return nil
}

func (p *GetEntityRequest) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("GetEntityRequest"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *GetEntityRequest) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("id", thrift.STRING, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:id: ", p), err) }
  if err := oprot.WriteString(string(p.Id)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.id (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:id: ", p), err) }
  return err
}

func (p *GetEntityRequest) String() string {
  if p == nil {
    return "<nil>"
  }

  idVal := fmt.Sprintf("%v", p.Id)
  return fmt.Sprintf("GetEntityRequest({Id:%s})", idVal)
}

// Attributes:
//  - Entity
type GetEntityResponse struct {
  Entity string `thrift:"entity,1" db:"entity" json:"entity"`
}

func NewGetEntityResponse() *GetEntityResponse {
  return &GetEntityResponse{}
}


func (p *GetEntityResponse) GetEntity() string {
  return p.Entity
}
type GetEntityResponseBuilder struct {
  obj *GetEntityResponse
}

func NewGetEntityResponseBuilder() *GetEntityResponseBuilder{
  return &GetEntityResponseBuilder{
    obj: NewGetEntityResponse(),
  }
}

func (p GetEntityResponseBuilder) Emit() *GetEntityResponse{
  return &GetEntityResponse{
    Entity: p.obj.Entity,
  }
}

func (g *GetEntityResponseBuilder) Entity(entity string) *GetEntityResponseBuilder {
  g.obj.Entity = entity
  return g
}

func (g *GetEntityResponse) SetEntity(entity string) *GetEntityResponse {
  g.Entity = entity
  return g
}

func (p *GetEntityResponse) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *GetEntityResponse)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 1: ", err)
  } else {
    p.Entity = v
  }
  return nil
}

func (p *GetEntityResponse) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("GetEntityResponse"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *GetEntityResponse) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("entity", thrift.STRING, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:entity: ", p), err) }
  if err := oprot.WriteString(string(p.Entity)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.entity (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:entity: ", p), err) }
  return err
}

func (p *GetEntityResponse) String() string {
  if p == nil {
    return "<nil>"
  }

  entityVal := fmt.Sprintf("%v", p.Entity)
  return fmt.Sprintf("GetEntityResponse({Entity:%s})", entityVal)
}

// Attributes:
//  - Foo
//  - Bar
//  - Baz
type NonComparableStruct struct {
  Foo string `thrift:"foo,1" db:"foo" json:"foo"`
  Bar []string `thrift:"bar,2" db:"bar" json:"bar"`
  Baz map[NonComparableStruct]int64 `thrift:"baz,3" db:"baz" json:"baz"`
}

func NewNonComparableStruct() *NonComparableStruct {
  return &NonComparableStruct{}
}


func (p *NonComparableStruct) GetFoo() string {
  return p.Foo
}

func (p *NonComparableStruct) GetBar() []string {
  return p.Bar
}

func (p *NonComparableStruct) GetBaz() map[NonComparableStruct]int64 {
  return p.Baz
}
type NonComparableStructBuilder struct {
  obj *NonComparableStruct
}

func NewNonComparableStructBuilder() *NonComparableStructBuilder{
  return &NonComparableStructBuilder{
    obj: NewNonComparableStruct(),
  }
}

func (p NonComparableStructBuilder) Emit() *NonComparableStruct{
  return &NonComparableStruct{
    Foo: p.obj.Foo,
    Bar: p.obj.Bar,
    Baz: p.obj.Baz,
  }
}

func (n *NonComparableStructBuilder) Foo(foo string) *NonComparableStructBuilder {
  n.obj.Foo = foo
  return n
}

func (n *NonComparableStructBuilder) Bar(bar []string) *NonComparableStructBuilder {
  n.obj.Bar = bar
  return n
}

func (n *NonComparableStructBuilder) Baz(baz map[NonComparableStruct]int64) *NonComparableStructBuilder {
  n.obj.Baz = baz
  return n
}

func (n *NonComparableStruct) SetFoo(foo string) *NonComparableStruct {
  n.Foo = foo
  return n
}

func (n *NonComparableStruct) SetBar(bar []string) *NonComparableStruct {
  n.Bar = bar
  return n
}

func (n *NonComparableStruct) SetBaz(baz map[NonComparableStruct]int64) *NonComparableStruct {
  n.Baz = baz
  return n
}

func (p *NonComparableStruct) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    case 2:
      if err := p.ReadField2(iprot); err != nil {
        return err
      }
    case 3:
      if err := p.ReadField3(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *NonComparableStruct)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 1: ", err)
  } else {
    p.Foo = v
  }
  return nil
}

func (p *NonComparableStruct)  ReadField2(iprot thrift.Protocol) error {
  _, size, err := iprot.ReadListBegin()
  if err != nil {
    return thrift.PrependError("error reading list begin: ", err)
  }
  tSlice := make([]string, 0, size)
  p.Bar =  tSlice
  for i := 0; i < size; i ++ {
    var _elem0 string
    if v, err := iprot.ReadString(); err != nil {
      return thrift.PrependError("error reading field 0: ", err)
    } else {
      _elem0 = v
    }
    p.Bar = append(p.Bar, _elem0)
  }
  if err := iprot.ReadListEnd(); err != nil {
    return thrift.PrependError("error reading list end: ", err)
  }
  return nil
}

func (p *NonComparableStruct)  ReadField3(iprot thrift.Protocol) error {
  _, _, size, err := iprot.ReadMapBegin()
  if err != nil {
    return thrift.PrependError("error reading map begin: ", err)
  }
  tMap := make(map[NonComparableStruct]int64, size)
  p.Baz =  tMap
  for i := 0; i < size; i ++ {
    _key1 := NewNonComparableStruct()
    if err := _key1.Read(iprot); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T error reading struct: ", _key1), err)
    }
    var _val2 int64
    if v, err := iprot.ReadI64(); err != nil {
      return thrift.PrependError("error reading field 0: ", err)
    } else {
      _val2 = v
    }
    p.Baz[*_key1] = _val2
  }
  if err := iprot.ReadMapEnd(); err != nil {
    return thrift.PrependError("error reading map end: ", err)
  }
  return nil
}

func (p *NonComparableStruct) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("NonComparableStruct"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := p.writeField2(oprot); err != nil { return err }
  if err := p.writeField3(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *NonComparableStruct) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("foo", thrift.STRING, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:foo: ", p), err) }
  if err := oprot.WriteString(string(p.Foo)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.foo (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:foo: ", p), err) }
  return err
}

func (p *NonComparableStruct) writeField2(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("bar", thrift.LIST, 2); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 2:bar: ", p), err) }
  if err := oprot.WriteListBegin(thrift.STRING, len(p.Bar)); err != nil {
    return thrift.PrependError("error writing list begin: ", err)
  }
  for _, v := range p.Bar {
    if err := oprot.WriteString(string(v)); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T. (0) field write error: ", p), err) }
  }
  if err := oprot.WriteListEnd(); err != nil {
    return thrift.PrependError("error writing list end: ", err)
  }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 2:bar: ", p), err) }
  return err
}

func (p *NonComparableStruct) writeField3(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("baz", thrift.MAP, 3); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 3:baz: ", p), err) }
  if err := oprot.WriteMapBegin(thrift.STRUCT, thrift.I64, len(p.Baz)); err != nil {
    return thrift.PrependError("error writing map begin: ", err)
  }
  for k, v := range p.Baz {
    if err := k.Write(oprot); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T error writing struct: ", k), err)
    }
    if err := oprot.WriteI64(int64(v)); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T. (0) field write error: ", p), err) }
  }
  if err := oprot.WriteMapEnd(); err != nil {
    return thrift.PrependError("error writing map end: ", err)
  }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 3:baz: ", p), err) }
  return err
}

func (p *NonComparableStruct) String() string {
  if p == nil {
    return "<nil>"
  }

  fooVal := fmt.Sprintf("%v", p.Foo)
  barVal := fmt.Sprintf("%v", p.Bar)
  bazVal := fmt.Sprintf("%v", p.Baz)
  return fmt.Sprintf("NonComparableStruct({Foo:%s Bar:%s Baz:%s})", fooVal, barVal, bazVal)
}

