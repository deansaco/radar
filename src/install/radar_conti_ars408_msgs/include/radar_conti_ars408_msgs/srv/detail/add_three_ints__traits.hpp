// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_

#include "radar_conti_ars408_msgs/srv/detail/add_three_ints__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<radar_conti_ars408_msgs::srv::AddThreeInts_Request>()
{
  return "radar_conti_ars408_msgs::srv::AddThreeInts_Request";
}

template<>
inline const char * name<radar_conti_ars408_msgs::srv::AddThreeInts_Request>()
{
  return "radar_conti_ars408_msgs/srv/AddThreeInts_Request";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::srv::AddThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::srv::AddThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<radar_conti_ars408_msgs::srv::AddThreeInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<radar_conti_ars408_msgs::srv::AddThreeInts_Response>()
{
  return "radar_conti_ars408_msgs::srv::AddThreeInts_Response";
}

template<>
inline const char * name<radar_conti_ars408_msgs::srv::AddThreeInts_Response>()
{
  return "radar_conti_ars408_msgs/srv/AddThreeInts_Response";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::srv::AddThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::srv::AddThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<radar_conti_ars408_msgs::srv::AddThreeInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<radar_conti_ars408_msgs::srv::AddThreeInts>()
{
  return "radar_conti_ars408_msgs::srv::AddThreeInts";
}

template<>
inline const char * name<radar_conti_ars408_msgs::srv::AddThreeInts>()
{
  return "radar_conti_ars408_msgs/srv/AddThreeInts";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::srv::AddThreeInts>
  : std::integral_constant<
    bool,
    has_fixed_size<radar_conti_ars408_msgs::srv::AddThreeInts_Request>::value &&
    has_fixed_size<radar_conti_ars408_msgs::srv::AddThreeInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::srv::AddThreeInts>
  : std::integral_constant<
    bool,
    has_bounded_size<radar_conti_ars408_msgs::srv::AddThreeInts_Request>::value &&
    has_bounded_size<radar_conti_ars408_msgs::srv::AddThreeInts_Response>::value
  >
{
};

template<>
struct is_service<radar_conti_ars408_msgs::srv::AddThreeInts>
  : std::true_type
{
};

template<>
struct is_service_request<radar_conti_ars408_msgs::srv::AddThreeInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<radar_conti_ars408_msgs::srv::AddThreeInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_
