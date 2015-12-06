// Generated by gencpp from file moveit_msgs/PlanningSceneWorld.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_PLANNINGSCENEWORLD_H
#define MOVEIT_MSGS_MESSAGE_PLANNINGSCENEWORLD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <moveit_msgs/CollisionObject.h>
#include <octomap_msgs/OctomapWithPose.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct PlanningSceneWorld_
{
  typedef PlanningSceneWorld_<ContainerAllocator> Type;

  PlanningSceneWorld_()
    : collision_objects()
    , octomap()  {
    }
  PlanningSceneWorld_(const ContainerAllocator& _alloc)
    : collision_objects(_alloc)
    , octomap(_alloc)  {
    }



   typedef std::vector< ::moveit_msgs::CollisionObject_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::moveit_msgs::CollisionObject_<ContainerAllocator> >::other >  _collision_objects_type;
  _collision_objects_type collision_objects;

   typedef  ::octomap_msgs::OctomapWithPose_<ContainerAllocator>  _octomap_type;
  _octomap_type octomap;




  typedef boost::shared_ptr< ::moveit_msgs::PlanningSceneWorld_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::PlanningSceneWorld_<ContainerAllocator> const> ConstPtr;

}; // struct PlanningSceneWorld_

typedef ::moveit_msgs::PlanningSceneWorld_<std::allocator<void> > PlanningSceneWorld;

typedef boost::shared_ptr< ::moveit_msgs::PlanningSceneWorld > PlanningSceneWorldPtr;
typedef boost::shared_ptr< ::moveit_msgs::PlanningSceneWorld const> PlanningSceneWorldConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::PlanningSceneWorld_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::PlanningSceneWorld_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace moveit_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/indigo/share/shape_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/tmp/buildd/ros-indigo-moveit-msgs-0.6.1-0trusty-20151111-0647/obj-x86_64-linux-gnu/devel/share/moveit_msgs/msg', '/tmp/buildd/ros-indigo-moveit-msgs-0.6.1-0trusty-20151111-0647/msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/indigo/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/indigo/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::PlanningSceneWorld_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::PlanningSceneWorld_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::PlanningSceneWorld_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::PlanningSceneWorld_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::PlanningSceneWorld_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::PlanningSceneWorld_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::PlanningSceneWorld_<ContainerAllocator> >
{
  static const char* value()
  {
    return "373d88390d1db385335639f687723ee6";
  }

  static const char* value(const ::moveit_msgs::PlanningSceneWorld_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x373d88390d1db385ULL;
  static const uint64_t static_value2 = 0x335639f687723ee6ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::PlanningSceneWorld_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/PlanningSceneWorld";
  }

  static const char* value(const ::moveit_msgs::PlanningSceneWorld_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::PlanningSceneWorld_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# collision objects\n\
CollisionObject[] collision_objects\n\
\n\
# The octomap that represents additional collision data\n\
octomap_msgs/OctomapWithPose octomap\n\
\n\
================================================================================\n\
MSG: moveit_msgs/CollisionObject\n\
# a header, used for interpreting the poses\n\
Header header\n\
\n\
# the id of the object (name used in MoveIt)\n\
string id\n\
\n\
# The object type in a database of known objects\n\
object_recognition_msgs/ObjectType type\n\
\n\
# the the collision geometries associated with the object;\n\
# their poses are with respect to the specified header\n\
\n\
# solid geometric primitives\n\
shape_msgs/SolidPrimitive[] primitives\n\
geometry_msgs/Pose[] primitive_poses\n\
\n\
# meshes\n\
shape_msgs/Mesh[] meshes\n\
geometry_msgs/Pose[] mesh_poses\n\
\n\
# bounding planes (equation is specified, but the plane can be oriented using an additional pose)\n\
shape_msgs/Plane[] planes\n\
geometry_msgs/Pose[] plane_poses\n\
\n\
# Adds the object to the planning scene. If the object previously existed, it is replaced.\n\
byte ADD=0\n\
\n\
# Removes the object from the environment entirely (everything that matches the specified id)\n\
byte REMOVE=1\n\
\n\
# Append to an object that already exists in the planning scene. If the does not exist, it is added.\n\
byte APPEND=2\n\
\n\
# If an object already exists in the scene, new poses can be sent (the geometry arrays must be left empty)\n\
# if solely moving the object is desired\n\
byte MOVE=3\n\
\n\
# Operation to be performed\n\
byte operation\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: object_recognition_msgs/ObjectType\n\
################################################## OBJECT ID #########################################################\n\
\n\
# Contains information about the type of a found object. Those two sets of parameters together uniquely define an\n\
# object\n\
\n\
# The key of the found object: the unique identifier in the given db\n\
string key\n\
\n\
# The db parameters stored as a JSON/compressed YAML string. An object id does not make sense without the corresponding\n\
# database. E.g., in object_recognition, it can look like: \"{'type':'CouchDB', 'root':'http://localhost'}\"\n\
# There is no conventional format for those parameters and it's nice to keep that flexibility.\n\
# The object_recognition_core as a generic DB type that can read those fields\n\
# Current examples:\n\
# For CouchDB:\n\
#   type: 'CouchDB'\n\
#   root: 'http://localhost:5984'\n\
#   collection: 'object_recognition'\n\
# For SQL household database:\n\
#   type: 'SqlHousehold'\n\
#   host: 'wgs36'\n\
#   port: 5432\n\
#   user: 'willow'\n\
#   password: 'willow'\n\
#   name: 'household_objects'\n\
#   module: 'tabletop'\n\
string db\n\
\n\
================================================================================\n\
MSG: shape_msgs/SolidPrimitive\n\
# Define box, sphere, cylinder, cone \n\
# All shapes are defined to have their bounding boxes centered around 0,0,0.\n\
\n\
uint8 BOX=1\n\
uint8 SPHERE=2\n\
uint8 CYLINDER=3\n\
uint8 CONE=4\n\
\n\
# The type of the shape\n\
uint8 type\n\
\n\
\n\
# The dimensions of the shape\n\
float64[] dimensions\n\
\n\
# The meaning of the shape dimensions: each constant defines the index in the 'dimensions' array\n\
\n\
# For the BOX type, the X, Y, and Z dimensions are the length of the corresponding\n\
# sides of the box.\n\
uint8 BOX_X=0\n\
uint8 BOX_Y=1\n\
uint8 BOX_Z=2\n\
\n\
\n\
# For the SPHERE type, only one component is used, and it gives the radius of\n\
# the sphere.\n\
uint8 SPHERE_RADIUS=0\n\
\n\
\n\
# For the CYLINDER and CONE types, the center line is oriented along\n\
# the Z axis.  Therefore the CYLINDER_HEIGHT (CONE_HEIGHT) component\n\
# of dimensions gives the height of the cylinder (cone).  The\n\
# CYLINDER_RADIUS (CONE_RADIUS) component of dimensions gives the\n\
# radius of the base of the cylinder (cone).  Cone and cylinder\n\
# primitives are defined to be circular. The tip of the cone is\n\
# pointing up, along +Z axis.\n\
\n\
uint8 CYLINDER_HEIGHT=0\n\
uint8 CYLINDER_RADIUS=1\n\
\n\
uint8 CONE_HEIGHT=0\n\
uint8 CONE_RADIUS=1\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: shape_msgs/Mesh\n\
# Definition of a mesh\n\
\n\
# list of triangles; the index values refer to positions in vertices[]\n\
MeshTriangle[] triangles\n\
\n\
# the actual vertices that make up the mesh\n\
geometry_msgs/Point[] vertices\n\
\n\
================================================================================\n\
MSG: shape_msgs/MeshTriangle\n\
# Definition of a triangle's vertices\n\
uint32[3] vertex_indices\n\
\n\
================================================================================\n\
MSG: shape_msgs/Plane\n\
# Representation of a plane, using the plane equation ax + by + cz + d = 0\n\
\n\
# a := coef[0]\n\
# b := coef[1]\n\
# c := coef[2]\n\
# d := coef[3]\n\
\n\
float64[4] coef\n\
\n\
================================================================================\n\
MSG: octomap_msgs/OctomapWithPose\n\
# A 3D map in binary format, as Octree\n\
Header header\n\
\n\
# The pose of the octree with respect to the header frame \n\
geometry_msgs/Pose origin\n\
\n\
# The actual octree msg\n\
octomap_msgs/Octomap octomap\n\
\n\
================================================================================\n\
MSG: octomap_msgs/Octomap\n\
# A 3D map in binary format, as Octree\n\
Header header\n\
\n\
# Flag to denote a binary (only free/occupied) or full occupancy octree (.bt/.ot file)\n\
bool binary\n\
\n\
# Class id of the contained octree \n\
string id\n\
\n\
# Resolution (in m) of the smallest octree nodes\n\
float64 resolution\n\
\n\
# binary serialization of octree, use conversions.h to read and write octrees\n\
int8[] data\n\
";
  }

  static const char* value(const ::moveit_msgs::PlanningSceneWorld_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::PlanningSceneWorld_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.collision_objects);
      stream.next(m.octomap);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct PlanningSceneWorld_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::PlanningSceneWorld_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::PlanningSceneWorld_<ContainerAllocator>& v)
  {
    s << indent << "collision_objects[]" << std::endl;
    for (size_t i = 0; i < v.collision_objects.size(); ++i)
    {
      s << indent << "  collision_objects[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::moveit_msgs::CollisionObject_<ContainerAllocator> >::stream(s, indent + "    ", v.collision_objects[i]);
    }
    s << indent << "octomap: ";
    s << std::endl;
    Printer< ::octomap_msgs::OctomapWithPose_<ContainerAllocator> >::stream(s, indent + "  ", v.octomap);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_PLANNINGSCENEWORLD_H
