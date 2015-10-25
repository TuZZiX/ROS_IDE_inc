// Generated by gencpp from file moveit_msgs/WorkspaceParameters.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_WORKSPACEPARAMETERS_H
#define MOVEIT_MSGS_MESSAGE_WORKSPACEPARAMETERS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct WorkspaceParameters_
{
  typedef WorkspaceParameters_<ContainerAllocator> Type;

  WorkspaceParameters_()
    : header()
    , min_corner()
    , max_corner()  {
    }
  WorkspaceParameters_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , min_corner(_alloc)
    , max_corner(_alloc)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _min_corner_type;
  _min_corner_type min_corner;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _max_corner_type;
  _max_corner_type max_corner;




  typedef boost::shared_ptr< ::moveit_msgs::WorkspaceParameters_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::WorkspaceParameters_<ContainerAllocator> const> ConstPtr;

}; // struct WorkspaceParameters_

typedef ::moveit_msgs::WorkspaceParameters_<std::allocator<void> > WorkspaceParameters;

typedef boost::shared_ptr< ::moveit_msgs::WorkspaceParameters > WorkspaceParametersPtr;
typedef boost::shared_ptr< ::moveit_msgs::WorkspaceParameters const> WorkspaceParametersConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::WorkspaceParameters_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::WorkspaceParameters_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace moveit_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'shape_msgs': ['/opt/ros/indigo/share/shape_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/tmp/buildd/ros-indigo-moveit-msgs-0.6.1-0trusty-20150522-1300/obj-x86_64-linux-gnu/devel/share/moveit_msgs/msg', '/tmp/buildd/ros-indigo-moveit-msgs-0.6.1-0trusty-20150522-1300/msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/indigo/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/indigo/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::WorkspaceParameters_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::WorkspaceParameters_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::WorkspaceParameters_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::WorkspaceParameters_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::WorkspaceParameters_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::WorkspaceParameters_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::WorkspaceParameters_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d639a834e7b1f927e9f1d6c30e920016";
  }

  static const char* value(const ::moveit_msgs::WorkspaceParameters_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd639a834e7b1f927ULL;
  static const uint64_t static_value2 = 0xe9f1d6c30e920016ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::WorkspaceParameters_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/WorkspaceParameters";
  }

  static const char* value(const ::moveit_msgs::WorkspaceParameters_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::WorkspaceParameters_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message contains a set of parameters useful in\n\
# setting up the volume (a box) in which the robot is allowed to move.\n\
# This is useful only when planning for mobile parts of \n\
# the robot as well.\n\
\n\
# Define the frame of reference for the box corners\n\
Header header\n\
\n\
# The minumum corner of the box, with respect to the robot starting pose\n\
geometry_msgs/Vector3 min_corner\n\
\n\
# The maximum corner of the box, with respect to the robot starting pose\n\
geometry_msgs/Vector3 max_corner\n\
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
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::moveit_msgs::WorkspaceParameters_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::WorkspaceParameters_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.min_corner);
      stream.next(m.max_corner);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct WorkspaceParameters_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::WorkspaceParameters_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::WorkspaceParameters_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "min_corner: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.min_corner);
    s << indent << "max_corner: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.max_corner);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_WORKSPACEPARAMETERS_H
