// Generated by gencpp from file moveit_msgs/GripperTranslation.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_GRIPPERTRANSLATION_H
#define MOVEIT_MSGS_MESSAGE_GRIPPERTRANSLATION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3Stamped.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct GripperTranslation_
{
  typedef GripperTranslation_<ContainerAllocator> Type;

  GripperTranslation_()
    : direction()
    , desired_distance(0.0)
    , min_distance(0.0)  {
    }
  GripperTranslation_(const ContainerAllocator& _alloc)
    : direction(_alloc)
    , desired_distance(0.0)
    , min_distance(0.0)  {
    }



   typedef  ::geometry_msgs::Vector3Stamped_<ContainerAllocator>  _direction_type;
  _direction_type direction;

   typedef float _desired_distance_type;
  _desired_distance_type desired_distance;

   typedef float _min_distance_type;
  _min_distance_type min_distance;




  typedef boost::shared_ptr< ::moveit_msgs::GripperTranslation_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::GripperTranslation_<ContainerAllocator> const> ConstPtr;

}; // struct GripperTranslation_

typedef ::moveit_msgs::GripperTranslation_<std::allocator<void> > GripperTranslation;

typedef boost::shared_ptr< ::moveit_msgs::GripperTranslation > GripperTranslationPtr;
typedef boost::shared_ptr< ::moveit_msgs::GripperTranslation const> GripperTranslationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::GripperTranslation_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::GripperTranslation_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace moveit_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/indigo/share/shape_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/tmp/buildd/ros-indigo-moveit-msgs-0.6.1-0trusty-20151111-0647/obj-x86_64-linux-gnu/devel/share/moveit_msgs/msg', '/tmp/buildd/ros-indigo-moveit-msgs-0.6.1-0trusty-20151111-0647/msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/indigo/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/indigo/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::GripperTranslation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::GripperTranslation_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::GripperTranslation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::GripperTranslation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::GripperTranslation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::GripperTranslation_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::GripperTranslation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b53bc0ad0f717cdec3b0e42dec300121";
  }

  static const char* value(const ::moveit_msgs::GripperTranslation_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb53bc0ad0f717cdeULL;
  static const uint64_t static_value2 = 0xc3b0e42dec300121ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::GripperTranslation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/GripperTranslation";
  }

  static const char* value(const ::moveit_msgs::GripperTranslation_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::GripperTranslation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# defines a translation for the gripper, used in pickup or place tasks\n\
# for example for lifting an object off a table or approaching the table for placing\n\
\n\
# the direction of the translation\n\
geometry_msgs/Vector3Stamped direction\n\
\n\
# the desired translation distance\n\
float32 desired_distance\n\
\n\
# the min distance that must be considered feasible before the\n\
# grasp is even attempted\n\
float32 min_distance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3Stamped\n\
# This represents a Vector3 with reference coordinate frame and timestamp\n\
Header header\n\
Vector3 vector\n\
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

  static const char* value(const ::moveit_msgs::GripperTranslation_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::GripperTranslation_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.direction);
      stream.next(m.desired_distance);
      stream.next(m.min_distance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct GripperTranslation_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::GripperTranslation_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::GripperTranslation_<ContainerAllocator>& v)
  {
    s << indent << "direction: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3Stamped_<ContainerAllocator> >::stream(s, indent + "  ", v.direction);
    s << indent << "desired_distance: ";
    Printer<float>::stream(s, indent + "  ", v.desired_distance);
    s << indent << "min_distance: ";
    Printer<float>::stream(s, indent + "  ", v.min_distance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_GRIPPERTRANSLATION_H
