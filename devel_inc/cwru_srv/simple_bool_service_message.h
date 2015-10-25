// Generated by gencpp from file cwru_srv/simple_bool_service_message.msg
// DO NOT EDIT!


#ifndef CWRU_SRV_MESSAGE_SIMPLE_BOOL_SERVICE_MESSAGE_H
#define CWRU_SRV_MESSAGE_SIMPLE_BOOL_SERVICE_MESSAGE_H

#include <ros/service_traits.h>


#include <cwru_srv/simple_bool_service_messageRequest.h>
#include <cwru_srv/simple_bool_service_messageResponse.h>


namespace cwru_srv
{

struct simple_bool_service_message
{

typedef simple_bool_service_messageRequest Request;
typedef simple_bool_service_messageResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simple_bool_service_message
} // namespace cwru_srv


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::cwru_srv::simple_bool_service_message > {
  static const char* value()
  {
    return "c42a7ecd5bbbf1290f8a630b218058f2";
  }

  static const char* value(const ::cwru_srv::simple_bool_service_message&) { return value(); }
};

template<>
struct DataType< ::cwru_srv::simple_bool_service_message > {
  static const char* value()
  {
    return "cwru_srv/simple_bool_service_message";
  }

  static const char* value(const ::cwru_srv::simple_bool_service_message&) { return value(); }
};


// service_traits::MD5Sum< ::cwru_srv::simple_bool_service_messageRequest> should match 
// service_traits::MD5Sum< ::cwru_srv::simple_bool_service_message > 
template<>
struct MD5Sum< ::cwru_srv::simple_bool_service_messageRequest>
{
  static const char* value()
  {
    return MD5Sum< ::cwru_srv::simple_bool_service_message >::value();
  }
  static const char* value(const ::cwru_srv::simple_bool_service_messageRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::cwru_srv::simple_bool_service_messageRequest> should match 
// service_traits::DataType< ::cwru_srv::simple_bool_service_message > 
template<>
struct DataType< ::cwru_srv::simple_bool_service_messageRequest>
{
  static const char* value()
  {
    return DataType< ::cwru_srv::simple_bool_service_message >::value();
  }
  static const char* value(const ::cwru_srv::simple_bool_service_messageRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::cwru_srv::simple_bool_service_messageResponse> should match 
// service_traits::MD5Sum< ::cwru_srv::simple_bool_service_message > 
template<>
struct MD5Sum< ::cwru_srv::simple_bool_service_messageResponse>
{
  static const char* value()
  {
    return MD5Sum< ::cwru_srv::simple_bool_service_message >::value();
  }
  static const char* value(const ::cwru_srv::simple_bool_service_messageResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::cwru_srv::simple_bool_service_messageResponse> should match 
// service_traits::DataType< ::cwru_srv::simple_bool_service_message > 
template<>
struct DataType< ::cwru_srv::simple_bool_service_messageResponse>
{
  static const char* value()
  {
    return DataType< ::cwru_srv::simple_bool_service_message >::value();
  }
  static const char* value(const ::cwru_srv::simple_bool_service_messageResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CWRU_SRV_MESSAGE_SIMPLE_BOOL_SERVICE_MESSAGE_H