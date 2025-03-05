// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_reservation_msgs:msg/StartTimeRange.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/start_time_range.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__START_TIME_RANGE__BUILDER_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__START_TIME_RANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_reservation_msgs/msg/detail/start_time_range__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_reservation_msgs
{

namespace msg
{

namespace builder
{

class Init_StartTimeRange_has_latest_start_time
{
public:
  explicit Init_StartTimeRange_has_latest_start_time(::rmf_reservation_msgs::msg::StartTimeRange & msg)
  : msg_(msg)
  {}
  ::rmf_reservation_msgs::msg::StartTimeRange has_latest_start_time(::rmf_reservation_msgs::msg::StartTimeRange::_has_latest_start_time_type arg)
  {
    msg_.has_latest_start_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::StartTimeRange msg_;
};

class Init_StartTimeRange_latest_start_time
{
public:
  explicit Init_StartTimeRange_latest_start_time(::rmf_reservation_msgs::msg::StartTimeRange & msg)
  : msg_(msg)
  {}
  Init_StartTimeRange_has_latest_start_time latest_start_time(::rmf_reservation_msgs::msg::StartTimeRange::_latest_start_time_type arg)
  {
    msg_.latest_start_time = std::move(arg);
    return Init_StartTimeRange_has_latest_start_time(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::StartTimeRange msg_;
};

class Init_StartTimeRange_has_earliest_start_time
{
public:
  explicit Init_StartTimeRange_has_earliest_start_time(::rmf_reservation_msgs::msg::StartTimeRange & msg)
  : msg_(msg)
  {}
  Init_StartTimeRange_latest_start_time has_earliest_start_time(::rmf_reservation_msgs::msg::StartTimeRange::_has_earliest_start_time_type arg)
  {
    msg_.has_earliest_start_time = std::move(arg);
    return Init_StartTimeRange_latest_start_time(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::StartTimeRange msg_;
};

class Init_StartTimeRange_earliest_start_time
{
public:
  Init_StartTimeRange_earliest_start_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartTimeRange_has_earliest_start_time earliest_start_time(::rmf_reservation_msgs::msg::StartTimeRange::_earliest_start_time_type arg)
  {
    msg_.earliest_start_time = std::move(arg);
    return Init_StartTimeRange_has_earliest_start_time(msg_);
  }

private:
  ::rmf_reservation_msgs::msg::StartTimeRange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_reservation_msgs::msg::StartTimeRange>()
{
  return rmf_reservation_msgs::msg::builder::Init_StartTimeRange_earliest_start_time();
}

}  // namespace rmf_reservation_msgs

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__START_TIME_RANGE__BUILDER_HPP_
