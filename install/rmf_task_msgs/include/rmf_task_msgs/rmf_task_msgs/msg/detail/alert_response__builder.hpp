// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/AlertResponse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_task_msgs/msg/alert_response.hpp"


#ifndef RMF_TASK_MSGS__MSG__DETAIL__ALERT_RESPONSE__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__ALERT_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/alert_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_AlertResponse_response
{
public:
  explicit Init_AlertResponse_response(::rmf_task_msgs::msg::AlertResponse & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::AlertResponse response(::rmf_task_msgs::msg::AlertResponse::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::AlertResponse msg_;
};

class Init_AlertResponse_id
{
public:
  Init_AlertResponse_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlertResponse_response id(::rmf_task_msgs::msg::AlertResponse::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_AlertResponse_response(msg_);
  }

private:
  ::rmf_task_msgs::msg::AlertResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::AlertResponse>()
{
  return rmf_task_msgs::msg::builder::Init_AlertResponse_id();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__ALERT_RESPONSE__BUILDER_HPP_
