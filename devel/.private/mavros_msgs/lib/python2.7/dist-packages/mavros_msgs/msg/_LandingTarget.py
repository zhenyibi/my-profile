# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from mavros_msgs/LandingTarget.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class LandingTarget(genpy.Message):
  _md5sum = "76548ee08437914830bb7319d04d5490"
  _type = "mavros_msgs/LandingTarget"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# MAVLink message: LANDING_TARGET
# https://mavlink.io/en/messages/common.html

std_msgs/Header header

## MAV_FRAME enum
uint8 GLOBAL = 0                   # Global coordinate frame, WGS84 coordinate system. First value / x: latitude, second value / y: longitude, third value / z: positive altitude over mean sea level (MSL)
uint8 LOCAL_NED = 2                # Local coordinate frame, Z-up (x: north, y: east, z: down).
uint8 MISSION = 3                  # NOT a coordinate frame, indicates a mission command.
uint8 GLOBAL_RELATIVE_ALT = 4      # Global coordinate frame, WGS84 coordinate system, relative altitude over ground with respect to the home position. First value / x: latitude, second value / y: longitude, third value / z: positive altitude with 0 being at the altitude of the home location.
uint8 LOCAL_ENU = 5                # Local coordinate frame, Z-down (x: east, y: north, z: up)
uint8 GLOBAL_INT = 6               # Global coordinate frame, WGS84 coordinate system. First value / x: latitude in degrees*1.0e-7, second value / y: longitude in degrees*1.0e-7, third value / z: positive altitude over mean sea level (MSL)
uint8 GLOBAL_RELATIVE_ALT_INT = 7  # Global coordinate frame, WGS84 coordinate system, relative altitude over ground with respect to the home position. First value / x: latitude in degrees*10e-7, second value / y: longitude in degrees*10e-7, third value / z: positive altitude with 0 being at the altitude of the home location.
uint8 LOCAL_OFFSET_NED = 8         # Offset to the current local frame. Anything expressed in this frame should be added to the current local frame position.
uint8 BODY_NED = 9                 # Setpoint in body NED frame. This makes sense if all position control is externalized - e.g. useful to command 2 m/s^2 acceleration to the right.
uint8 BODY_OFFSET_NED = 10         # Offset in body NED frame. This makes sense if adding setpoints to the current flight path, to avoid an obstacle - e.g. useful to command 2 m/s^2 acceleration to the east.
uint8 GLOBAL_TERRAIN_ALT = 11      # Global coordinate frame with above terrain level altitude. WGS84 coordinate system, relative altitude over terrain with respect to the waypoint coordinate. First value / x: latitude in degrees, second value / y: longitude in degrees, third value / z: positive altitude in meters with 0 being at ground level in terrain model.
uint8 GLOBAL_TERRAIN_ALT_INT = 12  # Global coordinate frame with above terrain level altitude. WGS84 coordinate system, relative altitude over terrain with respect to the waypoint coordinate. First value / x: latitude in degrees*10e-7, second value / y: longitude in degrees*10e-7, third value / z: positive altitude in meters with 0 being at ground level in terrain model.

## LANDING_TARGET_TYPE enum
uint8 LIGHT_BEACON = 0             # Landing target signaled by light beacon (ex: IR-LOCK)
uint8 RADIO_BEACON = 1             # Landing target signaled by radio beacon (ex: ILS, NDB)
uint8 VISION_FIDUCIAL = 2          # Landing target represented by a fiducial marker (ex: ARTag)
uint8 VISION_OTHER = 3             # Landing target represented by a pre-defined visual shape/feature (ex: X-marker, H-marker, square)

uint8 target_num
uint8 frame
float32[2] angle
float32 distance
float32[2] size
geometry_msgs/Pose pose
uint8 type

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
# A representation of pose in free space, composed of position and orientation. 
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
  # Pseudo-constants
  GLOBAL = 0
  LOCAL_NED = 2
  MISSION = 3
  GLOBAL_RELATIVE_ALT = 4
  LOCAL_ENU = 5
  GLOBAL_INT = 6
  GLOBAL_RELATIVE_ALT_INT = 7
  LOCAL_OFFSET_NED = 8
  BODY_NED = 9
  BODY_OFFSET_NED = 10
  GLOBAL_TERRAIN_ALT = 11
  GLOBAL_TERRAIN_ALT_INT = 12
  LIGHT_BEACON = 0
  RADIO_BEACON = 1
  VISION_FIDUCIAL = 2
  VISION_OTHER = 3

  __slots__ = ['header','target_num','frame','angle','distance','size','pose','type']
  _slot_types = ['std_msgs/Header','uint8','uint8','float32[2]','float32','float32[2]','geometry_msgs/Pose','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,target_num,frame,angle,distance,size,pose,type

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(LandingTarget, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.target_num is None:
        self.target_num = 0
      if self.frame is None:
        self.frame = 0
      if self.angle is None:
        self.angle = [0.] * 2
      if self.distance is None:
        self.distance = 0.
      if self.size is None:
        self.size = [0.] * 2
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
      if self.type is None:
        self.type = 0
    else:
      self.header = std_msgs.msg.Header()
      self.target_num = 0
      self.frame = 0
      self.angle = [0.] * 2
      self.distance = 0.
      self.size = [0.] * 2
      self.pose = geometry_msgs.msg.Pose()
      self.type = 0

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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2B().pack(_x.target_num, _x.frame))
      buff.write(_get_struct_2f().pack(*self.angle))
      buff.write(_get_struct_f().pack(self.distance))
      buff.write(_get_struct_2f().pack(*self.size))
      _x = self
      buff.write(_get_struct_7dB().pack(_x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w, _x.type))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
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
      end += 2
      (_x.target_num, _x.frame,) = _get_struct_2B().unpack(str[start:end])
      start = end
      end += 8
      self.angle = _get_struct_2f().unpack(str[start:end])
      start = end
      end += 4
      (self.distance,) = _get_struct_f().unpack(str[start:end])
      start = end
      end += 8
      self.size = _get_struct_2f().unpack(str[start:end])
      _x = self
      start = end
      end += 57
      (_x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w, _x.type,) = _get_struct_7dB().unpack(str[start:end])
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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2B().pack(_x.target_num, _x.frame))
      buff.write(self.angle.tostring())
      buff.write(_get_struct_f().pack(self.distance))
      buff.write(self.size.tostring())
      _x = self
      buff.write(_get_struct_7dB().pack(_x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w, _x.type))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
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
      end += 2
      (_x.target_num, _x.frame,) = _get_struct_2B().unpack(str[start:end])
      start = end
      end += 8
      self.angle = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=2)
      start = end
      end += 4
      (self.distance,) = _get_struct_f().unpack(str[start:end])
      start = end
      end += 8
      self.size = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=2)
      _x = self
      start = end
      end += 57
      (_x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w, _x.type,) = _get_struct_7dB().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_7dB = None
def _get_struct_7dB():
    global _struct_7dB
    if _struct_7dB is None:
        _struct_7dB = struct.Struct("<7dB")
    return _struct_7dB
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_2f = None
def _get_struct_2f():
    global _struct_2f
    if _struct_2f is None:
        _struct_2f = struct.Struct("<2f")
    return _struct_2f
_struct_2B = None
def _get_struct_2B():
    global _struct_2B
    if _struct_2B is None:
        _struct_2B = struct.Struct("<2B")
    return _struct_2B
_struct_f = None
def _get_struct_f():
    global _struct_f
    if _struct_f is None:
        _struct_f = struct.Struct("<f")
    return _struct_f
