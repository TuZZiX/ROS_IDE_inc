// Generated by gencpp from file example_ros_service/example_server_msg.msg
// DO NOT EDIT!


#ifndef EXAMPLE_ROS_SERVICE_MESSAGE_EXAMPLE_SERVER_MSG_H
#define EXAMPLE_ROS_SERVICE_MESSAGE_EXAMPLE_SERVER_MSG_H

#include <ros/service_traits.h>


#include <example_ros_service/example_server_msgRequest.h>
#include <example_ros_service/example_server_msgResponse.h>


namespace example_ros_service
{

struct example_server_msg
{

typedef example_server_msgRequest Request;
typedef example_server_msgResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct example_server_msg
} // namespace example_ros_service


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::example_ros_service::example_server_msg > {
  static const char* value()
  {
    return "f97a354dfffac1c8b57b631851a700a0";
  }

  static const char* value(const ::example_ros_service::example_server_msg&) { return value(); }
};

template<>
struct DataType< ::example_ros_service::example_server_msg > {
  static const char* value()
  {
    return "example_ros_service/example_server_msg";
  }

  static const char* value(const ::example_ros_service::example_server_msg&) { return value(); }
};


// service_traits::MD5Sum< ::example_ros_service::example_server_msgRequest> should match 
// service_traits::MD5Sum< ::example_ros_service::example_server_msg > 
template<>
struct MD5Sum< ::example_ros_service::example_server_msgRequest>
{
  static const char* value()
  {
    return MD5Sum< ::example_ros_service::example_server_msg >::value();
  }
  static const char* value(const ::example_ros_service::example_server_msgRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::example_ros_service::example_server_msgRequest> should match 
// service_traits::DataType< ::example_ros_service::example_server_msg > 
template<>
struct DataType< ::example_ros_service::example_server_msgRequest>
{
  static const char* value()
  {
    return DataType< ::example_ros_service::example_server_msg >::value();
  }
  static const char* value(const ::example_ros_service::example_server_msgRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::example_ros_service::example_server_msgResponse> should match 
// service_traits::MD5Sum< ::example_ros_service::example_server_msg > 
template<>
struct MD5Sum< ::example_ros_service::example_server_msgResponse>
{
  static const char* value()
  {
    return MD5Sum< ::example_ros_service::example_server_msg >::value();
  }
  static const char* value(const ::example_ros_service::example_server_msgResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::example_ros_service::example_server_msgResponse> should match 
// service_traits::DataType< ::example_ros_service::example_server_msg > 
template<>
struct DataType< ::example_ros_service::example_server_msgResponse>
{
  static const char* value()
  {
    return DataType< ::example_ros_service::example_server_msg >::value();
  }
  static const char* value(const ::example_ros_service::example_server_msgResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // EXAMPLE_ROS_SERVICE_MESSAGE_EXAMPLE_SERVER_MSG_H