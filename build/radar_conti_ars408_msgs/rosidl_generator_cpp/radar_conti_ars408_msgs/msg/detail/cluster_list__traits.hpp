// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/ClusterList.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_LIST__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_LIST__TRAITS_HPP_

#include "radar_conti_ars408_msgs/msg/detail/cluster_list__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'cluster_count'
#include "std_msgs/msg/detail/int32__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::ClusterList>()
{
  return "radar_conti_ars408_msgs::msg::ClusterList";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::ClusterList>()
{
  return "radar_conti_ars408_msgs/msg/ClusterList";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::ClusterList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::ClusterList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::ClusterList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_LIST__TRAITS_HPP_
