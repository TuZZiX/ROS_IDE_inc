// Generated by gencpp from file map_msgs/SetMapProjectionsResponse.msg
// DO NOT EDIT!


#ifndef MAP_MSGS_MESSAGE_SETMAPPROJECTIONSRESPONSE_H
#define MAP_MSGS_MESSAGE_SETMAPPROJECTIONSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <map_msgs/ProjectedMapInfo.h>

namespace map_msgs
{
template <class ContainerAllocator>
struct SetMapProjectionsResponse_
{
  typedef SetMapProjectionsResponse_<ContainerAllocator> Type;

  SetMapProjectionsResponse_()
    : projected_maps_info()  {
    }
  SetMapProjectionsResponse_(const ContainerAllocator& _alloc)
    : projected_maps_info(_alloc)  {
    }



   typedef std::vector< ::map_msgs::ProjectedMapInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::map_msgs::ProjectedMapInfo_<ContainerAllocator> >::other >  _projected_maps_info_type;
  _projected_maps_info_type projected_maps_info;




  typedef boost::shared_ptr< ::map_msgs::SetMapProjectionsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::map_msgs::SetMapProjectionsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetMapProjectionsResponse_

typedef ::map_msgs::SetMapProjectionsResponse_<std::allocator<void> > SetMapProjectionsResponse;

typedef boost::shared_ptr< ::map_msgs::SetMapProjectionsResponse > SetMapProjectionsResponsePtr;
typedef boost::shared_ptr< ::map_msgs::SetMapProjectionsResponse const> SetMapProjectionsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::map_msgs::SetMapProjectionsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::map_msgs::SetMapProjectionsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace map_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'map_msgs': ['/tmp/buildd/ros-indigo-map-msgs-0.0.2-1trusty-20150522-1251/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::map_msgs::SetMapProjectionsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_msgs::SetMapProjectionsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_msgs::SetMapProjectionsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_msgs::SetMapProjectionsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_msgs::SetMapProjectionsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_msgs::SetMapProjectionsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::map_msgs::SetMapProjectionsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d7980a33202421c8cd74565e57a4d229";
  }

  static const char* value(const ::map_msgs::SetMapProjectionsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd7980a33202421c8ULL;
  static const uint64_t static_value2 = 0xcd74565e57a4d229ULL;
};

template<class ContainerAllocator>
struct DataType< ::map_msgs::SetMapProjectionsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "map_msgs/SetMapProjectionsResponse";
  }

  static const char* value(const ::map_msgs::SetMapProjectionsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::map_msgs::SetMapProjectionsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "map_msgs/ProjectedMapInfo[] projected_maps_info\n\
\n\
\n\
================================================================================\n\
MSG: map_msgs/ProjectedMapInfo\n\
string frame_id\n\
float64 x\n\
float64 y\n\
float64 width\n\
float64 height\n\
float64 min_z\n\
float64 max_z\n\
";
  }

  static const char* value(const ::map_msgs::SetMapProjectionsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::map_msgs::SetMapProjectionsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.projected_maps_info);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SetMapProjectionsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::map_msgs::SetMapProjectionsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::map_msgs::SetMapProjectionsResponse_<ContainerAllocator>& v)
  {
    s << indent << "projected_maps_info[]" << std::endl;
    for (size_t i = 0; i < v.projected_maps_info.size(); ++i)
    {
      s << indent << "  projected_maps_info[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::map_msgs::ProjectedMapInfo_<ContainerAllocator> >::stream(s, indent + "    ", v.projected_maps_info[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAP_MSGS_MESSAGE_SETMAPPROJECTIONSRESPONSE_H
