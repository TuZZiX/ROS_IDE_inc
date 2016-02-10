// Generated by gencpp from file sound_play/SoundRequest.msg
// DO NOT EDIT!


#ifndef SOUND_PLAY_MESSAGE_SOUNDREQUEST_H
#define SOUND_PLAY_MESSAGE_SOUNDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sound_play
{
template <class ContainerAllocator>
struct SoundRequest_
{
  typedef SoundRequest_<ContainerAllocator> Type;

  SoundRequest_()
    : sound(0)
    , command(0)
    , arg()
    , arg2()  {
    }
  SoundRequest_(const ContainerAllocator& _alloc)
    : sound(0)
    , command(0)
    , arg(_alloc)
    , arg2(_alloc)  {
    }



   typedef int8_t _sound_type;
  _sound_type sound;

   typedef int8_t _command_type;
  _command_type command;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _arg_type;
  _arg_type arg;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _arg2_type;
  _arg2_type arg2;


    enum { BACKINGUP = 1 };
     enum { NEEDS_UNPLUGGING = 2 };
     enum { NEEDS_PLUGGING = 3 };
     enum { NEEDS_UNPLUGGING_BADLY = 4 };
     enum { NEEDS_PLUGGING_BADLY = 5 };
     enum { ALL = -1 };
     enum { PLAY_FILE = -2 };
     enum { SAY = -3 };
     enum { PLAY_STOP = 0 };
     enum { PLAY_ONCE = 1 };
     enum { PLAY_START = 2 };
 

  typedef boost::shared_ptr< ::sound_play::SoundRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sound_play::SoundRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SoundRequest_

typedef ::sound_play::SoundRequest_<std::allocator<void> > SoundRequest;

typedef boost::shared_ptr< ::sound_play::SoundRequest > SoundRequestPtr;
typedef boost::shared_ptr< ::sound_play::SoundRequest const> SoundRequestConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sound_play::SoundRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sound_play::SoundRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sound_play

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'sound_play': ['/tmp/buildd/ros-indigo-sound-play-0.2.9-0trusty-20151202-1827/obj-x86_64-linux-gnu/devel/share/sound_play/msg', '/tmp/buildd/ros-indigo-sound-play-0.2.9-0trusty-20151202-1827/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sound_play::SoundRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sound_play::SoundRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sound_play::SoundRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sound_play::SoundRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sound_play::SoundRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sound_play::SoundRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sound_play::SoundRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f194e75f1c3bf7a3e1e8b16bc9ef7c2a";
  }

  static const char* value(const ::sound_play::SoundRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf194e75f1c3bf7a3ULL;
  static const uint64_t static_value2 = 0xe1e8b16bc9ef7c2aULL;
};

template<class ContainerAllocator>
struct DataType< ::sound_play::SoundRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sound_play/SoundRequest";
  }

  static const char* value(const ::sound_play::SoundRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sound_play::SoundRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# IMPORTANT: You should never have to generate this message yourself.\n\
# Use the sound_play::SoundClient C++ helper or the\n\
# sound_play.libsoundplay.SoundClient Python helper.\n\
\n\
# Sounds\n\
int8 BACKINGUP = 1\n\
int8 NEEDS_UNPLUGGING = 2\n\
int8 NEEDS_PLUGGING = 3\n\
int8 NEEDS_UNPLUGGING_BADLY = 4\n\
int8 NEEDS_PLUGGING_BADLY = 5\n\
\n\
# Sound identifiers that have special meaning\n\
int8 ALL = -1 # Only legal with PLAY_STOP\n\
int8 PLAY_FILE = -2\n\
int8 SAY = -3\n\
\n\
int8 sound # Selects which sound to play (see above)\n\
\n\
# Commands\n\
int8 PLAY_STOP = 0 # Stop this sound from playing\n\
int8 PLAY_ONCE = 1 # Play the sound once\n\
int8 PLAY_START = 2 # Play the sound in a loop until a stop request occurs\n\
\n\
int8 command # Indicates what to do with the sound\n\
\n\
string arg # file name or text to say\n\
string arg2 # other arguments\n\
";
  }

  static const char* value(const ::sound_play::SoundRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sound_play::SoundRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sound);
      stream.next(m.command);
      stream.next(m.arg);
      stream.next(m.arg2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SoundRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sound_play::SoundRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sound_play::SoundRequest_<ContainerAllocator>& v)
  {
    s << indent << "sound: ";
    Printer<int8_t>::stream(s, indent + "  ", v.sound);
    s << indent << "command: ";
    Printer<int8_t>::stream(s, indent + "  ", v.command);
    s << indent << "arg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.arg);
    s << indent << "arg2: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.arg2);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SOUND_PLAY_MESSAGE_SOUNDREQUEST_H
