// Generated by gencpp from file gazebo_msgs/GetLinkStateRequest.msg
// DO NOT EDIT!


#ifndef GAZEBO_MSGS_MESSAGE_GETLINKSTATEREQUEST_H
#define GAZEBO_MSGS_MESSAGE_GETLINKSTATEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gazebo_msgs
{
template <class ContainerAllocator>
struct GetLinkStateRequest_
{
  typedef GetLinkStateRequest_<ContainerAllocator> Type;

  GetLinkStateRequest_()
    : link_name()
    , reference_frame()  {
    }
  GetLinkStateRequest_(const ContainerAllocator& _alloc)
    : link_name(_alloc)
    , reference_frame(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _link_name_type;
  _link_name_type link_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _reference_frame_type;
  _reference_frame_type reference_frame;




  typedef boost::shared_ptr< ::gazebo_msgs::GetLinkStateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_msgs::GetLinkStateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetLinkStateRequest_

typedef ::gazebo_msgs::GetLinkStateRequest_<std::allocator<void> > GetLinkStateRequest;

typedef boost::shared_ptr< ::gazebo_msgs::GetLinkStateRequest > GetLinkStateRequestPtr;
typedef boost::shared_ptr< ::gazebo_msgs::GetLinkStateRequest const> GetLinkStateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_msgs::GetLinkStateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_msgs::GetLinkStateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gazebo_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'gazebo_msgs': ['/tmp/buildd/ros-indigo-gazebo-msgs-2.4.9-0trusty-20150816-0206/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::GetLinkStateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::GetLinkStateRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::GetLinkStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::GetLinkStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::GetLinkStateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::GetLinkStateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_msgs::GetLinkStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7551675c30aaa71f7c288d4864552001";
  }

  static const char* value(const ::gazebo_msgs::GetLinkStateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7551675c30aaa71fULL;
  static const uint64_t static_value2 = 0x7c288d4864552001ULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_msgs::GetLinkStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_msgs/GetLinkStateRequest";
  }

  static const char* value(const ::gazebo_msgs::GetLinkStateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_msgs::GetLinkStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string link_name\n\
\n\
string reference_frame\n\
\n\
\n\
";
  }

  static const char* value(const ::gazebo_msgs::GetLinkStateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_msgs::GetLinkStateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.link_name);
      stream.next(m.reference_frame);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct GetLinkStateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_msgs::GetLinkStateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_msgs::GetLinkStateRequest_<ContainerAllocator>& v)
  {
    s << indent << "link_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.link_name);
    s << indent << "reference_frame: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.reference_frame);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_MSGS_MESSAGE_GETLINKSTATEREQUEST_H
