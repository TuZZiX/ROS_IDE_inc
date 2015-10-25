// Generated by gencpp from file topic_tools/MuxAddRequest.msg
// DO NOT EDIT!


#ifndef TOPIC_TOOLS_MESSAGE_MUXADDREQUEST_H
#define TOPIC_TOOLS_MESSAGE_MUXADDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace topic_tools
{
template <class ContainerAllocator>
struct MuxAddRequest_
{
  typedef MuxAddRequest_<ContainerAllocator> Type;

  MuxAddRequest_()
    : topic()  {
    }
  MuxAddRequest_(const ContainerAllocator& _alloc)
    : topic(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _topic_type;
  _topic_type topic;




  typedef boost::shared_ptr< ::topic_tools::MuxAddRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::topic_tools::MuxAddRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MuxAddRequest_

typedef ::topic_tools::MuxAddRequest_<std::allocator<void> > MuxAddRequest;

typedef boost::shared_ptr< ::topic_tools::MuxAddRequest > MuxAddRequestPtr;
typedef boost::shared_ptr< ::topic_tools::MuxAddRequest const> MuxAddRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::topic_tools::MuxAddRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::topic_tools::MuxAddRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace topic_tools

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::topic_tools::MuxAddRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::topic_tools::MuxAddRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::topic_tools::MuxAddRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::topic_tools::MuxAddRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::topic_tools::MuxAddRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::topic_tools::MuxAddRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::topic_tools::MuxAddRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d8f94bae31b356b24d0427f80426d0c3";
  }

  static const char* value(const ::topic_tools::MuxAddRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd8f94bae31b356b2ULL;
  static const uint64_t static_value2 = 0x4d0427f80426d0c3ULL;
};

template<class ContainerAllocator>
struct DataType< ::topic_tools::MuxAddRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "topic_tools/MuxAddRequest";
  }

  static const char* value(const ::topic_tools::MuxAddRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::topic_tools::MuxAddRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string topic\n\
";
  }

  static const char* value(const ::topic_tools::MuxAddRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::topic_tools::MuxAddRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.topic);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct MuxAddRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::topic_tools::MuxAddRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::topic_tools::MuxAddRequest_<ContainerAllocator>& v)
  {
    s << indent << "topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.topic);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TOPIC_TOOLS_MESSAGE_MUXADDREQUEST_H
