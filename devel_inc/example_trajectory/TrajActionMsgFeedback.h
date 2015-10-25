// Generated by gencpp from file example_trajectory/TrajActionMsgFeedback.msg
// DO NOT EDIT!


#ifndef EXAMPLE_TRAJECTORY_MESSAGE_TRAJACTIONMSGFEEDBACK_H
#define EXAMPLE_TRAJECTORY_MESSAGE_TRAJACTIONMSGFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace example_trajectory
{
template <class ContainerAllocator>
struct TrajActionMsgFeedback_
{
  typedef TrajActionMsgFeedback_<ContainerAllocator> Type;

  TrajActionMsgFeedback_()
    : fdbk(0)  {
    }
  TrajActionMsgFeedback_(const ContainerAllocator& _alloc)
    : fdbk(0)  {
    }



   typedef int32_t _fdbk_type;
  _fdbk_type fdbk;




  typedef boost::shared_ptr< ::example_trajectory::TrajActionMsgFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::example_trajectory::TrajActionMsgFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct TrajActionMsgFeedback_

typedef ::example_trajectory::TrajActionMsgFeedback_<std::allocator<void> > TrajActionMsgFeedback;

typedef boost::shared_ptr< ::example_trajectory::TrajActionMsgFeedback > TrajActionMsgFeedbackPtr;
typedef boost::shared_ptr< ::example_trajectory::TrajActionMsgFeedback const> TrajActionMsgFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::example_trajectory::TrajActionMsgFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::example_trajectory::TrajActionMsgFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace example_trajectory

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'roscpp': ['/opt/ros/indigo/share/roscpp/cmake/../msg'], 'actionlib': ['/opt/ros/indigo/share/actionlib/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'example_trajectory': ['/home/tianshipei/ros_ws/devel/share/example_trajectory/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::example_trajectory::TrajActionMsgFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::example_trajectory::TrajActionMsgFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::example_trajectory::TrajActionMsgFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::example_trajectory::TrajActionMsgFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::example_trajectory::TrajActionMsgFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::example_trajectory::TrajActionMsgFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::example_trajectory::TrajActionMsgFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "46cc8f8da6ebf35aedc6bad2e96b2e59";
  }

  static const char* value(const ::example_trajectory::TrajActionMsgFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x46cc8f8da6ebf35aULL;
  static const uint64_t static_value2 = 0xedc6bad2e96b2e59ULL;
};

template<class ContainerAllocator>
struct DataType< ::example_trajectory::TrajActionMsgFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "example_trajectory/TrajActionMsgFeedback";
  }

  static const char* value(const ::example_trajectory::TrajActionMsgFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::example_trajectory::TrajActionMsgFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback\n\
int32 fdbk\n\
\n\
";
  }

  static const char* value(const ::example_trajectory::TrajActionMsgFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::example_trajectory::TrajActionMsgFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.fdbk);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct TrajActionMsgFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::example_trajectory::TrajActionMsgFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::example_trajectory::TrajActionMsgFeedback_<ContainerAllocator>& v)
  {
    s << indent << "fdbk: ";
    Printer<int32_t>::stream(s, indent + "  ", v.fdbk);
  }
};

} // namespace message_operations
} // namespace ros

#endif // EXAMPLE_TRAJECTORY_MESSAGE_TRAJACTIONMSGFEEDBACK_H
