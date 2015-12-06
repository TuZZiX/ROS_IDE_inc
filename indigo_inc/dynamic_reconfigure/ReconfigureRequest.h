// Generated by gencpp from file dynamic_reconfigure/ReconfigureRequest.msg
// DO NOT EDIT!


#ifndef DYNAMIC_RECONFIGURE_MESSAGE_RECONFIGUREREQUEST_H
#define DYNAMIC_RECONFIGURE_MESSAGE_RECONFIGUREREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <dynamic_reconfigure/Config.h>

namespace dynamic_reconfigure
{
template <class ContainerAllocator>
struct ReconfigureRequest_
{
  typedef ReconfigureRequest_<ContainerAllocator> Type;

  ReconfigureRequest_()
    : config()  {
    }
  ReconfigureRequest_(const ContainerAllocator& _alloc)
    : config(_alloc)  {
    }



   typedef  ::dynamic_reconfigure::Config_<ContainerAllocator>  _config_type;
  _config_type config;




  typedef boost::shared_ptr< ::dynamic_reconfigure::ReconfigureRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamic_reconfigure::ReconfigureRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ReconfigureRequest_

typedef ::dynamic_reconfigure::ReconfigureRequest_<std::allocator<void> > ReconfigureRequest;

typedef boost::shared_ptr< ::dynamic_reconfigure::ReconfigureRequest > ReconfigureRequestPtr;
typedef boost::shared_ptr< ::dynamic_reconfigure::ReconfigureRequest const> ReconfigureRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dynamic_reconfigure::ReconfigureRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dynamic_reconfigure::ReconfigureRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dynamic_reconfigure

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'dynamic_reconfigure': ['/tmp/buildd/ros-indigo-dynamic-reconfigure-1.5.38-0trusty-20151111-0717/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dynamic_reconfigure::ReconfigureRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamic_reconfigure::ReconfigureRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamic_reconfigure::ReconfigureRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamic_reconfigure::ReconfigureRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamic_reconfigure::ReconfigureRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamic_reconfigure::ReconfigureRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dynamic_reconfigure::ReconfigureRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ac41a77620a4a0348b7001641796a8a1";
  }

  static const char* value(const ::dynamic_reconfigure::ReconfigureRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xac41a77620a4a034ULL;
  static const uint64_t static_value2 = 0x8b7001641796a8a1ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamic_reconfigure::ReconfigureRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dynamic_reconfigure/ReconfigureRequest";
  }

  static const char* value(const ::dynamic_reconfigure::ReconfigureRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dynamic_reconfigure::ReconfigureRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Config config\n\
\n\
================================================================================\n\
MSG: dynamic_reconfigure/Config\n\
BoolParameter[] bools\n\
IntParameter[] ints\n\
StrParameter[] strs\n\
DoubleParameter[] doubles\n\
GroupState[] groups\n\
\n\
================================================================================\n\
MSG: dynamic_reconfigure/BoolParameter\n\
string name\n\
bool value\n\
\n\
================================================================================\n\
MSG: dynamic_reconfigure/IntParameter\n\
string name\n\
int32 value\n\
\n\
================================================================================\n\
MSG: dynamic_reconfigure/StrParameter\n\
string name\n\
string value\n\
\n\
================================================================================\n\
MSG: dynamic_reconfigure/DoubleParameter\n\
string name\n\
float64 value\n\
\n\
================================================================================\n\
MSG: dynamic_reconfigure/GroupState\n\
string name\n\
bool state\n\
int32 id\n\
int32 parent\n\
";
  }

  static const char* value(const ::dynamic_reconfigure::ReconfigureRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dynamic_reconfigure::ReconfigureRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.config);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ReconfigureRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamic_reconfigure::ReconfigureRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dynamic_reconfigure::ReconfigureRequest_<ContainerAllocator>& v)
  {
    s << indent << "config: ";
    s << std::endl;
    Printer< ::dynamic_reconfigure::Config_<ContainerAllocator> >::stream(s, indent + "  ", v.config);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DYNAMIC_RECONFIGURE_MESSAGE_RECONFIGUREREQUEST_H
