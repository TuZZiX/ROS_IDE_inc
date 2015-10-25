// Generated by gencpp from file cwru_msgs/PathSegment.msg
// DO NOT EDIT!


#ifndef CWRU_MSGS_MESSAGE_PATHSEGMENT_H
#define CWRU_MSGS_MESSAGE_PATHSEGMENT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Twist.h>

namespace cwru_msgs
{
template <class ContainerAllocator>
struct PathSegment_
{
  typedef PathSegment_<ContainerAllocator> Type;

  PathSegment_()
    : header()
    , seg_type(0)
    , seg_number(0)
    , seg_length(0.0)
    , ref_point()
    , init_tan_angle()
    , curvature(0.0)
    , max_speeds()
    , min_speeds()
    , accel_limit(0.0)
    , decel_limit(0.0)  {
    }
  PathSegment_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , seg_type(0)
    , seg_number(0)
    , seg_length(0.0)
    , ref_point(_alloc)
    , init_tan_angle(_alloc)
    , curvature(0.0)
    , max_speeds(_alloc)
    , min_speeds(_alloc)
    , accel_limit(0.0)
    , decel_limit(0.0)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int8_t _seg_type_type;
  _seg_type_type seg_type;

   typedef uint32_t _seg_number_type;
  _seg_number_type seg_number;

   typedef double _seg_length_type;
  _seg_length_type seg_length;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _ref_point_type;
  _ref_point_type ref_point;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _init_tan_angle_type;
  _init_tan_angle_type init_tan_angle;

   typedef double _curvature_type;
  _curvature_type curvature;

   typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _max_speeds_type;
  _max_speeds_type max_speeds;

   typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _min_speeds_type;
  _min_speeds_type min_speeds;

   typedef double _accel_limit_type;
  _accel_limit_type accel_limit;

   typedef double _decel_limit_type;
  _decel_limit_type decel_limit;


    enum { LINE = 1 };
     enum { ARC = 2 };
     enum { SPIN_IN_PLACE = 3 };
 

  typedef boost::shared_ptr< ::cwru_msgs::PathSegment_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cwru_msgs::PathSegment_<ContainerAllocator> const> ConstPtr;

}; // struct PathSegment_

typedef ::cwru_msgs::PathSegment_<std::allocator<void> > PathSegment;

typedef boost::shared_ptr< ::cwru_msgs::PathSegment > PathSegmentPtr;
typedef boost::shared_ptr< ::cwru_msgs::PathSegment const> PathSegmentConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cwru_msgs::PathSegment_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cwru_msgs::PathSegment_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cwru_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'cwru_msgs': ['/home/tianshipei/ros_ws/src/external_packages/cwru_msgs/cwru_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cwru_msgs::PathSegment_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cwru_msgs::PathSegment_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cwru_msgs::PathSegment_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cwru_msgs::PathSegment_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cwru_msgs::PathSegment_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cwru_msgs::PathSegment_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cwru_msgs::PathSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5c807f5cea06f40555a1d9f2a31b3c69";
  }

  static const char* value(const ::cwru_msgs::PathSegment_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5c807f5cea06f405ULL;
  static const uint64_t static_value2 = 0x55a1d9f2a31b3c69ULL;
};

template<class ContainerAllocator>
struct DataType< ::cwru_msgs::PathSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cwru_msgs/PathSegment";
  }

  static const char* value(const ::cwru_msgs::PathSegment_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cwru_msgs::PathSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#Reference frame that the following coordinates should be interpreted relative to and timestamp to use when transforming\n\
Header header\n\
\n\
#Segment type enums\n\
int8 LINE = 1\n\
int8 ARC = 2\n\
int8 SPIN_IN_PLACE = 3\n\
\n\
#Segment type\n\
int8 seg_type\n\
\n\
#Segment number\n\
uint32 seg_number\n\
\n\
#Segment length\n\
float64 seg_length\n\
\n\
#Reference point\n\
geometry_msgs/Point ref_point\n\
\n\
#Initial tangent angle\n\
geometry_msgs/Quaternion init_tan_angle\n\
\n\
#Curvature\n\
float64 curvature\n\
\n\
#Speed limits for this segment\n\
geometry_msgs/Twist max_speeds\n\
geometry_msgs/Twist min_speeds\n\
\n\
#Acceleration limit for this segment (m/s^2 for lines/arcs, rads/s^2 for spin-in-place)\n\
float64 accel_limit\n\
\n\
#Deceleration limit for this segment\n\
float64 decel_limit\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::cwru_msgs::PathSegment_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cwru_msgs::PathSegment_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.seg_type);
      stream.next(m.seg_number);
      stream.next(m.seg_length);
      stream.next(m.ref_point);
      stream.next(m.init_tan_angle);
      stream.next(m.curvature);
      stream.next(m.max_speeds);
      stream.next(m.min_speeds);
      stream.next(m.accel_limit);
      stream.next(m.decel_limit);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct PathSegment_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cwru_msgs::PathSegment_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cwru_msgs::PathSegment_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "seg_type: ";
    Printer<int8_t>::stream(s, indent + "  ", v.seg_type);
    s << indent << "seg_number: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.seg_number);
    s << indent << "seg_length: ";
    Printer<double>::stream(s, indent + "  ", v.seg_length);
    s << indent << "ref_point: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.ref_point);
    s << indent << "init_tan_angle: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.init_tan_angle);
    s << indent << "curvature: ";
    Printer<double>::stream(s, indent + "  ", v.curvature);
    s << indent << "max_speeds: ";
    s << std::endl;
    Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.max_speeds);
    s << indent << "min_speeds: ";
    s << std::endl;
    Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.min_speeds);
    s << indent << "accel_limit: ";
    Printer<double>::stream(s, indent + "  ", v.accel_limit);
    s << indent << "decel_limit: ";
    Printer<double>::stream(s, indent + "  ", v.decel_limit);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CWRU_MSGS_MESSAGE_PATHSEGMENT_H