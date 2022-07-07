// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_

#include "radar_conti_ars408_msgs/msg/detail/object__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'obj_id'
#include "std_msgs/msg/detail/int32__traits.hpp"
// Member 'object_general'
#include "radar_conti_ars408_msgs/msg/detail/object_general__traits.hpp"
// Member 'object_extended'
#include "radar_conti_ars408_msgs/msg/detail/object_extended__traits.hpp"
// Member 'object_quality'
#include "radar_conti_ars408_msgs/msg/detail/object_quality__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::Object>()
{
  return "radar_conti_ars408_msgs::msg::Object";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::Object>()
{
  return "radar_conti_ars408_msgs/msg/Object";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::Object>
  : std::integral_constant<bool, has_fixed_size<radar_conti_ars408_msgs::msg::ObjectExtended>::value && has_fixed_size<radar_conti_ars408_msgs::msg::ObjectGeneral>::value && has_fixed_size<radar_conti_ars408_msgs::msg::ObjectQuality>::value && has_fixed_size<std_msgs::msg::Int32>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::Object>
  : std::integral_constant<bool, has_bounded_size<radar_conti_ars408_msgs::msg::ObjectExtended>::value && has_bounded_size<radar_conti_ars408_msgs::msg::ObjectGeneral>::value && has_bounded_size<radar_conti_ars408_msgs::msg::ObjectQuality>::value && has_bounded_size<std_msgs::msg::Int32>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::Object>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
