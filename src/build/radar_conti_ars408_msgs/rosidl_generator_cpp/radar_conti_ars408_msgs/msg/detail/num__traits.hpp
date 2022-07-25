// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__NUM__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__NUM__TRAITS_HPP_

#include "radar_conti_ars408_msgs/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::Num>()
{
  return "radar_conti_ars408_msgs::msg::Num";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::Num>()
{
  return "radar_conti_ars408_msgs/msg/Num";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__NUM__TRAITS_HPP_
