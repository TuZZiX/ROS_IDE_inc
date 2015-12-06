// Generated by gencpp from file trajectory_msgs/MultiDOFJointTrajectoryPoint.msg
// DO NOT EDIT!


#ifndef TRAJECTORY_MSGS_MESSAGE_MULTIDOFJOINTTRAJECTORYPOINT_H
#define TRAJECTORY_MSGS_MESSAGE_MULTIDOFJOINTTRAJECTORYPOINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Transform.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Twist.h>

namespace trajectory_msgs
{
template <class ContainerAllocator>
struct MultiDOFJointTrajectoryPoint_
{
  typedef MultiDOFJointTrajectoryPoint_<ContainerAllocator> Type;

  MultiDOFJointTrajectoryPoint_()
    : transforms()
    , velocities()
    , accelerations()
    , time_from_start()  {
    }
  MultiDOFJointTrajectoryPoint_(const ContainerAllocator& _alloc)
    : transforms(_alloc)
    , velocities(_alloc)
    , accelerations(_alloc)
    , time_from_start()  {
    }



   typedef std::vector< ::geometry_msgs::Transform_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Transform_<ContainerAllocator> >::other >  _transforms_type;
  _transforms_type transforms;

   typedef std::vector< ::geometry_msgs::Twist_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Twist_<ContainerAllocator> >::other >  _velocities_type;
  _velocities_type velocities;

   typedef std::vector< ::geometry_msgs::Twist_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Twist_<ContainerAllocator> >::other >  _accelerations_type;
  _accelerations_type accelerations;

   typedef ros::Duration _time_from_start_type;
  _time_from_start_type time_from_start;




  typedef boost::shared_ptr< ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator> const> ConstPtr;

}; // struct MultiDOFJointTrajectoryPoint_

typedef ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<std::allocator<void> > MultiDOFJointTrajectoryPoint;

typedef boost::shared_ptr< ::trajectory_msgs::MultiDOFJointTrajectoryPoint > MultiDOFJointTrajectoryPointPtr;
typedef boost::shared_ptr< ::trajectory_msgs::MultiDOFJointTrajectoryPoint const> MultiDOFJointTrajectoryPointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace trajectory_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'trajectory_msgs': ['/tmp/buildd/ros-indigo-trajectory-msgs-1.11.8-0trusty-20151111-0009/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3ebe08d1abd5b65862d50e09430db776";
  }

  static const char* value(const ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3ebe08d1abd5b658ULL;
  static const uint64_t static_value2 = 0x62d50e09430db776ULL;
};

template<class ContainerAllocator>
struct DataType< ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "trajectory_msgs/MultiDOFJointTrajectoryPoint";
  }

  static const char* value(const ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Each multi-dof joint can specify a transform (up to 6 DOF)\n\
geometry_msgs/Transform[] transforms\n\
\n\
# There can be a velocity specified for the origin of the joint \n\
geometry_msgs/Twist[] velocities\n\
\n\
# There can be an acceleration specified for the origin of the joint \n\
geometry_msgs/Twist[] accelerations\n\
\n\
duration time_from_start\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Transform\n\
# This represents the transform between two coordinate frames in free space.\n\
\n\
Vector3 translation\n\
Quaternion rotation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
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
";
  }

  static const char* value(const ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.transforms);
      stream.next(m.velocities);
      stream.next(m.accelerations);
      stream.next(m.time_from_start);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct MultiDOFJointTrajectoryPoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::trajectory_msgs::MultiDOFJointTrajectoryPoint_<ContainerAllocator>& v)
  {
    s << indent << "transforms[]" << std::endl;
    for (size_t i = 0; i < v.transforms.size(); ++i)
    {
      s << indent << "  transforms[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Transform_<ContainerAllocator> >::stream(s, indent + "    ", v.transforms[i]);
    }
    s << indent << "velocities[]" << std::endl;
    for (size_t i = 0; i < v.velocities.size(); ++i)
    {
      s << indent << "  velocities[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "    ", v.velocities[i]);
    }
    s << indent << "accelerations[]" << std::endl;
    for (size_t i = 0; i < v.accelerations.size(); ++i)
    {
      s << indent << "  accelerations[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "    ", v.accelerations[i]);
    }
    s << indent << "time_from_start: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.time_from_start);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TRAJECTORY_MSGS_MESSAGE_MULTIDOFJOINTTRAJECTORYPOINT_H
