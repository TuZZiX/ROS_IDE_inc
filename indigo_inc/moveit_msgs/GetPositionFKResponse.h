// Generated by gencpp from file moveit_msgs/GetPositionFKResponse.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_GETPOSITIONFKRESPONSE_H
#define MOVEIT_MSGS_MESSAGE_GETPOSITIONFKRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>
#include <moveit_msgs/MoveItErrorCodes.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct GetPositionFKResponse_
{
  typedef GetPositionFKResponse_<ContainerAllocator> Type;

  GetPositionFKResponse_()
    : pose_stamped()
    , fk_link_names()
    , error_code()  {
    }
  GetPositionFKResponse_(const ContainerAllocator& _alloc)
    : pose_stamped(_alloc)
    , fk_link_names(_alloc)
    , error_code(_alloc)  {
    }



   typedef std::vector< ::geometry_msgs::PoseStamped_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::other >  _pose_stamped_type;
  _pose_stamped_type pose_stamped;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _fk_link_names_type;
  _fk_link_names_type fk_link_names;

   typedef  ::moveit_msgs::MoveItErrorCodes_<ContainerAllocator>  _error_code_type;
  _error_code_type error_code;




  typedef boost::shared_ptr< ::moveit_msgs::GetPositionFKResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::GetPositionFKResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetPositionFKResponse_

typedef ::moveit_msgs::GetPositionFKResponse_<std::allocator<void> > GetPositionFKResponse;

typedef boost::shared_ptr< ::moveit_msgs::GetPositionFKResponse > GetPositionFKResponsePtr;
typedef boost::shared_ptr< ::moveit_msgs::GetPositionFKResponse const> GetPositionFKResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::GetPositionFKResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::GetPositionFKResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::moveit_msgs::GetPositionFKResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::GetPositionFKResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::GetPositionFKResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::GetPositionFKResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::GetPositionFKResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::GetPositionFKResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::GetPositionFKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "297215cf4fdfe0008356995ae621dae6";
  }

  static const char* value(const ::moveit_msgs::GetPositionFKResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x297215cf4fdfe000ULL;
  static const uint64_t static_value2 = 0x8356995ae621dae6ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::GetPositionFKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/GetPositionFKResponse";
  }

  static const char* value(const ::moveit_msgs::GetPositionFKResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::GetPositionFKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
geometry_msgs/PoseStamped[] pose_stamped\n\
\n\
\n\
string[] fk_link_names\n\
\n\
MoveItErrorCodes error_code\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
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
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
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
MSG: moveit_msgs/MoveItErrorCodes\n\
int32 val\n\
\n\
# overall behavior\n\
int32 SUCCESS=1\n\
int32 FAILURE=99999\n\
\n\
int32 PLANNING_FAILED=-1\n\
int32 INVALID_MOTION_PLAN=-2\n\
int32 MOTION_PLAN_INVALIDATED_BY_ENVIRONMENT_CHANGE=-3\n\
int32 CONTROL_FAILED=-4\n\
int32 UNABLE_TO_AQUIRE_SENSOR_DATA=-5\n\
int32 TIMED_OUT=-6\n\
int32 PREEMPTED=-7\n\
\n\
# planning & kinematics request errors\n\
int32 START_STATE_IN_COLLISION=-10\n\
int32 START_STATE_VIOLATES_PATH_CONSTRAINTS=-11\n\
\n\
int32 GOAL_IN_COLLISION=-12\n\
int32 GOAL_VIOLATES_PATH_CONSTRAINTS=-13\n\
int32 GOAL_CONSTRAINTS_VIOLATED=-14\n\
\n\
int32 INVALID_GROUP_NAME=-15\n\
int32 INVALID_GOAL_CONSTRAINTS=-16\n\
int32 INVALID_ROBOT_STATE=-17\n\
int32 INVALID_LINK_NAME=-18\n\
int32 INVALID_OBJECT_NAME=-19\n\
\n\
# system errors\n\
int32 FRAME_TRANSFORM_FAILURE=-21\n\
int32 COLLISION_CHECKING_UNAVAILABLE=-22\n\
int32 ROBOT_STATE_STALE=-23\n\
int32 SENSOR_INFO_STALE=-24\n\
\n\
# kinematics errors\n\
int32 NO_IK_SOLUTION=-31\n\
";
  }

  static const char* value(const ::moveit_msgs::GetPositionFKResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::GetPositionFKResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose_stamped);
      stream.next(m.fk_link_names);
      stream.next(m.error_code);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct GetPositionFKResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::GetPositionFKResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::GetPositionFKResponse_<ContainerAllocator>& v)
  {
    s << indent << "pose_stamped[]" << std::endl;
    for (size_t i = 0; i < v.pose_stamped.size(); ++i)
    {
      s << indent << "  pose_stamped[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "    ", v.pose_stamped[i]);
    }
    s << indent << "fk_link_names[]" << std::endl;
    for (size_t i = 0; i < v.fk_link_names.size(); ++i)
    {
      s << indent << "  fk_link_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.fk_link_names[i]);
    }
    s << indent << "error_code: ";
    s << std::endl;
    Printer< ::moveit_msgs::MoveItErrorCodes_<ContainerAllocator> >::stream(s, indent + "  ", v.error_code);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_GETPOSITIONFKRESPONSE_H
