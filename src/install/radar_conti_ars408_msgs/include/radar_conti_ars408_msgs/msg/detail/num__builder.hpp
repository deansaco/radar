// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_conti_ars408_msgs:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__NUM__BUILDER_HPP_
#define RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__NUM__BUILDER_HPP_

#include "radar_conti_ars408_msgs/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace radar_conti_ars408_msgs
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::radar_conti_ars408_msgs::msg::Num num(::radar_conti_ars408_msgs::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_conti_ars408_msgs::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_conti_ars408_msgs::msg::Num>()
{
  return radar_conti_ars408_msgs::msg::builder::Init_Num_num();
}

}  // namespace radar_conti_ars408_msgs

#endif  // RADAR_CONTI_ARS408_MSGS__MSG__DETAIL__NUM__BUILDER_HPP_
