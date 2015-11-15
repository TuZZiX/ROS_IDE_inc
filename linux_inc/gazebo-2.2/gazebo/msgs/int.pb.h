// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: int.proto

#ifndef PROTOBUF_int_2eproto__INCLUDED
#define PROTOBUF_int_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_int_2eproto();
void protobuf_AssignDesc_int_2eproto();
void protobuf_ShutdownFile_int_2eproto();

class Int;

// ===================================================================

class Int : public ::google::protobuf::Message {
 public:
  Int();
  virtual ~Int();

  Int(const Int& from);

  inline Int& operator=(const Int& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Int& default_instance();

  void Swap(Int* other);

  // implements Message ----------------------------------------------

  Int* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Int& from);
  void MergeFrom(const Int& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 data = 1;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 1;
  inline ::google::protobuf::int32 data() const;
  inline void set_data(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Int)
 private:
  inline void set_has_data();
  inline void clear_has_data();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 data_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_int_2eproto();
  friend void protobuf_AssignDesc_int_2eproto();
  friend void protobuf_ShutdownFile_int_2eproto();

  void InitAsDefaultInstance();
  static Int* default_instance_;
};
// ===================================================================


// ===================================================================

// Int

// required int32 data = 1;
inline bool Int::has_data() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Int::set_has_data() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Int::clear_has_data() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Int::clear_data() {
  data_ = 0;
  clear_has_data();
}
inline ::google::protobuf::int32 Int::data() const {
  return data_;
}
inline void Int::set_data(::google::protobuf::int32 value) {
  set_has_data();
  data_ = value;
}


typedef boost::shared_ptr<gazebo::msgs::Int> IntPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::Int const> ConstIntPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_int_2eproto__INCLUDED
