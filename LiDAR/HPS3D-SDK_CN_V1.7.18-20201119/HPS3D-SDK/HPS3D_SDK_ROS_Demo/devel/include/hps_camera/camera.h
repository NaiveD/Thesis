// Generated by gencpp from file hps_camera/camera.msg
// DO NOT EDIT!


#ifndef HPS_CAMERA_MESSAGE_CAMERA_H
#define HPS_CAMERA_MESSAGE_CAMERA_H

#include <ros/service_traits.h>


#include <hps_camera/cameraRequest.h>
#include <hps_camera/cameraResponse.h>


namespace hps_camera
{

struct camera
{

typedef cameraRequest Request;
typedef cameraResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct camera
} // namespace hps_camera


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::hps_camera::camera > {
  static const char* value()
  {
    return "856731728679b0f365031a50c1aa4795";
  }

  static const char* value(const ::hps_camera::camera&) { return value(); }
};

template<>
struct DataType< ::hps_camera::camera > {
  static const char* value()
  {
    return "hps_camera/camera";
  }

  static const char* value(const ::hps_camera::camera&) { return value(); }
};


// service_traits::MD5Sum< ::hps_camera::cameraRequest> should match 
// service_traits::MD5Sum< ::hps_camera::camera > 
template<>
struct MD5Sum< ::hps_camera::cameraRequest>
{
  static const char* value()
  {
    return MD5Sum< ::hps_camera::camera >::value();
  }
  static const char* value(const ::hps_camera::cameraRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::hps_camera::cameraRequest> should match 
// service_traits::DataType< ::hps_camera::camera > 
template<>
struct DataType< ::hps_camera::cameraRequest>
{
  static const char* value()
  {
    return DataType< ::hps_camera::camera >::value();
  }
  static const char* value(const ::hps_camera::cameraRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::hps_camera::cameraResponse> should match 
// service_traits::MD5Sum< ::hps_camera::camera > 
template<>
struct MD5Sum< ::hps_camera::cameraResponse>
{
  static const char* value()
  {
    return MD5Sum< ::hps_camera::camera >::value();
  }
  static const char* value(const ::hps_camera::cameraResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::hps_camera::cameraResponse> should match 
// service_traits::DataType< ::hps_camera::camera > 
template<>
struct DataType< ::hps_camera::cameraResponse>
{
  static const char* value()
  {
    return DataType< ::hps_camera::camera >::value();
  }
  static const char* value(const ::hps_camera::cameraResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // HPS_CAMERA_MESSAGE_CAMERA_H
