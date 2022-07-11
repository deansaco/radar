// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/ObjectGeneral.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_GENERAL__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_GENERAL__TRAITS_HPP_

#include "radar_conti_ars408_msgs/msg/detail/object_general__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'obj_distlong'
// Member 'obj_distlat'
// Member 'obj_vrellong'
// Member 'obj_vrellat'
// Member 'obj_rcs'
#include "std_msgs/msg/detail/float64__traits.hpp"
// Member 'obj_dynprop'
#include "std_msgs/msg/detail/int32__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::ObjectGeneral>()
{
  return "radar_conti_ars408_msgs::msg::ObjectGeneral";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::ObjectGeneral>()
{
  return "radar_conti_ars408_msgs/msg/ObjectGeneral";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::ObjectGeneral>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value && has_fixed_size<std_msgs::msg::Int32>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::ObjectGeneral>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value && has_bounded_size<std_msgs::msg::Int32>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::ObjectGeneral>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_GENERAL__TRAITS_HPP_
