// Generated by gencpp from file example_ros_msg/example_message.msg
// DO NOT EDIT!


#ifndef EXAMPLE_ROS_MSG_MESSAGE_EXAMPLE_MESSAGE_H
#define EXAMPLE_ROS_MSG_MESSAGE_EXAMPLE_MESSAGE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace example_ros_msg
{
template <class ContainerAllocator>
struct example_message_
{
  typedef example_message_<ContainerAllocator> Type;

  example_message_()
    : header()
    , demo_int(0)
    , demo_double(0.0)
    , TF(false)
    , my_first_vector()  {
    }
  example_message_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , demo_int(0)
    , demo_double(0.0)
    , TF(false)
    , my_first_vector(_alloc)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _demo_int_type;
  _demo_int_type demo_int;

   typedef double _demo_double_type;
  _demo_double_type demo_double;

   typedef uint8_t _TF_type;
  _TF_type TF;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _my_first_vector_type;
  _my_first_vector_type my_first_vector;




  typedef boost::shared_ptr< ::example_ros_msg::example_message_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::example_ros_msg::example_message_<ContainerAllocator> const> ConstPtr;

}; // struct example_message_

typedef ::example_ros_msg::example_message_<std::allocator<void> > example_message;

typedef boost::shared_ptr< ::example_ros_msg::example_message > example_messagePtr;
typedef boost::shared_ptr< ::example_ros_msg::example_message const> example_messageConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::example_ros_msg::example_message_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::example_ros_msg::example_message_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace example_ros_msg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'roscpp': ['/opt/ros/indigo/share/roscpp/cmake/../msg'], 'example_ros_msg': ['/home/tianshipei/ros_ws/src/eecs-397-f15/example_ros_msg/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::example_ros_msg::example_message_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::example_ros_msg::example_message_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::example_ros_msg::example_message_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::example_ros_msg::example_message_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::example_ros_msg::example_message_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::example_ros_msg::example_message_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::example_ros_msg::example_message_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7915b7d98e95ea55af183a4501515331";
  }

  static const char* value(const ::example_ros_msg::example_message_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7915b7d98e95ea55ULL;
  static const uint64_t static_value2 = 0xaf183a4501515331ULL;
};

template<class ContainerAllocator>
struct DataType< ::example_ros_msg::example_message_<ContainerAllocator> >
{
  static const char* value()
  {
    return "example_ros_msg/example_message";
  }

  static const char* value(const ::example_ros_msg::example_message_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::example_ros_msg::example_message_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# here are primitives that can be used:\n\
#int8, int16, int32, int64 (plus uint*)\n\
# float32, float64\n\
# string\n\
# time, duration\n\
# other msg files\n\
# variable-length array[] and fixed-length array[C] \n\
Header header\n\
int32 demo_int\n\
float64 demo_double\n\
bool TF\n\
float64[] my_first_vector\n\
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
";
  }

  static const char* value(const ::example_ros_msg::example_message_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::example_ros_msg::example_message_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.demo_int);
      stream.next(m.demo_double);
      stream.next(m.TF);
      stream.next(m.my_first_vector);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct example_message_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::example_ros_msg::example_message_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::example_ros_msg::example_message_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "demo_int: ";
    Printer<int32_t>::stream(s, indent + "  ", v.demo_int);
    s << indent << "demo_double: ";
    Printer<double>::stream(s, indent + "  ", v.demo_double);
    s << indent << "TF: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.TF);
    s << indent << "my_first_vector[]" << std::endl;
    for (size_t i = 0; i < v.my_first_vector.size(); ++i)
    {
      s << indent << "  my_first_vector[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.my_first_vector[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // EXAMPLE_ROS_MSG_MESSAGE_EXAMPLE_MESSAGE_H
