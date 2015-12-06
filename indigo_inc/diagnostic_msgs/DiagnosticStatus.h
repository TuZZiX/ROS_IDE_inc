// Generated by gencpp from file diagnostic_msgs/DiagnosticStatus.msg
// DO NOT EDIT!


#ifndef DIAGNOSTIC_MSGS_MESSAGE_DIAGNOSTICSTATUS_H
#define DIAGNOSTIC_MSGS_MESSAGE_DIAGNOSTICSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <diagnostic_msgs/KeyValue.h>

namespace diagnostic_msgs
{
template <class ContainerAllocator>
struct DiagnosticStatus_
{
  typedef DiagnosticStatus_<ContainerAllocator> Type;

  DiagnosticStatus_()
    : level(0)
    , name()
    , message()
    , hardware_id()
    , values()  {
    }
  DiagnosticStatus_(const ContainerAllocator& _alloc)
    : level(0)
    , name(_alloc)
    , message(_alloc)
    , hardware_id(_alloc)
    , values(_alloc)  {
    }



   typedef int8_t _level_type;
  _level_type level;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _hardware_id_type;
  _hardware_id_type hardware_id;

   typedef std::vector< ::diagnostic_msgs::KeyValue_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::diagnostic_msgs::KeyValue_<ContainerAllocator> >::other >  _values_type;
  _values_type values;


    enum { OK = 0 };
     enum { WARN = 1 };
     enum { ERROR = 2 };
     enum { STALE = 3 };
 

  typedef boost::shared_ptr< ::diagnostic_msgs::DiagnosticStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::diagnostic_msgs::DiagnosticStatus_<ContainerAllocator> const> ConstPtr;

}; // struct DiagnosticStatus_

typedef ::diagnostic_msgs::DiagnosticStatus_<std::allocator<void> > DiagnosticStatus;

typedef boost::shared_ptr< ::diagnostic_msgs::DiagnosticStatus > DiagnosticStatusPtr;
typedef boost::shared_ptr< ::diagnostic_msgs::DiagnosticStatus const> DiagnosticStatusConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::diagnostic_msgs::DiagnosticStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::diagnostic_msgs::DiagnosticStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace diagnostic_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'diagnostic_msgs': ['/tmp/buildd/ros-indigo-diagnostic-msgs-1.11.8-0trusty-20151110-2359/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::diagnostic_msgs::DiagnosticStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::diagnostic_msgs::DiagnosticStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::diagnostic_msgs::DiagnosticStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::diagnostic_msgs::DiagnosticStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::diagnostic_msgs::DiagnosticStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::diagnostic_msgs::DiagnosticStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::diagnostic_msgs::DiagnosticStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d0ce08bc6e5ba34c7754f563a9cabaf1";
  }

  static const char* value(const ::diagnostic_msgs::DiagnosticStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd0ce08bc6e5ba34cULL;
  static const uint64_t static_value2 = 0x7754f563a9cabaf1ULL;
};

template<class ContainerAllocator>
struct DataType< ::diagnostic_msgs::DiagnosticStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "diagnostic_msgs/DiagnosticStatus";
  }

  static const char* value(const ::diagnostic_msgs::DiagnosticStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::diagnostic_msgs::DiagnosticStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message holds the status of an individual component of the robot.\n\
# \n\
\n\
# Possible levels of operations\n\
byte OK=0\n\
byte WARN=1\n\
byte ERROR=2\n\
byte STALE=3\n\
\n\
byte level # level of operation enumerated above \n\
string name # a description of the test/component reporting\n\
string message # a description of the status\n\
string hardware_id # a hardware unique string\n\
KeyValue[] values # an array of values associated with the status\n\
\n\
\n\
================================================================================\n\
MSG: diagnostic_msgs/KeyValue\n\
string key # what to label this value when viewing\n\
string value # a value to track over time\n\
";
  }

  static const char* value(const ::diagnostic_msgs::DiagnosticStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::diagnostic_msgs::DiagnosticStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.level);
      stream.next(m.name);
      stream.next(m.message);
      stream.next(m.hardware_id);
      stream.next(m.values);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct DiagnosticStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::diagnostic_msgs::DiagnosticStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::diagnostic_msgs::DiagnosticStatus_<ContainerAllocator>& v)
  {
    s << indent << "level: ";
    Printer<int8_t>::stream(s, indent + "  ", v.level);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
    s << indent << "hardware_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.hardware_id);
    s << indent << "values[]" << std::endl;
    for (size_t i = 0; i < v.values.size(); ++i)
    {
      s << indent << "  values[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::diagnostic_msgs::KeyValue_<ContainerAllocator> >::stream(s, indent + "    ", v.values[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DIAGNOSTIC_MSGS_MESSAGE_DIAGNOSTICSTATUS_H
