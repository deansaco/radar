// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/ObjectQuality.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_QUALITY__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_QUALITY__TRAITS_HPP_

#include "radar_conti_ars408_msgs/msg/detail/object_quality__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'obj_distlong_rms'
// Member 'obj_distlat_rms'
// Member 'obj_vrellong_rms'
// Member 'obj_vrellat_rms'
// Member 'obj_arellong_rms'
// Member 'obj_arellat_rms'
// Member 'obj_orientation_rms'
// Member 'obj_probofexist'
#include "std_msgs/msg/detail/float64__traits.hpp"
// Member 'obj_measstate'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::ObjectQuality>()
{
  return "radar_conti_ars408_msgs::msg::ObjectQuality";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::ObjectQuality>()
{
  return "radar_conti_ars408_msgs/msg/ObjectQuality";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::ObjectQuality>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::ObjectQuality>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::ObjectQuality>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__OBJECT_QUALITY__TRAITS_HPP_
