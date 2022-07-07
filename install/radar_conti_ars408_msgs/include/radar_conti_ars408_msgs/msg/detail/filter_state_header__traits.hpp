// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/FilterStateHeader.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_STATE_HEADER__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_STATE_HEADER__TRAITS_HPP_

#include "radar_conti_ars408_msgs/msg/detail/filter_state_header__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'filterstate_nofclusterfiltercfg'
// Member 'filterstate_nofobjectfiltercfg'
#include "std_msgs/msg/detail/u_int8__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::FilterStateHeader>()
{
  return "radar_conti_ars408_msgs::msg::FilterStateHeader";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::FilterStateHeader>()
{
  return "radar_conti_ars408_msgs/msg/FilterStateHeader";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::FilterStateHeader>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<std_msgs::msg::UInt8>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::FilterStateHeader>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<std_msgs::msg::UInt8>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::FilterStateHeader>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__FILTER_STATE_HEADER__TRAITS_HPP_
