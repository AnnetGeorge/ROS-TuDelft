// Generated by gencpp from file hrwros_gazebo/ConveyorBeltControlResponse.msg
// DO NOT EDIT!


#ifndef HRWROS_GAZEBO_MESSAGE_CONVEYORBELTCONTROLRESPONSE_H
#define HRWROS_GAZEBO_MESSAGE_CONVEYORBELTCONTROLRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hrwros_gazebo
{
template <class ContainerAllocator>
struct ConveyorBeltControlResponse_
{
  typedef ConveyorBeltControlResponse_<ContainerAllocator> Type;

  ConveyorBeltControlResponse_()
    : success(false)  {
    }
  ConveyorBeltControlResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::hrwros_gazebo::ConveyorBeltControlResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrwros_gazebo::ConveyorBeltControlResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ConveyorBeltControlResponse_

typedef ::hrwros_gazebo::ConveyorBeltControlResponse_<std::allocator<void> > ConveyorBeltControlResponse;

typedef boost::shared_ptr< ::hrwros_gazebo::ConveyorBeltControlResponse > ConveyorBeltControlResponsePtr;
typedef boost::shared_ptr< ::hrwros_gazebo::ConveyorBeltControlResponse const> ConveyorBeltControlResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hrwros_gazebo::ConveyorBeltControlResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hrwros_gazebo::ConveyorBeltControlResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hrwros_gazebo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'hrwros_gazebo': ['/home/annet/ros/hrwros_ws/src/hrwros_gazebo/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_gazebo::ConveyorBeltControlResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_gazebo::ConveyorBeltControlResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_gazebo::ConveyorBeltControlResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_gazebo::ConveyorBeltControlResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_gazebo::ConveyorBeltControlResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_gazebo::ConveyorBeltControlResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hrwros_gazebo::ConveyorBeltControlResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::hrwros_gazebo::ConveyorBeltControlResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::hrwros_gazebo::ConveyorBeltControlResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hrwros_gazebo/ConveyorBeltControlResponse";
  }

  static const char* value(const ::hrwros_gazebo::ConveyorBeltControlResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hrwros_gazebo::ConveyorBeltControlResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"\n"
;
  }

  static const char* value(const ::hrwros_gazebo::ConveyorBeltControlResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hrwros_gazebo::ConveyorBeltControlResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConveyorBeltControlResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hrwros_gazebo::ConveyorBeltControlResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hrwros_gazebo::ConveyorBeltControlResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HRWROS_GAZEBO_MESSAGE_CONVEYORBELTCONTROLRESPONSE_H
