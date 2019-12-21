// Generated by gencpp from file mavros_msgs/GlobalPositionTarget.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_GLOBALPOSITIONTARGET_H
#define MAVROS_MSGS_MESSAGE_GLOBALPOSITIONTARGET_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct GlobalPositionTarget_
{
  typedef GlobalPositionTarget_<ContainerAllocator> Type;

  GlobalPositionTarget_()
    : header()
    , coordinate_frame(0)
    , type_mask(0)
    , latitude(0.0)
    , longitude(0.0)
    , altitude(0.0)
    , velocity()
    , acceleration_or_force()
    , yaw(0.0)
    , yaw_rate(0.0)  {
    }
  GlobalPositionTarget_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , coordinate_frame(0)
    , type_mask(0)
    , latitude(0.0)
    , longitude(0.0)
    , altitude(0.0)
    , velocity(_alloc)
    , acceleration_or_force(_alloc)
    , yaw(0.0)
    , yaw_rate(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _coordinate_frame_type;
  _coordinate_frame_type coordinate_frame;

   typedef uint16_t _type_mask_type;
  _type_mask_type type_mask;

   typedef double _latitude_type;
  _latitude_type latitude;

   typedef double _longitude_type;
  _longitude_type longitude;

   typedef float _altitude_type;
  _altitude_type altitude;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _velocity_type;
  _velocity_type velocity;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _acceleration_or_force_type;
  _acceleration_or_force_type acceleration_or_force;

   typedef float _yaw_type;
  _yaw_type yaw;

   typedef float _yaw_rate_type;
  _yaw_rate_type yaw_rate;



  enum {
    FRAME_GLOBAL_INT = 5u,
    FRAME_GLOBAL_REL_ALT = 6u,
    FRAME_GLOBAL_TERRAIN_ALT = 11u,
    IGNORE_LATITUDE = 1u,
    IGNORE_LONGITUDE = 2u,
    IGNORE_ALTITUDE = 4u,
    IGNORE_VX = 8u,
    IGNORE_VY = 16u,
    IGNORE_VZ = 32u,
    IGNORE_AFX = 64u,
    IGNORE_AFY = 128u,
    IGNORE_AFZ = 256u,
    FORCE = 512u,
    IGNORE_YAW = 1024u,
    IGNORE_YAW_RATE = 2048u,
  };


  typedef boost::shared_ptr< ::mavros_msgs::GlobalPositionTarget_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::GlobalPositionTarget_<ContainerAllocator> const> ConstPtr;

}; // struct GlobalPositionTarget_

typedef ::mavros_msgs::GlobalPositionTarget_<std::allocator<void> > GlobalPositionTarget;

typedef boost::shared_ptr< ::mavros_msgs::GlobalPositionTarget > GlobalPositionTargetPtr;
typedef boost::shared_ptr< ::mavros_msgs::GlobalPositionTarget const> GlobalPositionTargetConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::GlobalPositionTarget_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::GlobalPositionTarget_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'mavros_msgs': ['/home/maybe/ros_ws/src/mavros/mavros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::GlobalPositionTarget_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::GlobalPositionTarget_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::GlobalPositionTarget_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::GlobalPositionTarget_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::GlobalPositionTarget_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::GlobalPositionTarget_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::GlobalPositionTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "076ded0190b9e045f9c55264659ef102";
  }

  static const char* value(const ::mavros_msgs::GlobalPositionTarget_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x076ded0190b9e045ULL;
  static const uint64_t static_value2 = 0xf9c55264659ef102ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::GlobalPositionTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/GlobalPositionTarget";
  }

  static const char* value(const ::mavros_msgs::GlobalPositionTarget_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::GlobalPositionTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message for SET_POSITION_TARGET_GLOBAL_INT\n\
#\n\
# https://mavlink.io/en/messages/common.html#SET_POSITION_TARGET_GLOBAL_INT\n\
# Some complex system requires all feautures that mavlink\n\
# message provide. See issue #402, #415.\n\
\n\
std_msgs/Header header\n\
\n\
uint8 coordinate_frame\n\
uint8 FRAME_GLOBAL_INT = 5\n\
uint8 FRAME_GLOBAL_REL_ALT = 6\n\
uint8 FRAME_GLOBAL_TERRAIN_ALT = 11\n\
\n\
uint16 type_mask\n\
uint16 IGNORE_LATITUDE = 1	# Position ignore flags\n\
uint16 IGNORE_LONGITUDE = 2\n\
uint16 IGNORE_ALTITUDE = 4\n\
uint16 IGNORE_VX = 8	# Velocity vector ignore flags\n\
uint16 IGNORE_VY = 16\n\
uint16 IGNORE_VZ = 32\n\
uint16 IGNORE_AFX = 64	# Acceleration/Force vector ignore flags\n\
uint16 IGNORE_AFY = 128\n\
uint16 IGNORE_AFZ = 256\n\
uint16 FORCE = 512	# Force in af vector flag\n\
uint16 IGNORE_YAW = 1024\n\
uint16 IGNORE_YAW_RATE = 2048\n\
\n\
float64 latitude\n\
float64 longitude\n\
float32 altitude	# in meters, AMSL or above terrain\n\
geometry_msgs/Vector3 velocity\n\
geometry_msgs/Vector3 acceleration_or_force\n\
float32 yaw\n\
float32 yaw_rate\n\
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
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::mavros_msgs::GlobalPositionTarget_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::GlobalPositionTarget_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.coordinate_frame);
      stream.next(m.type_mask);
      stream.next(m.latitude);
      stream.next(m.longitude);
      stream.next(m.altitude);
      stream.next(m.velocity);
      stream.next(m.acceleration_or_force);
      stream.next(m.yaw);
      stream.next(m.yaw_rate);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GlobalPositionTarget_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::GlobalPositionTarget_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::GlobalPositionTarget_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "coordinate_frame: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.coordinate_frame);
    s << indent << "type_mask: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.type_mask);
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "altitude: ";
    Printer<float>::stream(s, indent + "  ", v.altitude);
    s << indent << "velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
    s << indent << "acceleration_or_force: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.acceleration_or_force);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "yaw_rate: ";
    Printer<float>::stream(s, indent + "  ", v.yaw_rate);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_GLOBALPOSITIONTARGET_H
