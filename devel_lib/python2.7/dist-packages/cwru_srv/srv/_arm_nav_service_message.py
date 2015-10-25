"""autogenerated by genpy from cwru_srv/arm_nav_service_messageRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class arm_nav_service_messageRequest(genpy.Message):
  _md5sum = "68f001930aa82828f0f67063bbe44011"
  _type = "cwru_srv/arm_nav_service_messageRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
int32 cmd_mode


float32[] q_vec_start
float32[] q_vec_end



geometry_msgs/PoseStamped poseStamped_start
geometry_msgs/PoseStamped poseStamped_goal



int32 plan_id


float32[] delta_p


================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

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
  __slots__ = ['cmd_mode','q_vec_start','q_vec_end','poseStamped_start','poseStamped_goal','plan_id','delta_p']
  _slot_types = ['int32','float32[]','float32[]','geometry_msgs/PoseStamped','geometry_msgs/PoseStamped','int32','float32[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       cmd_mode,q_vec_start,q_vec_end,poseStamped_start,poseStamped_goal,plan_id,delta_p

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(arm_nav_service_messageRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.cmd_mode is None:
        self.cmd_mode = 0
      if self.q_vec_start is None:
        self.q_vec_start = []
      if self.q_vec_end is None:
        self.q_vec_end = []
      if self.poseStamped_start is None:
        self.poseStamped_start = geometry_msgs.msg.PoseStamped()
      if self.poseStamped_goal is None:
        self.poseStamped_goal = geometry_msgs.msg.PoseStamped()
      if self.plan_id is None:
        self.plan_id = 0
      if self.delta_p is None:
        self.delta_p = []
    else:
      self.cmd_mode = 0
      self.q_vec_start = []
      self.q_vec_end = []
      self.poseStamped_start = geometry_msgs.msg.PoseStamped()
      self.poseStamped_goal = geometry_msgs.msg.PoseStamped()
      self.plan_id = 0
      self.delta_p = []

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
      buff.write(_struct_i.pack(self.cmd_mode))
      length = len(self.q_vec_start)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.pack(pattern, *self.q_vec_start))
      length = len(self.q_vec_end)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.pack(pattern, *self.q_vec_end))
      _x = self
      buff.write(_struct_3I.pack(_x.poseStamped_start.header.seq, _x.poseStamped_start.header.stamp.secs, _x.poseStamped_start.header.stamp.nsecs))
      _x = self.poseStamped_start.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_7d3I.pack(_x.poseStamped_start.pose.position.x, _x.poseStamped_start.pose.position.y, _x.poseStamped_start.pose.position.z, _x.poseStamped_start.pose.orientation.x, _x.poseStamped_start.pose.orientation.y, _x.poseStamped_start.pose.orientation.z, _x.poseStamped_start.pose.orientation.w, _x.poseStamped_goal.header.seq, _x.poseStamped_goal.header.stamp.secs, _x.poseStamped_goal.header.stamp.nsecs))
      _x = self.poseStamped_goal.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_7di.pack(_x.poseStamped_goal.pose.position.x, _x.poseStamped_goal.pose.position.y, _x.poseStamped_goal.pose.position.z, _x.poseStamped_goal.pose.orientation.x, _x.poseStamped_goal.pose.orientation.y, _x.poseStamped_goal.pose.orientation.z, _x.poseStamped_goal.pose.orientation.w, _x.plan_id))
      length = len(self.delta_p)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.pack(pattern, *self.delta_p))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.poseStamped_start is None:
        self.poseStamped_start = geometry_msgs.msg.PoseStamped()
      if self.poseStamped_goal is None:
        self.poseStamped_goal = geometry_msgs.msg.PoseStamped()
      end = 0
      start = end
      end += 4
      (self.cmd_mode,) = _struct_i.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.q_vec_start = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.q_vec_end = struct.unpack(pattern, str[start:end])
      _x = self
      start = end
      end += 12
      (_x.poseStamped_start.header.seq, _x.poseStamped_start.header.stamp.secs, _x.poseStamped_start.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.poseStamped_start.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.poseStamped_start.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 68
      (_x.poseStamped_start.pose.position.x, _x.poseStamped_start.pose.position.y, _x.poseStamped_start.pose.position.z, _x.poseStamped_start.pose.orientation.x, _x.poseStamped_start.pose.orientation.y, _x.poseStamped_start.pose.orientation.z, _x.poseStamped_start.pose.orientation.w, _x.poseStamped_goal.header.seq, _x.poseStamped_goal.header.stamp.secs, _x.poseStamped_goal.header.stamp.nsecs,) = _struct_7d3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.poseStamped_goal.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.poseStamped_goal.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 60
      (_x.poseStamped_goal.pose.position.x, _x.poseStamped_goal.pose.position.y, _x.poseStamped_goal.pose.position.z, _x.poseStamped_goal.pose.orientation.x, _x.poseStamped_goal.pose.orientation.y, _x.poseStamped_goal.pose.orientation.z, _x.poseStamped_goal.pose.orientation.w, _x.plan_id,) = _struct_7di.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.delta_p = struct.unpack(pattern, str[start:end])
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
      buff.write(_struct_i.pack(self.cmd_mode))
      length = len(self.q_vec_start)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.q_vec_start.tostring())
      length = len(self.q_vec_end)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.q_vec_end.tostring())
      _x = self
      buff.write(_struct_3I.pack(_x.poseStamped_start.header.seq, _x.poseStamped_start.header.stamp.secs, _x.poseStamped_start.header.stamp.nsecs))
      _x = self.poseStamped_start.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_7d3I.pack(_x.poseStamped_start.pose.position.x, _x.poseStamped_start.pose.position.y, _x.poseStamped_start.pose.position.z, _x.poseStamped_start.pose.orientation.x, _x.poseStamped_start.pose.orientation.y, _x.poseStamped_start.pose.orientation.z, _x.poseStamped_start.pose.orientation.w, _x.poseStamped_goal.header.seq, _x.poseStamped_goal.header.stamp.secs, _x.poseStamped_goal.header.stamp.nsecs))
      _x = self.poseStamped_goal.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_7di.pack(_x.poseStamped_goal.pose.position.x, _x.poseStamped_goal.pose.position.y, _x.poseStamped_goal.pose.position.z, _x.poseStamped_goal.pose.orientation.x, _x.poseStamped_goal.pose.orientation.y, _x.poseStamped_goal.pose.orientation.z, _x.poseStamped_goal.pose.orientation.w, _x.plan_id))
      length = len(self.delta_p)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.delta_p.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.poseStamped_start is None:
        self.poseStamped_start = geometry_msgs.msg.PoseStamped()
      if self.poseStamped_goal is None:
        self.poseStamped_goal = geometry_msgs.msg.PoseStamped()
      end = 0
      start = end
      end += 4
      (self.cmd_mode,) = _struct_i.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.q_vec_start = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.q_vec_end = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      _x = self
      start = end
      end += 12
      (_x.poseStamped_start.header.seq, _x.poseStamped_start.header.stamp.secs, _x.poseStamped_start.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.poseStamped_start.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.poseStamped_start.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 68
      (_x.poseStamped_start.pose.position.x, _x.poseStamped_start.pose.position.y, _x.poseStamped_start.pose.position.z, _x.poseStamped_start.pose.orientation.x, _x.poseStamped_start.pose.orientation.y, _x.poseStamped_start.pose.orientation.z, _x.poseStamped_start.pose.orientation.w, _x.poseStamped_goal.header.seq, _x.poseStamped_goal.header.stamp.secs, _x.poseStamped_goal.header.stamp.nsecs,) = _struct_7d3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.poseStamped_goal.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.poseStamped_goal.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 60
      (_x.poseStamped_goal.pose.position.x, _x.poseStamped_goal.pose.position.y, _x.poseStamped_goal.pose.position.z, _x.poseStamped_goal.pose.orientation.x, _x.poseStamped_goal.pose.orientation.y, _x.poseStamped_goal.pose.orientation.z, _x.poseStamped_goal.pose.orientation.w, _x.plan_id,) = _struct_7di.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.delta_p = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_i = struct.Struct("<i")
_struct_7di = struct.Struct("<7di")
_struct_3I = struct.Struct("<3I")
_struct_7d3I = struct.Struct("<7d3I")
"""autogenerated by genpy from cwru_srv/arm_nav_service_messageResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class arm_nav_service_messageResponse(genpy.Message):
  _md5sum = "7be7d6760d514db19683d49354227da6"
  _type = "cwru_srv/arm_nav_service_messageResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
bool bool_resp


int32 rtn_code



int32 plan_id


float32[] q_vec_start
float32[] q_vec_end


"""
  __slots__ = ['bool_resp','rtn_code','plan_id','q_vec_start','q_vec_end']
  _slot_types = ['bool','int32','int32','float32[]','float32[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       bool_resp,rtn_code,plan_id,q_vec_start,q_vec_end

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(arm_nav_service_messageResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.bool_resp is None:
        self.bool_resp = False
      if self.rtn_code is None:
        self.rtn_code = 0
      if self.plan_id is None:
        self.plan_id = 0
      if self.q_vec_start is None:
        self.q_vec_start = []
      if self.q_vec_end is None:
        self.q_vec_end = []
    else:
      self.bool_resp = False
      self.rtn_code = 0
      self.plan_id = 0
      self.q_vec_start = []
      self.q_vec_end = []

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
      buff.write(_struct_B2i.pack(_x.bool_resp, _x.rtn_code, _x.plan_id))
      length = len(self.q_vec_start)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.pack(pattern, *self.q_vec_start))
      length = len(self.q_vec_end)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.pack(pattern, *self.q_vec_end))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 9
      (_x.bool_resp, _x.rtn_code, _x.plan_id,) = _struct_B2i.unpack(str[start:end])
      self.bool_resp = bool(self.bool_resp)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.q_vec_start = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.q_vec_end = struct.unpack(pattern, str[start:end])
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
      buff.write(_struct_B2i.pack(_x.bool_resp, _x.rtn_code, _x.plan_id))
      length = len(self.q_vec_start)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.q_vec_start.tostring())
      length = len(self.q_vec_end)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.q_vec_end.tostring())
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
      _x = self
      start = end
      end += 9
      (_x.bool_resp, _x.rtn_code, _x.plan_id,) = _struct_B2i.unpack(str[start:end])
      self.bool_resp = bool(self.bool_resp)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.q_vec_start = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.q_vec_end = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_B2i = struct.Struct("<B2i")
class arm_nav_service_message(object):
  _type          = 'cwru_srv/arm_nav_service_message'
  _md5sum = '3416a565a18c200ab6e309f562189f67'
  _request_class  = arm_nav_service_messageRequest
  _response_class = arm_nav_service_messageResponse
