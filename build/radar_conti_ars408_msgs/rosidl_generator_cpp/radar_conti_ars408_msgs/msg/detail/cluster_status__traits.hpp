// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_conti_ars408_msgs:msg/ClusterStatus.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_STATUS__TRAITS_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_STATUS__TRAITS_HPP_

#include "radar_conti_ars408_msgs/msg/detail/cluster_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'cluster_nofclustersnear'
// Member 'cluster_nofclustersfar'
// Member 'cluster_meascounter'
// Member 'cluster_interfaceversion'
#include "std_msgs/msg/detail/int32__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<radar_conti_ars408_msgs::msg::ClusterStatus>()
{
  return "radar_conti_ars408_msgs::msg::ClusterStatus";
}

template<>
inline const char * name<radar_conti_ars408_msgs::msg::ClusterStatus>()
{
  return "radar_conti_ars408_msgs/msg/ClusterStatus";
}

template<>
struct has_fixed_size<radar_conti_ars408_msgs::msg::ClusterStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Int32>::value> {};

template<>
struct has_bounded_size<radar_conti_ars408_msgs::msg::ClusterStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Int32>::value> {};

template<>
struct is_message<radar_conti_ars408_msgs::msg::ClusterStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__CLUSTER_STATUS__TRAITS_HPP_
