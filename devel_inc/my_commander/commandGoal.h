// Generated by gencpp from file my_commander/commandGoal.msg
// DO NOT EDIT!


#ifndef MY_COMMANDER_MESSAGE_COMMANDGOAL_H
#define MY_COMMANDER_MESSAGE_COMMANDGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace my_commander
{
template <class ContainerAllocator>
struct commandGoal_
{
  typedef commandGoal_<ContainerAllocator> Type;

  commandGoal_()
    : amplitude(0.0)
    , frequency(0.0)
    , cycles(0)  {
    }
  commandGoal_(const ContainerAllocator& _alloc)
    : amplitude(0.0)
    , frequency(0.0)
    , cycles(0)  {
    }



   typedef double _amplitude_type;
  _amplitude_type amplitude;

   typedef double _frequency_type;
  _frequency_type frequency;

   typedef uint32_t _cycles_type;
  _cycles_type cycles;




  typedef boost::shared_ptr< ::my_commander::commandGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_commander::commandGoal_<ContainerAllocator> const> ConstPtr;

}; // struct commandGoal_

typedef ::my_commander::commandGoal_<std::allocator<void> > commandGoal;

typedef boost::shared_ptr< ::my_commander::commandGoal > commandGoalPtr;
typedef boost::shared_ptr< ::my_commander::commandGoal const> commandGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_commander::commandGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_commander::commandGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace my_commander

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'my_commander': ['/home/tianshipei/ros_ws/devel/share/my_commander/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::my_commander::commandGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_commander::commandGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_commander::commandGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_commander::commandGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_commander::commandGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_commander::commandGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_commander::commandGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "53cd9af5df1979f7569a863ed25939dc";
  }

  static const char* value(const ::my_commander::commandGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x53cd9af5df1979f7ULL;
  static const uint64_t static_value2 = 0x569a863ed25939dcULL;
};

template<class ContainerAllocator>
struct DataType< ::my_commander::commandGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_commander/commandGoal";
  }

  static const char* value(const ::my_commander::commandGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_commander::commandGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#Goal messages\n\
float64 amplitude	#magnitude of the sine wave\n\
float64 frequency	#frequency of the sine wave\n\
uint32 cycles		#numbers of cycles to run\n\
";
  }

  static const char* value(const ::my_commander::commandGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_commander::commandGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.amplitude);
      stream.next(m.frequency);
      stream.next(m.cycles);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct commandGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_commander::commandGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_commander::commandGoal_<ContainerAllocator>& v)
  {
    s << indent << "amplitude: ";
    Printer<double>::stream(s, indent + "  ", v.amplitude);
    s << indent << "frequency: ";
    Printer<double>::stream(s, indent + "  ", v.frequency);
    s << indent << "cycles: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.cycles);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_COMMANDER_MESSAGE_COMMANDGOAL_H
