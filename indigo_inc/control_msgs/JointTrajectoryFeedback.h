// Generated by gencpp from file control_msgs/JointTrajectoryFeedback.msg
// DO NOT EDIT!


#ifndef CONTROL_MSGS_MESSAGE_JOINTTRAJECTORYFEEDBACK_H
#define CONTROL_MSGS_MESSAGE_JOINTTRAJECTORYFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace control_msgs
{
template <class ContainerAllocator>
struct JointTrajectoryFeedback_
{
  typedef JointTrajectoryFeedback_<ContainerAllocator> Type;

  JointTrajectoryFeedback_()
    {
    }
  JointTrajectoryFeedback_(const ContainerAllocator& _alloc)
    {
    }






  typedef boost::shared_ptr< ::control_msgs::JointTrajectoryFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::control_msgs::JointTrajectoryFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct JointTrajectoryFeedback_

typedef ::control_msgs::JointTrajectoryFeedback_<std::allocator<void> > JointTrajectoryFeedback;

typedef boost::shared_ptr< ::control_msgs::JointTrajectoryFeedback > JointTrajectoryFeedbackPtr;
typedef boost::shared_ptr< ::control_msgs::JointTrajectoryFeedback const> JointTrajectoryFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::control_msgs::JointTrajectoryFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::control_msgs::JointTrajectoryFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'control_msgs': ['/tmp/buildd/ros-indigo-control-msgs-1.3.1-0trusty-20151111-0647/obj-x86_64-linux-gnu/devel/share/control_msgs/msg', '/tmp/buildd/ros-indigo-control-msgs-1.3.1-0trusty-20151111-0647/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::JointTrajectoryFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::JointTrajectoryFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::JointTrajectoryFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::JointTrajectoryFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::JointTrajectoryFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::JointTrajectoryFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::control_msgs::JointTrajectoryFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::control_msgs::JointTrajectoryFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::control_msgs::JointTrajectoryFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "control_msgs/JointTrajectoryFeedback";
  }

  static const char* value(const ::control_msgs::JointTrajectoryFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::control_msgs::JointTrajectoryFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
";
  }

  static const char* value(const ::control_msgs::JointTrajectoryFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::control_msgs::JointTrajectoryFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct JointTrajectoryFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::control_msgs::JointTrajectoryFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::control_msgs::JointTrajectoryFeedback_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // CONTROL_MSGS_MESSAGE_JOINTTRAJECTORYFEEDBACK_H
