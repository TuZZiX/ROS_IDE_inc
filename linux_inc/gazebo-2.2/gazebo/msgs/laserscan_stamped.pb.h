// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: laserscan_stamped.proto

#ifndef PROTOBUF_laserscan_5fstamped_2eproto__INCLUDED
#define PROTOBUF_laserscan_5fstamped_2eproto__INCLUDED

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
#include "time.pb.h"
#include "laserscan.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_laserscan_5fstamped_2eproto();
void protobuf_AssignDesc_laserscan_5fstamped_2eproto();
void protobuf_ShutdownFile_laserscan_5fstamped_2eproto();

class LaserScanStamped;

// ===================================================================

class LaserScanStamped : public ::google::protobuf::Message {
 public:
  LaserScanStamped();
  virtual ~LaserScanStamped();

  LaserScanStamped(const LaserScanStamped& from);

  inline LaserScanStamped& operator=(const LaserScanStamped& from) {
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
  static const LaserScanStamped& default_instance();

  void Swap(LaserScanStamped* other);

  // implements Message ----------------------------------------------

  LaserScanStamped* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LaserScanStamped& from);
  void MergeFrom(const LaserScanStamped& from);
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

  // required .gazebo.msgs.Time time = 1;
  inline bool has_time() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 1;
  inline const ::gazebo::msgs::Time& time() const;
  inline ::gazebo::msgs::Time* mutable_time();
  inline ::gazebo::msgs::Time* release_time();
  inline void set_allocated_time(::gazebo::msgs::Time* time);

  // required .gazebo.msgs.LaserScan scan = 2;
  inline bool has_scan() const;
  inline void clear_scan();
  static const int kScanFieldNumber = 2;
  inline const ::gazebo::msgs::LaserScan& scan() const;
  inline ::gazebo::msgs::LaserScan* mutable_scan();
  inline ::gazebo::msgs::LaserScan* release_scan();
  inline void set_allocated_scan(::gazebo::msgs::LaserScan* scan);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.LaserScanStamped)
 private:
  inline void set_has_time();
  inline void clear_has_time();
  inline void set_has_scan();
  inline void clear_has_scan();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::gazebo::msgs::Time* time_;
  ::gazebo::msgs::LaserScan* scan_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_laserscan_5fstamped_2eproto();
  friend void protobuf_AssignDesc_laserscan_5fstamped_2eproto();
  friend void protobuf_ShutdownFile_laserscan_5fstamped_2eproto();

  void InitAsDefaultInstance();
  static LaserScanStamped* default_instance_;
};
// ===================================================================


// ===================================================================

// LaserScanStamped

// required .gazebo.msgs.Time time = 1;
inline bool LaserScanStamped::has_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LaserScanStamped::set_has_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LaserScanStamped::clear_has_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LaserScanStamped::clear_time() {
  if (time_ != NULL) time_->::gazebo::msgs::Time::Clear();
  clear_has_time();
}
inline const ::gazebo::msgs::Time& LaserScanStamped::time() const {
  return time_ != NULL ? *time_ : *default_instance_->time_;
}
inline ::gazebo::msgs::Time* LaserScanStamped::mutable_time() {
  set_has_time();
  if (time_ == NULL) time_ = new ::gazebo::msgs::Time;
  return time_;
}
inline ::gazebo::msgs::Time* LaserScanStamped::release_time() {
  clear_has_time();
  ::gazebo::msgs::Time* temp = time_;
  time_ = NULL;
  return temp;
}
inline void LaserScanStamped::set_allocated_time(::gazebo::msgs::Time* time) {
  delete time_;
  time_ = time;
  if (time) {
    set_has_time();
  } else {
    clear_has_time();
  }
}

// required .gazebo.msgs.LaserScan scan = 2;
inline bool LaserScanStamped::has_scan() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LaserScanStamped::set_has_scan() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LaserScanStamped::clear_has_scan() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LaserScanStamped::clear_scan() {
  if (scan_ != NULL) scan_->::gazebo::msgs::LaserScan::Clear();
  clear_has_scan();
}
inline const ::gazebo::msgs::LaserScan& LaserScanStamped::scan() const {
  return scan_ != NULL ? *scan_ : *default_instance_->scan_;
}
inline ::gazebo::msgs::LaserScan* LaserScanStamped::mutable_scan() {
  set_has_scan();
  if (scan_ == NULL) scan_ = new ::gazebo::msgs::LaserScan;
  return scan_;
}
inline ::gazebo::msgs::LaserScan* LaserScanStamped::release_scan() {
  clear_has_scan();
  ::gazebo::msgs::LaserScan* temp = scan_;
  scan_ = NULL;
  return temp;
}
inline void LaserScanStamped::set_allocated_scan(::gazebo::msgs::LaserScan* scan) {
  delete scan_;
  scan_ = scan;
  if (scan) {
    set_has_scan();
  } else {
    clear_has_scan();
  }
}


typedef boost::shared_ptr<gazebo::msgs::LaserScanStamped> LaserScanStampedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::LaserScanStamped const> ConstLaserScanStampedPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_laserscan_5fstamped_2eproto__INCLUDED
