// Generated by gencpp from file crazyflie_driver/VelocityWorld.msg
// DO NOT EDIT!


#ifndef CRAZYFLIE_DRIVER_MESSAGE_VELOCITYWORLD_H
#define CRAZYFLIE_DRIVER_MESSAGE_VELOCITYWORLD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>

namespace crazyflie_driver
{
template <class ContainerAllocator>
struct VelocityWorld_
{
  typedef VelocityWorld_<ContainerAllocator> Type;

  VelocityWorld_()
    : header()
    , vel()
    , yawRate(0.0)  {
    }
  VelocityWorld_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , vel(_alloc)
    , yawRate(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _vel_type;
  _vel_type vel;

   typedef float _yawRate_type;
  _yawRate_type yawRate;





  typedef boost::shared_ptr< ::crazyflie_driver::VelocityWorld_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::crazyflie_driver::VelocityWorld_<ContainerAllocator> const> ConstPtr;

}; // struct VelocityWorld_

typedef ::crazyflie_driver::VelocityWorld_<std::allocator<void> > VelocityWorld;

typedef boost::shared_ptr< ::crazyflie_driver::VelocityWorld > VelocityWorldPtr;
typedef boost::shared_ptr< ::crazyflie_driver::VelocityWorld const> VelocityWorldConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::crazyflie_driver::VelocityWorld_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::crazyflie_driver::VelocityWorld_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace crazyflie_driver

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'crazyflie_driver': ['/home/ottelab/crazyswarm/ros_ws/src/crazyflie_ros/crazyflie_driver/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::crazyflie_driver::VelocityWorld_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::crazyflie_driver::VelocityWorld_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crazyflie_driver::VelocityWorld_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crazyflie_driver::VelocityWorld_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyflie_driver::VelocityWorld_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyflie_driver::VelocityWorld_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::crazyflie_driver::VelocityWorld_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5c7894b98f86c9f4dc7d7cb4971ec39d";
  }

  static const char* value(const ::crazyflie_driver::VelocityWorld_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5c7894b98f86c9f4ULL;
  static const uint64_t static_value2 = 0xdc7d7cb4971ec39dULL;
};

template<class ContainerAllocator>
struct DataType< ::crazyflie_driver::VelocityWorld_<ContainerAllocator> >
{
  static const char* value()
  {
    return "crazyflie_driver/VelocityWorld";
  }

  static const char* value(const ::crazyflie_driver::VelocityWorld_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::crazyflie_driver::VelocityWorld_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
geometry_msgs/Vector3 vel\n\
float32 yawRate\n\
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

  static const char* value(const ::crazyflie_driver::VelocityWorld_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::crazyflie_driver::VelocityWorld_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.vel);
      stream.next(m.yawRate);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VelocityWorld_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::crazyflie_driver::VelocityWorld_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::crazyflie_driver::VelocityWorld_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "vel: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.vel);
    s << indent << "yawRate: ";
    Printer<float>::stream(s, indent + "  ", v.yawRate);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRAZYFLIE_DRIVER_MESSAGE_VELOCITYWORLD_H
