"""autogenerated by genpy from cwru_msgs/cRIOSensors.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class cRIOSensors(genpy.Message):
  _md5sum = "210acf44f8ca85255cab84f619fb4f26"
  _type = "cwru_msgs/cRIOSensors"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header
int32 left_wheel_encoder
int32 right_wheel_encoder
int32 left_motor_encoder
int32 right_motor_encoder

int16 yaw_rate
int16 yaw_temp
int16 yaw_ref

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

"""
  __slots__ = ['header','left_wheel_encoder','right_wheel_encoder','left_motor_encoder','right_motor_encoder','yaw_rate','yaw_temp','yaw_ref']
  _slot_types = ['std_msgs/Header','int32','int32','int32','int32','int16','int16','int16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,left_wheel_encoder,right_wheel_encoder,left_motor_encoder,right_motor_encoder,yaw_rate,yaw_temp,yaw_ref

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(cRIOSensors, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.left_wheel_encoder is None:
        self.left_wheel_encoder = 0
      if self.right_wheel_encoder is None:
        self.right_wheel_encoder = 0
      if self.left_motor_encoder is None:
        self.left_motor_encoder = 0
      if self.right_motor_encoder is None:
        self.right_motor_encoder = 0
      if self.yaw_rate is None:
        self.yaw_rate = 0
      if self.yaw_temp is None:
        self.yaw_temp = 0
      if self.yaw_ref is None:
        self.yaw_ref = 0
    else:
      self.header = std_msgs.msg.Header()
      self.left_wheel_encoder = 0
      self.right_wheel_encoder = 0
      self.left_motor_encoder = 0
      self.right_motor_encoder = 0
      self.yaw_rate = 0
      self.yaw_temp = 0
      self.yaw_ref = 0

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
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_4i3h.pack(_x.left_wheel_encoder, _x.right_wheel_encoder, _x.left_motor_encoder, _x.right_motor_encoder, _x.yaw_rate, _x.yaw_temp, _x.yaw_ref))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 22
      (_x.left_wheel_encoder, _x.right_wheel_encoder, _x.left_motor_encoder, _x.right_motor_encoder, _x.yaw_rate, _x.yaw_temp, _x.yaw_ref,) = _struct_4i3h.unpack(str[start:end])
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
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_4i3h.pack(_x.left_wheel_encoder, _x.right_wheel_encoder, _x.left_motor_encoder, _x.right_motor_encoder, _x.yaw_rate, _x.yaw_temp, _x.yaw_ref))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 22
      (_x.left_wheel_encoder, _x.right_wheel_encoder, _x.left_motor_encoder, _x.right_motor_encoder, _x.yaw_rate, _x.yaw_temp, _x.yaw_ref,) = _struct_4i3h.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_4i3h = struct.Struct("<4i3h")
_struct_3I = struct.Struct("<3I")
