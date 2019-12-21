// Generated by gencpp from file mavros_msgs/LogRequestDataRequest.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_LOGREQUESTDATAREQUEST_H
#define MAVROS_MSGS_MESSAGE_LOGREQUESTDATAREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros_msgs
{
template <class ContainerAllocator>
struct LogRequestDataRequest_
{
  typedef LogRequestDataRequest_<ContainerAllocator> Type;

  LogRequestDataRequest_()
    : id(0)
    , offset(0)
    , count(0)  {
    }
  LogRequestDataRequest_(const ContainerAllocator& _alloc)
    : id(0)
    , offset(0)
    , count(0)  {
  (void)_alloc;
    }



   typedef uint16_t _id_type;
  _id_type id;

   typedef uint32_t _offset_type;
  _offset_type offset;

   typedef uint32_t _count_type;
  _count_type count;





  typedef boost::shared_ptr< ::mavros_msgs::LogRequestDataRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::LogRequestDataRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LogRequestDataRequest_

typedef ::mavros_msgs::LogRequestDataRequest_<std::allocator<void> > LogRequestDataRequest;

typedef boost::shared_ptr< ::mavros_msgs::LogRequestDataRequest > LogRequestDataRequestPtr;
typedef boost::shared_ptr< ::mavros_msgs::LogRequestDataRequest const> LogRequestDataRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::LogRequestDataRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::LogRequestDataRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'mavros_msgs': ['/home/maybe/ros_ws/src/mavros/mavros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::LogRequestDataRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::LogRequestDataRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::LogRequestDataRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::LogRequestDataRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::LogRequestDataRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::LogRequestDataRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::LogRequestDataRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9bd5fb12d79dcd29b3f845d7dd682415";
  }

  static const char* value(const ::mavros_msgs::LogRequestDataRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9bd5fb12d79dcd29ULL;
  static const uint64_t static_value2 = 0xb3f845d7dd682415ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::LogRequestDataRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/LogRequestDataRequest";
  }

  static const char* value(const ::mavros_msgs::LogRequestDataRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::LogRequestDataRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
\n\
\n\
uint16 id\n\
uint32 offset\n\
uint32 count\n\
";
  }

  static const char* value(const ::mavros_msgs::LogRequestDataRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::LogRequestDataRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.offset);
      stream.next(m.count);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LogRequestDataRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::LogRequestDataRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::LogRequestDataRequest_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.id);
    s << indent << "offset: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.offset);
    s << indent << "count: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.count);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_LOGREQUESTDATAREQUEST_H
