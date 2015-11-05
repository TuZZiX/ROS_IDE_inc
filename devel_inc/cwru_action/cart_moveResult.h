// Generated by gencpp from file cwru_action/cart_moveResult.msg
// DO NOT EDIT!


#ifndef CWRU_ACTION_MESSAGE_CART_MOVERESULT_H
#define CWRU_ACTION_MESSAGE_CART_MOVERESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cwru_action
{
template <class ContainerAllocator>
struct cart_moveResult_
{
  typedef cart_moveResult_<ContainerAllocator> Type;

  cart_moveResult_()
    : err_code(0)
    , err_msg()  {
    }
  cart_moveResult_(const ContainerAllocator& _alloc)
    : err_code(0)
    , err_msg(_alloc)  {
    }



   typedef int32_t _err_code_type;
  _err_code_type err_code;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _err_msg_type;
  _err_msg_type err_msg;




  typedef boost::shared_ptr< ::cwru_action::cart_moveResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cwru_action::cart_moveResult_<ContainerAllocator> const> ConstPtr;

}; // struct cart_moveResult_

typedef ::cwru_action::cart_moveResult_<std::allocator<void> > cart_moveResult;

typedef boost::shared_ptr< ::cwru_action::cart_moveResult > cart_moveResultPtr;
typedef boost::shared_ptr< ::cwru_action::cart_moveResult const> cart_moveResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cwru_action::cart_moveResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cwru_action::cart_moveResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cwru_action

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'roscpp': ['/opt/ros/indigo/share/roscpp/cmake/../msg'], 'actionlib': ['/opt/ros/indigo/share/actionlib/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'cwru_action': ['/home/tianshipei/ros_ws/devel/share/cwru_action/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cwru_action::cart_moveResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cwru_action::cart_moveResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cwru_action::cart_moveResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cwru_action::cart_moveResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cwru_action::cart_moveResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cwru_action::cart_moveResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cwru_action::cart_moveResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4994be0662f534b12a751a9710b92a4d";
  }

  static const char* value(const ::cwru_action::cart_moveResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4994be0662f534b1ULL;
  static const uint64_t static_value2 = 0x2a751a9710b92a4dULL;
};

template<class ContainerAllocator>
struct DataType< ::cwru_action::cart_moveResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cwru_action/cart_moveResult";
  }

  static const char* value(const ::cwru_action::cart_moveResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cwru_action::cart_moveResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result definition\n\
int32 err_code\n\
string err_msg\n\
";
  }

  static const char* value(const ::cwru_action::cart_moveResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cwru_action::cart_moveResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.err_code);
      stream.next(m.err_msg);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct cart_moveResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cwru_action::cart_moveResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cwru_action::cart_moveResult_<ContainerAllocator>& v)
  {
    s << indent << "err_code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.err_code);
    s << indent << "err_msg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.err_msg);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CWRU_ACTION_MESSAGE_CART_MOVERESULT_H
