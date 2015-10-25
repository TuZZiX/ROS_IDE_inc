// Generated by gencpp from file example_srv/IM_node_service_messageResponse.msg
// DO NOT EDIT!


#ifndef EXAMPLE_SRV_MESSAGE_IM_NODE_SERVICE_MESSAGERESPONSE_H
#define EXAMPLE_SRV_MESSAGE_IM_NODE_SERVICE_MESSAGERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>

namespace example_srv
{
template <class ContainerAllocator>
struct IM_node_service_messageResponse_
{
  typedef IM_node_service_messageResponse_<ContainerAllocator> Type;

  IM_node_service_messageResponse_()
    : poseStamped_IM_current()  {
    }
  IM_node_service_messageResponse_(const ContainerAllocator& _alloc)
    : poseStamped_IM_current(_alloc)  {
    }



   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _poseStamped_IM_current_type;
  _poseStamped_IM_current_type poseStamped_IM_current;




  typedef boost::shared_ptr< ::example_srv::IM_node_service_messageResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::example_srv::IM_node_service_messageResponse_<ContainerAllocator> const> ConstPtr;

}; // struct IM_node_service_messageResponse_

typedef ::example_srv::IM_node_service_messageResponse_<std::allocator<void> > IM_node_service_messageResponse;

typedef boost::shared_ptr< ::example_srv::IM_node_service_messageResponse > IM_node_service_messageResponsePtr;
typedef boost::shared_ptr< ::example_srv::IM_node_service_messageResponse const> IM_node_service_messageResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::example_srv::IM_node_service_messageResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::example_srv::IM_node_service_messageResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace example_srv

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::example_srv::IM_node_service_messageResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::example_srv::IM_node_service_messageResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::example_srv::IM_node_service_messageResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::example_srv::IM_node_service_messageResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::example_srv::IM_node_service_messageResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::example_srv::IM_node_service_messageResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::example_srv::IM_node_service_messageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dbedb23e0aaabca1697bafa8180aafdc";
  }

  static const char* value(const ::example_srv::IM_node_service_messageResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdbedb23e0aaabca1ULL;
  static const uint64_t static_value2 = 0x697bafa8180aafdcULL;
};

template<class ContainerAllocator>
struct DataType< ::example_srv::IM_node_service_messageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "example_srv/IM_node_service_messageResponse";
  }

  static const char* value(const ::example_srv::IM_node_service_messageResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::example_srv::IM_node_service_messageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
geometry_msgs/PoseStamped poseStamped_IM_current\n\
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
";
  }

  static const char* value(const ::example_srv::IM_node_service_messageResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::example_srv::IM_node_service_messageResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.poseStamped_IM_current);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct IM_node_service_messageResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::example_srv::IM_node_service_messageResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::example_srv::IM_node_service_messageResponse_<ContainerAllocator>& v)
  {
    s << indent << "poseStamped_IM_current: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.poseStamped_IM_current);
  }
};

} // namespace message_operations
} // namespace ros

#endif // EXAMPLE_SRV_MESSAGE_IM_NODE_SERVICE_MESSAGERESPONSE_H
