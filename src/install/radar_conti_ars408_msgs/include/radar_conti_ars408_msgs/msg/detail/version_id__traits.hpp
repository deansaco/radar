// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/VersionID.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__VERSION_ID__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__VERSION_ID__TRAITS_HPP_

#include "radar_conti_ars408_msgs/msg/detail/version_id__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'version_majorrelease'
// Member 'version_minorrelease'
// Member 'version_patchlevel'
#include "std_msgs/msg/detail/int32__traits.hpp"
// Member 'version_extendedrange'
// Member 'version_countrycode'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::VersionID>()
{
  return "radar_conti_ars408_msgs::msg::VersionID";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::VersionID>()
{
  return "radar_conti_ars408_msgs/msg/VersionID";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::VersionID>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<std_msgs::msg::Int32>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::VersionID>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<std_msgs::msg::Int32>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::VersionID>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__VERSION_ID__TRAITS_HPP_
