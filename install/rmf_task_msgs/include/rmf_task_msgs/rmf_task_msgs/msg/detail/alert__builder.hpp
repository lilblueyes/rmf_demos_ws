// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/Alert.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_task_msgs/msg/alert.hpp"


#ifndef RMF_TASK_MSGS__MSG__DETAIL__ALERT__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__ALERT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/alert__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_Alert_task_id
{
public:
  explicit Init_Alert_task_id(::rmf_task_msgs::msg::Alert & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::Alert task_id(::rmf_task_msgs::msg::Alert::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::Alert msg_;
};

class Init_Alert_alert_parameters
{
public:
  explicit Init_Alert_alert_parameters(::rmf_task_msgs::msg::Alert & msg)
  : msg_(msg)
  {}
  Init_Alert_task_id alert_parameters(::rmf_task_msgs::msg::Alert::_alert_parameters_type arg)
  {
    msg_.alert_parameters = std::move(arg);
    return Init_Alert_task_id(msg_);
  }

private:
  ::rmf_task_msgs::msg::Alert msg_;
};

class Init_Alert_responses_available
{
public:
  explicit Init_Alert_responses_available(::rmf_task_msgs::msg::Alert & msg)
  : msg_(msg)
  {}
  Init_Alert_alert_parameters responses_available(::rmf_task_msgs::msg::Alert::_responses_available_type arg)
  {
    msg_.responses_available = std::move(arg);
    return Init_Alert_alert_parameters(msg_);
  }

private:
  ::rmf_task_msgs::msg::Alert msg_;
};

class Init_Alert_tier
{
public:
  explicit Init_Alert_tier(::rmf_task_msgs::msg::Alert & msg)
  : msg_(msg)
  {}
  Init_Alert_responses_available tier(::rmf_task_msgs::msg::Alert::_tier_type arg)
  {
    msg_.tier = std::move(arg);
    return Init_Alert_responses_available(msg_);
  }

private:
  ::rmf_task_msgs::msg::Alert msg_;
};

class Init_Alert_display
{
public:
  explicit Init_Alert_display(::rmf_task_msgs::msg::Alert & msg)
  : msg_(msg)
  {}
  Init_Alert_tier display(::rmf_task_msgs::msg::Alert::_display_type arg)
  {
    msg_.display = std::move(arg);
    return Init_Alert_tier(msg_);
  }

private:
  ::rmf_task_msgs::msg::Alert msg_;
};

class Init_Alert_message
{
public:
  explicit Init_Alert_message(::rmf_task_msgs::msg::Alert & msg)
  : msg_(msg)
  {}
  Init_Alert_display message(::rmf_task_msgs::msg::Alert::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_Alert_display(msg_);
  }

private:
  ::rmf_task_msgs::msg::Alert msg_;
};

class Init_Alert_subtitle
{
public:
  explicit Init_Alert_subtitle(::rmf_task_msgs::msg::Alert & msg)
  : msg_(msg)
  {}
  Init_Alert_message subtitle(::rmf_task_msgs::msg::Alert::_subtitle_type arg)
  {
    msg_.subtitle = std::move(arg);
    return Init_Alert_message(msg_);
  }

private:
  ::rmf_task_msgs::msg::Alert msg_;
};

class Init_Alert_title
{
public:
  explicit Init_Alert_title(::rmf_task_msgs::msg::Alert & msg)
  : msg_(msg)
  {}
  Init_Alert_subtitle title(::rmf_task_msgs::msg::Alert::_title_type arg)
  {
    msg_.title = std::move(arg);
    return Init_Alert_subtitle(msg_);
  }

private:
  ::rmf_task_msgs::msg::Alert msg_;
};

class Init_Alert_id
{
public:
  Init_Alert_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Alert_title id(::rmf_task_msgs::msg::Alert::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Alert_title(msg_);
  }

private:
  ::rmf_task_msgs::msg::Alert msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::Alert>()
{
  return rmf_task_msgs::msg::builder::Init_Alert_id();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__ALERT__BUILDER_HPP_
