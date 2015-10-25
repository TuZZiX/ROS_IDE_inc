"""autogenerated by genpy from cwru_msgs/Path.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import cwru_msgs.msg
import geometry_msgs.msg
import std_msgs.msg

class Path(genpy.Message):
  _md5sum = "61997cac25b65fbf8f9034286f94085e"
  _type = "cwru_msgs/Path"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """#Standard header.
Header header

#List of path segments that should be executed
cwru_msgs/PathSegment[] segs

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

================================================================================
MSG: cwru_msgs/PathSegment
#Reference frame that the following coordinates should be interpreted relative to and timestamp to use when transforming
Header header

#Segment type enums
int8 LINE = 1
int8 ARC = 2
int8 SPIN_IN_PLACE = 3

#Segment type
int8 seg_type

#Segment number
uint32 seg_number

#Segment length
float64 seg_length

#Reference point
geometry_msgs/Point ref_point

#Initial tangent angle
geometry_msgs/Quaternion init_tan_angle

#Curvature
float64 curvature

#Speed limits for this segment
geometry_msgs/Twist max_speeds
geometry_msgs/Twist min_speeds

#Acceleration limit for this segment (m/s^2 for lines/arcs, rads/s^2 for spin-in-place)
float64 accel_limit

#Deceleration limit for this segment
float64 decel_limit

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

================================================================================
MSG: geometry_msgs/Twist
# This expresses velocity in free space broken into its linear and angular parts.
Vector3  linear
Vector3  angular

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 

float64 x
float64 y
float64 z
"""
  __slots__ = ['header','segs']
  _slot_types = ['std_msgs/Header','cwru_msgs/PathSegment[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,segs

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Path, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.segs is None:
        self.segs = []
    else:
      self.header = std_msgs.msg.Header()
      self.segs = []

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
      length = len(self.segs)
      buff.write(_struct_I.pack(length))
      for val1 in self.segs:
        _v1 = val1.header
        buff.write(_struct_I.pack(_v1.seq))
        _v2 = _v1.stamp
        _x = _v2
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
        _x = _v1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_struct_bId.pack(_x.seg_type, _x.seg_number, _x.seg_length))
        _v3 = val1.ref_point
        _x = _v3
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        _v4 = val1.init_tan_angle
        _x = _v4
        buff.write(_struct_4d.pack(_x.x, _x.y, _x.z, _x.w))
        buff.write(_struct_d.pack(val1.curvature))
        _v5 = val1.max_speeds
        _v6 = _v5.linear
        _x = _v6
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        _v7 = _v5.angular
        _x = _v7
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        _v8 = val1.min_speeds
        _v9 = _v8.linear
        _x = _v9
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        _v10 = _v8.angular
        _x = _v10
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        _x = val1
        buff.write(_struct_2d.pack(_x.accel_limit, _x.decel_limit))
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
      if self.segs is None:
        self.segs = None
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
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.segs = []
      for i in range(0, length):
        val1 = cwru_msgs.msg.PathSegment()
        _v11 = val1.header
        start = end
        end += 4
        (_v11.seq,) = _struct_I.unpack(str[start:end])
        _v12 = _v11.stamp
        _x = _v12
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v11.frame_id = str[start:end].decode('utf-8')
        else:
          _v11.frame_id = str[start:end]
        _x = val1
        start = end
        end += 13
        (_x.seg_type, _x.seg_number, _x.seg_length,) = _struct_bId.unpack(str[start:end])
        _v13 = val1.ref_point
        _x = _v13
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        _v14 = val1.init_tan_angle
        _x = _v14
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _struct_4d.unpack(str[start:end])
        start = end
        end += 8
        (val1.curvature,) = _struct_d.unpack(str[start:end])
        _v15 = val1.max_speeds
        _v16 = _v15.linear
        _x = _v16
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        _v17 = _v15.angular
        _x = _v17
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        _v18 = val1.min_speeds
        _v19 = _v18.linear
        _x = _v19
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        _v20 = _v18.angular
        _x = _v20
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        _x = val1
        start = end
        end += 16
        (_x.accel_limit, _x.decel_limit,) = _struct_2d.unpack(str[start:end])
        self.segs.append(val1)
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
      length = len(self.segs)
      buff.write(_struct_I.pack(length))
      for val1 in self.segs:
        _v21 = val1.header
        buff.write(_struct_I.pack(_v21.seq))
        _v22 = _v21.stamp
        _x = _v22
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
        _x = _v21.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_struct_bId.pack(_x.seg_type, _x.seg_number, _x.seg_length))
        _v23 = val1.ref_point
        _x = _v23
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        _v24 = val1.init_tan_angle
        _x = _v24
        buff.write(_struct_4d.pack(_x.x, _x.y, _x.z, _x.w))
        buff.write(_struct_d.pack(val1.curvature))
        _v25 = val1.max_speeds
        _v26 = _v25.linear
        _x = _v26
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        _v27 = _v25.angular
        _x = _v27
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        _v28 = val1.min_speeds
        _v29 = _v28.linear
        _x = _v29
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        _v30 = _v28.angular
        _x = _v30
        buff.write(_struct_3d.pack(_x.x, _x.y, _x.z))
        _x = val1
        buff.write(_struct_2d.pack(_x.accel_limit, _x.decel_limit))
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
      if self.segs is None:
        self.segs = None
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
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.segs = []
      for i in range(0, length):
        val1 = cwru_msgs.msg.PathSegment()
        _v31 = val1.header
        start = end
        end += 4
        (_v31.seq,) = _struct_I.unpack(str[start:end])
        _v32 = _v31.stamp
        _x = _v32
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v31.frame_id = str[start:end].decode('utf-8')
        else:
          _v31.frame_id = str[start:end]
        _x = val1
        start = end
        end += 13
        (_x.seg_type, _x.seg_number, _x.seg_length,) = _struct_bId.unpack(str[start:end])
        _v33 = val1.ref_point
        _x = _v33
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        _v34 = val1.init_tan_angle
        _x = _v34
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _struct_4d.unpack(str[start:end])
        start = end
        end += 8
        (val1.curvature,) = _struct_d.unpack(str[start:end])
        _v35 = val1.max_speeds
        _v36 = _v35.linear
        _x = _v36
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        _v37 = _v35.angular
        _x = _v37
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        _v38 = val1.min_speeds
        _v39 = _v38.linear
        _x = _v39
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        _v40 = _v38.angular
        _x = _v40
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _struct_3d.unpack(str[start:end])
        _x = val1
        start = end
        end += 16
        (_x.accel_limit, _x.decel_limit,) = _struct_2d.unpack(str[start:end])
        self.segs.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_d = struct.Struct("<d")
_struct_bId = struct.Struct("<bId")
_struct_2d = struct.Struct("<2d")
_struct_3I = struct.Struct("<3I")
_struct_4d = struct.Struct("<4d")
_struct_2I = struct.Struct("<2I")
_struct_3d = struct.Struct("<3d")