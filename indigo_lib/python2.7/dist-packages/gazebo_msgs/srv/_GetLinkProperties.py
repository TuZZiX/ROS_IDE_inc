"""autogenerated by genpy from gazebo_msgs/GetLinkPropertiesRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class GetLinkPropertiesRequest(genpy.Message):
  _md5sum = "7d82d60381f1b66a30f2157f60884345"
  _type = "gazebo_msgs/GetLinkPropertiesRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """string link_name


"""
  __slots__ = ['link_name']
  _slot_types = ['string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       link_name

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetLinkPropertiesRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.link_name is None:
        self.link_name = ''
    else:
      self.link_name = ''

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.link_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.link_name = str[start:end].decode('utf-8')
      else:
        self.link_name = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.link_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.link_name = str[start:end].decode('utf-8')
      else:
        self.link_name = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
"""autogenerated by genpy from gazebo_msgs/GetLinkPropertiesResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class GetLinkPropertiesResponse(genpy.Message):
  _md5sum = "a8619f92d17cfcc3958c0fd13299443d"
  _type = "gazebo_msgs/GetLinkPropertiesResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """geometry_msgs/Pose com


bool gravity_mode
float64 mass
float64 ixx
float64 ixy
float64 ixz
float64 iyy
float64 iyz
float64 izz
bool success
string status_message


================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of postion and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

"""
  __slots__ = ['com','gravity_mode','mass','ixx','ixy','ixz','iyy','iyz','izz','success','status_message']
  _slot_types = ['geometry_msgs/Pose','bool','float64','float64','float64','float64','float64','float64','float64','bool','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       com,gravity_mode,mass,ixx,ixy,ixz,iyy,iyz,izz,success,status_message

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetLinkPropertiesResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.com is None:
        self.com = geometry_msgs.msg.Pose()
      if self.gravity_mode is None:
        self.gravity_mode = False
      if self.mass is None:
        self.mass = 0.
      if self.ixx is None:
        self.ixx = 0.
      if self.ixy is None:
        self.ixy = 0.
      if self.ixz is None:
        self.ixz = 0.
      if self.iyy is None:
        self.iyy = 0.
      if self.iyz is None:
        self.iyz = 0.
      if self.izz is None:
        self.izz = 0.
      if self.success is None:
        self.success = False
      if self.status_message is None:
        self.status_message = ''
    else:
      self.com = geometry_msgs.msg.Pose()
      self.gravity_mode = False
      self.mass = 0.
      self.ixx = 0.
      self.ixy = 0.
      self.ixz = 0.
      self.iyy = 0.
      self.iyz = 0.
      self.izz = 0.
      self.success = False
      self.status_message = ''

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_7dB7dB.pack(_x.com.position.x, _x.com.position.y, _x.com.position.z, _x.com.orientation.x, _x.com.orientation.y, _x.com.orientation.z, _x.com.orientation.w, _x.gravity_mode, _x.mass, _x.ixx, _x.ixy, _x.ixz, _x.iyy, _x.iyz, _x.izz, _x.success))
      _x = self.status_message
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.com is None:
        self.com = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 114
      (_x.com.position.x, _x.com.position.y, _x.com.position.z, _x.com.orientation.x, _x.com.orientation.y, _x.com.orientation.z, _x.com.orientation.w, _x.gravity_mode, _x.mass, _x.ixx, _x.ixy, _x.ixz, _x.iyy, _x.iyz, _x.izz, _x.success,) = _struct_7dB7dB.unpack(str[start:end])
      self.gravity_mode = bool(self.gravity_mode)
      self.success = bool(self.success)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.status_message = str[start:end].decode('utf-8')
      else:
        self.status_message = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_7dB7dB.pack(_x.com.position.x, _x.com.position.y, _x.com.position.z, _x.com.orientation.x, _x.com.orientation.y, _x.com.orientation.z, _x.com.orientation.w, _x.gravity_mode, _x.mass, _x.ixx, _x.ixy, _x.ixz, _x.iyy, _x.iyz, _x.izz, _x.success))
      _x = self.status_message
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.com is None:
        self.com = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 114
      (_x.com.position.x, _x.com.position.y, _x.com.position.z, _x.com.orientation.x, _x.com.orientation.y, _x.com.orientation.z, _x.com.orientation.w, _x.gravity_mode, _x.mass, _x.ixx, _x.ixy, _x.ixz, _x.iyy, _x.iyz, _x.izz, _x.success,) = _struct_7dB7dB.unpack(str[start:end])
      self.gravity_mode = bool(self.gravity_mode)
      self.success = bool(self.success)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.status_message = str[start:end].decode('utf-8')
      else:
        self.status_message = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_7dB7dB = struct.Struct("<7dB7dB")
class GetLinkProperties(object):
  _type          = 'gazebo_msgs/GetLinkProperties'
  _md5sum = '0e06a70386d0ee3fb880c02f23fcd821'
  _request_class  = GetLinkPropertiesRequest
  _response_class = GetLinkPropertiesResponse
