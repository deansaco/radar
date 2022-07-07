// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/ObjectExtended.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_EXTENDED__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_EXTENDED__TRAITS_HPP_

#include "radar_conti_ars408_msgs/msg/detail/object_extended__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'obj_arellong'
// Member 'obj_arellat'
// Member 'obj_orientationangle'
// Member 'obj_length'
// Member 'obj_width'
#include "std_msgs/msg/detail/float64__traits.hpp"
// Member 'obj_class'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::ObjectExtended>()
{
  return "radar_conti_ars408_msgs::msg::ObjectExtended";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::ObjectExtended>()
{
  return "radar_conti_ars408_msgs/msg/ObjectExtended";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::ObjectExtended>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::ObjectExtended>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::ObjectExtended>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_EXTENDED__TRAITS_HPP_
