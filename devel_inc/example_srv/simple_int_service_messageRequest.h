// Generated by gencpp from file example_srv/simple_int_service_messageRequest.msg
// DO NOT EDIT!


#ifndef EXAMPLE_SRV_MESSAGE_SIMPLE_INT_SERVICE_MESSAGEREQUEST_H
#define EXAMPLE_SRV_MESSAGE_SIMPLE_INT_SERVICE_MESSAGEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace example_srv
{
template <class ContainerAllocator>
struct simple_int_service_messageRequest_
{
  typedef simple_int_service_messageRequest_<ContainerAllocator> Type;

  simple_int_service_messageRequest_()
    : req(0)  {
    }
  simple_int_service_messageRequest_(const ContainerAllocator& _alloc)
    : req(0)  {
    }



   typedef int32_t _req_type;
  _req_type req;




  typedef boost::shared_ptr< ::example_srv::simple_int_service_messageRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::example_srv::simple_int_service_messageRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simple_int_service_messageRequest_

typedef ::example_srv::simple_int_service_messageRequest_<std::allocator<void> > simple_int_service_messageRequest;

typedef boost::shared_ptr< ::example_srv::simple_int_service_messageRequest > simple_int_service_messageRequestPtr;
typedef boost::shared_ptr< ::example_srv::simple_int_service_messageRequest const> simple_int_service_messageRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::example_srv::simple_int_service_messageRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::example_srv::simple_int_service_messageRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace example_srv

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::example_srv::simple_int_service_messageRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::example_srv::simple_int_service_messageRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::example_srv::simple_int_service_messageRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::example_srv::simple_int_service_messageRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::example_srv::simple_int_service_messageRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::example_srv::simple_int_service_messageRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::example_srv::simple_int_service_messageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "688ec893d5ff2cccc11b9bc8bc41109b";
  }

  static const char* value(const ::example_srv::simple_int_service_messageRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x688ec893d5ff2cccULL;
  static const uint64_t static_value2 = 0xc11b9bc8bc41109bULL;
};

template<class ContainerAllocator>
struct DataType< ::example_srv::simple_int_service_messageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "example_srv/simple_int_service_messageRequest";
  }

  static const char* value(const ::example_srv::simple_int_service_messageRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::example_srv::simple_int_service_messageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 req\n\
";
  }

  static const char* value(const ::example_srv::simple_int_service_messageRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::example_srv::simple_int_service_messageRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.req);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct simple_int_service_messageRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::example_srv::simple_int_service_messageRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::example_srv::simple_int_service_messageRequest_<ContainerAllocator>& v)
  {
    s << indent << "req: ";
    Printer<int32_t>::stream(s, indent + "  ", v.req);
  }
};

} // namespace message_operations
} // namespace ros

#endif // EXAMPLE_SRV_MESSAGE_SIMPLE_INT_SERVICE_MESSAGEREQUEST_H
