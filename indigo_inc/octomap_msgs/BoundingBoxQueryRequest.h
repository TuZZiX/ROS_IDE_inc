// Generated by gencpp from file octomap_msgs/BoundingBoxQueryRequest.msg
// DO NOT EDIT!


#ifndef OCTOMAP_MSGS_MESSAGE_BOUNDINGBOXQUERYREQUEST_H
#define OCTOMAP_MSGS_MESSAGE_BOUNDINGBOXQUERYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>

namespace octomap_msgs
{
template <class ContainerAllocator>
struct BoundingBoxQueryRequest_
{
  typedef BoundingBoxQueryRequest_<ContainerAllocator> Type;

  BoundingBoxQueryRequest_()
    : min()
    , max()  {
    }
  BoundingBoxQueryRequest_(const ContainerAllocator& _alloc)
    : min(_alloc)
    , max(_alloc)  {
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _min_type;
  _min_type min;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _max_type;
  _max_type max;




  typedef boost::shared_ptr< ::octomap_msgs::BoundingBoxQueryRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::octomap_msgs::BoundingBoxQueryRequest_<ContainerAllocator> const> ConstPtr;

}; // struct BoundingBoxQueryRequest_

typedef ::octomap_msgs::BoundingBoxQueryRequest_<std::allocator<void> > BoundingBoxQueryRequest;

typedef boost::shared_ptr< ::octomap_msgs::BoundingBoxQueryRequest > BoundingBoxQueryRequestPtr;
typedef boost::shared_ptr< ::octomap_msgs::BoundingBoxQueryRequest const> BoundingBoxQueryRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::octomap_msgs::BoundingBoxQueryRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::octomap_msgs::BoundingBoxQueryRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace octomap_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'octomap_msgs': ['/tmp/buildd/ros-indigo-octomap-msgs-0.3.2-0trusty-20150522-1238/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::octomap_msgs::BoundingBoxQueryRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::octomap_msgs::BoundingBoxQueryRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::octomap_msgs::BoundingBoxQueryRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::octomap_msgs::BoundingBoxQueryRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::octomap_msgs::BoundingBoxQueryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::octomap_msgs::BoundingBoxQueryRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::octomap_msgs::BoundingBoxQueryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "93aa3d73b866f04880927745f4aab303";
  }

  static const char* value(const ::octomap_msgs::BoundingBoxQueryRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x93aa3d73b866f048ULL;
  static const uint64_t static_value2 = 0x80927745f4aab303ULL;
};

template<class ContainerAllocator>
struct DataType< ::octomap_msgs::BoundingBoxQueryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "octomap_msgs/BoundingBoxQueryRequest";
  }

  static const char* value(const ::octomap_msgs::BoundingBoxQueryRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::octomap_msgs::BoundingBoxQueryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
geometry_msgs/Point min\n\
\n\
geometry_msgs/Point max\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::octomap_msgs::BoundingBoxQueryRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::octomap_msgs::BoundingBoxQueryRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.min);
      stream.next(m.max);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct BoundingBoxQueryRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::octomap_msgs::BoundingBoxQueryRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::octomap_msgs::BoundingBoxQueryRequest_<ContainerAllocator>& v)
  {
    s << indent << "min: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.min);
    s << indent << "max: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.max);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OCTOMAP_MSGS_MESSAGE_BOUNDINGBOXQUERYREQUEST_H
