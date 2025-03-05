// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/AlertParameter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_task_msgs/msg/alert_parameter.hpp"


#ifndef RMF_TASK_MSGS__MSG__DETAIL__ALERT_PARAMETER__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__ALERT_PARAMETER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/alert_parameter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_AlertParameter_value
{
public:
  explicit Init_AlertParameter_value(::rmf_task_msgs::msg::AlertParameter & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::AlertParameter value(::rmf_task_msgs::msg::AlertParameter::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::AlertParameter msg_;
};

class Init_AlertParameter_name
{
public:
  Init_AlertParameter_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlertParameter_value name(::rmf_task_msgs::msg::AlertParameter::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_AlertParameter_value(msg_);
  }

private:
  ::rmf_task_msgs::msg::AlertParameter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::AlertParameter>()
{
  return rmf_task_msgs::msg::builder::Init_AlertParameter_name();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__ALERT_PARAMETER__BUILDER_HPP_
