// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: laserscan.proto

#ifndef PROTOBUF_laserscan_2eproto__INCLUDED
#define PROTOBUF_laserscan_2eproto__INCLUDED

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
#include "pose.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_laserscan_2eproto();
void protobuf_AssignDesc_laserscan_2eproto();
void protobuf_ShutdownFile_laserscan_2eproto();

class LaserScan;

// ===================================================================

class LaserScan : public ::google::protobuf::Message {
 public:
  LaserScan();
  virtual ~LaserScan();

  LaserScan(const LaserScan& from);

  inline LaserScan& operator=(const LaserScan& from) {
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
  static const LaserScan& default_instance();

  void Swap(LaserScan* other);

  // implements Message ----------------------------------------------

  LaserScan* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LaserScan& from);
  void MergeFrom(const LaserScan& from);
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

  // required string frame = 1;
  inline bool has_frame() const;
  inline void clear_frame();
  static const int kFrameFieldNumber = 1;
  inline const ::std::string& frame() const;
  inline void set_frame(const ::std::string& value);
  inline void set_frame(const char* value);
  inline void set_frame(const char* value, size_t size);
  inline ::std::string* mutable_frame();
  inline ::std::string* release_frame();
  inline void set_allocated_frame(::std::string* frame);

  // required .gazebo.msgs.Pose world_pose = 2;
  inline bool has_world_pose() const;
  inline void clear_world_pose();
  static const int kWorldPoseFieldNumber = 2;
  inline const ::gazebo::msgs::Pose& world_pose() const;
  inline ::gazebo::msgs::Pose* mutable_world_pose();
  inline ::gazebo::msgs::Pose* release_world_pose();
  inline void set_allocated_world_pose(::gazebo::msgs::Pose* world_pose);

  // required double angle_min = 3;
  inline bool has_angle_min() const;
  inline void clear_angle_min();
  static const int kAngleMinFieldNumber = 3;
  inline double angle_min() const;
  inline void set_angle_min(double value);

  // required double angle_max = 4;
  inline bool has_angle_max() const;
  inline void clear_angle_max();
  static const int kAngleMaxFieldNumber = 4;
  inline double angle_max() const;
  inline void set_angle_max(double value);

  // required double angle_step = 5;
  inline bool has_angle_step() const;
  inline void clear_angle_step();
  static const int kAngleStepFieldNumber = 5;
  inline double angle_step() const;
  inline void set_angle_step(double value);

  // required double range_min = 6;
  inline bool has_range_min() const;
  inline void clear_range_min();
  static const int kRangeMinFieldNumber = 6;
  inline double range_min() const;
  inline void set_range_min(double value);

  // required double range_max = 7;
  inline bool has_range_max() const;
  inline void clear_range_max();
  static const int kRangeMaxFieldNumber = 7;
  inline double range_max() const;
  inline void set_range_max(double value);

  // repeated double ranges = 8;
  inline int ranges_size() const;
  inline void clear_ranges();
  static const int kRangesFieldNumber = 8;
  inline double ranges(int index) const;
  inline void set_ranges(int index, double value);
  inline void add_ranges(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      ranges() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_ranges();

  // repeated double intensities = 9;
  inline int intensities_size() const;
  inline void clear_intensities();
  static const int kIntensitiesFieldNumber = 9;
  inline double intensities(int index) const;
  inline void set_intensities(int index, double value);
  inline void add_intensities(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      intensities() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_intensities();

  // @@protoc_insertion_point(class_scope:gazebo.msgs.LaserScan)
 private:
  inline void set_has_frame();
  inline void clear_has_frame();
  inline void set_has_world_pose();
  inline void clear_has_world_pose();
  inline void set_has_angle_min();
  inline void clear_has_angle_min();
  inline void set_has_angle_max();
  inline void clear_has_angle_max();
  inline void set_has_angle_step();
  inline void clear_has_angle_step();
  inline void set_has_range_min();
  inline void clear_has_range_min();
  inline void set_has_range_max();
  inline void clear_has_range_max();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* frame_;
  ::gazebo::msgs::Pose* world_pose_;
  double angle_min_;
  double angle_max_;
  double angle_step_;
  double range_min_;
  double range_max_;
  ::google::protobuf::RepeatedField< double > ranges_;
  ::google::protobuf::RepeatedField< double > intensities_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(9 + 31) / 32];

  friend void  protobuf_AddDesc_laserscan_2eproto();
  friend void protobuf_AssignDesc_laserscan_2eproto();
  friend void protobuf_ShutdownFile_laserscan_2eproto();

  void InitAsDefaultInstance();
  static LaserScan* default_instance_;
};
// ===================================================================


// ===================================================================

// LaserScan

// required string frame = 1;
inline bool LaserScan::has_frame() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LaserScan::set_has_frame() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LaserScan::clear_has_frame() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LaserScan::clear_frame() {
  if (frame_ != &::google::protobuf::internal::kEmptyString) {
    frame_->clear();
  }
  clear_has_frame();
}
inline const ::std::string& LaserScan::frame() const {
  return *frame_;
}
inline void LaserScan::set_frame(const ::std::string& value) {
  set_has_frame();
  if (frame_ == &::google::protobuf::internal::kEmptyString) {
    frame_ = new ::std::string;
  }
  frame_->assign(value);
}
inline void LaserScan::set_frame(const char* value) {
  set_has_frame();
  if (frame_ == &::google::protobuf::internal::kEmptyString) {
    frame_ = new ::std::string;
  }
  frame_->assign(value);
}
inline void LaserScan::set_frame(const char* value, size_t size) {
  set_has_frame();
  if (frame_ == &::google::protobuf::internal::kEmptyString) {
    frame_ = new ::std::string;
  }
  frame_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LaserScan::mutable_frame() {
  set_has_frame();
  if (frame_ == &::google::protobuf::internal::kEmptyString) {
    frame_ = new ::std::string;
  }
  return frame_;
}
inline ::std::string* LaserScan::release_frame() {
  clear_has_frame();
  if (frame_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = frame_;
    frame_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LaserScan::set_allocated_frame(::std::string* frame) {
  if (frame_ != &::google::protobuf::internal::kEmptyString) {
    delete frame_;
  }
  if (frame) {
    set_has_frame();
    frame_ = frame;
  } else {
    clear_has_frame();
    frame_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required .gazebo.msgs.Pose world_pose = 2;
inline bool LaserScan::has_world_pose() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LaserScan::set_has_world_pose() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LaserScan::clear_has_world_pose() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LaserScan::clear_world_pose() {
  if (world_pose_ != NULL) world_pose_->::gazebo::msgs::Pose::Clear();
  clear_has_world_pose();
}
inline const ::gazebo::msgs::Pose& LaserScan::world_pose() const {
  return world_pose_ != NULL ? *world_pose_ : *default_instance_->world_pose_;
}
inline ::gazebo::msgs::Pose* LaserScan::mutable_world_pose() {
  set_has_world_pose();
  if (world_pose_ == NULL) world_pose_ = new ::gazebo::msgs::Pose;
  return world_pose_;
}
inline ::gazebo::msgs::Pose* LaserScan::release_world_pose() {
  clear_has_world_pose();
  ::gazebo::msgs::Pose* temp = world_pose_;
  world_pose_ = NULL;
  return temp;
}
inline void LaserScan::set_allocated_world_pose(::gazebo::msgs::Pose* world_pose) {
  delete world_pose_;
  world_pose_ = world_pose;
  if (world_pose) {
    set_has_world_pose();
  } else {
    clear_has_world_pose();
  }
}

// required double angle_min = 3;
inline bool LaserScan::has_angle_min() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LaserScan::set_has_angle_min() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LaserScan::clear_has_angle_min() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LaserScan::clear_angle_min() {
  angle_min_ = 0;
  clear_has_angle_min();
}
inline double LaserScan::angle_min() const {
  return angle_min_;
}
inline void LaserScan::set_angle_min(double value) {
  set_has_angle_min();
  angle_min_ = value;
}

// required double angle_max = 4;
inline bool LaserScan::has_angle_max() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LaserScan::set_has_angle_max() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LaserScan::clear_has_angle_max() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LaserScan::clear_angle_max() {
  angle_max_ = 0;
  clear_has_angle_max();
}
inline double LaserScan::angle_max() const {
  return angle_max_;
}
inline void LaserScan::set_angle_max(double value) {
  set_has_angle_max();
  angle_max_ = value;
}

// required double angle_step = 5;
inline bool LaserScan::has_angle_step() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LaserScan::set_has_angle_step() {
  _has_bits_[0] |= 0x00000010u;
}
inline void LaserScan::clear_has_angle_step() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void LaserScan::clear_angle_step() {
  angle_step_ = 0;
  clear_has_angle_step();
}
inline double LaserScan::angle_step() const {
  return angle_step_;
}
inline void LaserScan::set_angle_step(double value) {
  set_has_angle_step();
  angle_step_ = value;
}

// required double range_min = 6;
inline bool LaserScan::has_range_min() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void LaserScan::set_has_range_min() {
  _has_bits_[0] |= 0x00000020u;
}
inline void LaserScan::clear_has_range_min() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void LaserScan::clear_range_min() {
  range_min_ = 0;
  clear_has_range_min();
}
inline double LaserScan::range_min() const {
  return range_min_;
}
inline void LaserScan::set_range_min(double value) {
  set_has_range_min();
  range_min_ = value;
}

// required double range_max = 7;
inline bool LaserScan::has_range_max() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void LaserScan::set_has_range_max() {
  _has_bits_[0] |= 0x00000040u;
}
inline void LaserScan::clear_has_range_max() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void LaserScan::clear_range_max() {
  range_max_ = 0;
  clear_has_range_max();
}
inline double LaserScan::range_max() const {
  return range_max_;
}
inline void LaserScan::set_range_max(double value) {
  set_has_range_max();
  range_max_ = value;
}

// repeated double ranges = 8;
inline int LaserScan::ranges_size() const {
  return ranges_.size();
}
inline void LaserScan::clear_ranges() {
  ranges_.Clear();
}
inline double LaserScan::ranges(int index) const {
  return ranges_.Get(index);
}
inline void LaserScan::set_ranges(int index, double value) {
  ranges_.Set(index, value);
}
inline void LaserScan::add_ranges(double value) {
  ranges_.Add(value);
}
inline const ::google::protobuf::RepeatedField< double >&
LaserScan::ranges() const {
  return ranges_;
}
inline ::google::protobuf::RepeatedField< double >*
LaserScan::mutable_ranges() {
  return &ranges_;
}

// repeated double intensities = 9;
inline int LaserScan::intensities_size() const {
  return intensities_.size();
}
inline void LaserScan::clear_intensities() {
  intensities_.Clear();
}
inline double LaserScan::intensities(int index) const {
  return intensities_.Get(index);
}
inline void LaserScan::set_intensities(int index, double value) {
  intensities_.Set(index, value);
}
inline void LaserScan::add_intensities(double value) {
  intensities_.Add(value);
}
inline const ::google::protobuf::RepeatedField< double >&
LaserScan::intensities() const {
  return intensities_;
}
inline ::google::protobuf::RepeatedField< double >*
LaserScan::mutable_intensities() {
  return &intensities_;
}


typedef boost::shared_ptr<gazebo::msgs::LaserScan> LaserScanPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::LaserScan const> ConstLaserScanPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_laserscan_2eproto__INCLUDED
