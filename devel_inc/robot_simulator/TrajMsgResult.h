// Generated by gencpp from file robot_simulator/TrajMsgResult.msg
// DO NOT EDIT!


#ifndef ROBOT_SIMULATOR_MESSAGE_TRAJMSGRESULT_H
#define ROBOT_SIMULATOR_MESSAGE_TRAJMSGRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robot_simulator
{
template <class ContainerAllocator>
struct TrajMsgResult_
{
  typedef TrajMsgResult_<ContainerAllocator> Type;

  TrajMsgResult_()
    : progress(0.0)  {
    }
  TrajMsgResult_(const ContainerAllocator& _alloc)
    : progress(0.0)  {
    }



   typedef double _progress_type;
  _progress_type progress;




  typedef boost::shared_ptr< ::robot_simulator::TrajMsgResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_simulator::TrajMsgResult_<ContainerAllocator> const> ConstPtr;

}; // struct TrajMsgResult_

typedef ::robot_simulator::TrajMsgResult_<std::allocator<void> > TrajMsgResult;

typedef boost::shared_ptr< ::robot_simulator::TrajMsgResult > TrajMsgResultPtr;
typedef boost::shared_ptr< ::robot_simulator::TrajMsgResult const> TrajMsgResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_simulator::TrajMsgResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_simulator::TrajMsgResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robot_simulator

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'robot_simulator': ['/home/tianshipei/ros_ws/devel/share/robot_simulator/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robot_simulator::TrajMsgResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_simulator::TrajMsgResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_simulator::TrajMsgResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_simulator::TrajMsgResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_simulator::TrajMsgResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_simulator::TrajMsgResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_simulator::TrajMsgResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7afca0099e0cddc25243b1e3569895fe";
  }

  static const char* value(const ::robot_simulator::TrajMsgResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7afca0099e0cddc2ULL;
  static const uint64_t static_value2 = 0x5243b1e3569895feULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_simulator::TrajMsgResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_simulator/TrajMsgResult";
  }

  static const char* value(const ::robot_simulator::TrajMsgResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_simulator::TrajMsgResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#Result messages\n\
float64 progress	#current rate of progress\n\
";
  }

  static const char* value(const ::robot_simulator::TrajMsgResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_simulator::TrajMsgResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.progress);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct TrajMsgResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_simulator::TrajMsgResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_simulator::TrajMsgResult_<ContainerAllocator>& v)
  {
    s << indent << "progress: ";
    Printer<double>::stream(s, indent + "  ", v.progress);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_SIMULATOR_MESSAGE_TRAJMSGRESULT_H
