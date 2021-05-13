// Generated by gencpp from file hps_camera/cameraRequest.msg
// DO NOT EDIT!


#ifndef HPS_CAMERA_MESSAGE_CAMERAREQUEST_H
#define HPS_CAMERA_MESSAGE_CAMERAREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hps_camera
{
template <class ContainerAllocator>
struct cameraRequest_
{
  typedef cameraRequest_<ContainerAllocator> Type;

  cameraRequest_()
    : client_node_name()  {
    }
  cameraRequest_(const ContainerAllocator& _alloc)
    : client_node_name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _client_node_name_type;
  _client_node_name_type client_node_name;





  typedef boost::shared_ptr< ::hps_camera::cameraRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hps_camera::cameraRequest_<ContainerAllocator> const> ConstPtr;

}; // struct cameraRequest_

typedef ::hps_camera::cameraRequest_<std::allocator<void> > cameraRequest;

typedef boost::shared_ptr< ::hps_camera::cameraRequest > cameraRequestPtr;
typedef boost::shared_ptr< ::hps_camera::cameraRequest const> cameraRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hps_camera::cameraRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hps_camera::cameraRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hps_camera

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'hps_camera': ['/mnt/hgfs/UbuntuShare/HPS3D_SDK_ROS_DEMO/src/hps_camera/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hps_camera::cameraRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hps_camera::cameraRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hps_camera::cameraRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hps_camera::cameraRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hps_camera::cameraRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hps_camera::cameraRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hps_camera::cameraRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5fdb91215c50cf236532756057951fad";
  }

  static const char* value(const ::hps_camera::cameraRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5fdb91215c50cf23ULL;
  static const uint64_t static_value2 = 0x6532756057951fadULL;
};

template<class ContainerAllocator>
struct DataType< ::hps_camera::cameraRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hps_camera/cameraRequest";
  }

  static const char* value(const ::hps_camera::cameraRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hps_camera::cameraRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string client_node_name\n\
";
  }

  static const char* value(const ::hps_camera::cameraRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hps_camera::cameraRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.client_node_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cameraRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hps_camera::cameraRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hps_camera::cameraRequest_<ContainerAllocator>& v)
  {
    s << indent << "client_node_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.client_node_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HPS_CAMERA_MESSAGE_CAMERAREQUEST_H
