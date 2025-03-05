// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_scheduler_msgs:srv/CreateSchedule.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_scheduler_msgs/srv/create_schedule.hpp"


#ifndef RMF_SCHEDULER_MSGS__SRV__DETAIL__CREATE_SCHEDULE__BUILDER_HPP_
#define RMF_SCHEDULER_MSGS__SRV__DETAIL__CREATE_SCHEDULE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_scheduler_msgs/srv/detail/create_schedule__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_scheduler_msgs
{

namespace srv
{

namespace builder
{

class Init_CreateSchedule_Request_schedule
{
public:
  Init_CreateSchedule_Request_schedule()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_scheduler_msgs::srv::CreateSchedule_Request schedule(::rmf_scheduler_msgs::srv::CreateSchedule_Request::_schedule_type arg)
  {
    msg_.schedule = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::CreateSchedule_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_scheduler_msgs::srv::CreateSchedule_Request>()
{
  return rmf_scheduler_msgs::srv::builder::Init_CreateSchedule_Request_schedule();
}

}  // namespace rmf_scheduler_msgs


namespace rmf_scheduler_msgs
{

namespace srv
{

namespace builder
{

class Init_CreateSchedule_Response_message
{
public:
  explicit Init_CreateSchedule_Response_message(::rmf_scheduler_msgs::srv::CreateSchedule_Response & msg)
  : msg_(msg)
  {}
  ::rmf_scheduler_msgs::srv::CreateSchedule_Response message(::rmf_scheduler_msgs::srv::CreateSchedule_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::CreateSchedule_Response msg_;
};

class Init_CreateSchedule_Response_success
{
public:
  Init_CreateSchedule_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CreateSchedule_Response_message success(::rmf_scheduler_msgs::srv::CreateSchedule_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CreateSchedule_Response_message(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::CreateSchedule_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_scheduler_msgs::srv::CreateSchedule_Response>()
{
  return rmf_scheduler_msgs::srv::builder::Init_CreateSchedule_Response_success();
}

}  // namespace rmf_scheduler_msgs


namespace rmf_scheduler_msgs
{

namespace srv
{

namespace builder
{

class Init_CreateSchedule_Event_response
{
public:
  explicit Init_CreateSchedule_Event_response(::rmf_scheduler_msgs::srv::CreateSchedule_Event & msg)
  : msg_(msg)
  {}
  ::rmf_scheduler_msgs::srv::CreateSchedule_Event response(::rmf_scheduler_msgs::srv::CreateSchedule_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::CreateSchedule_Event msg_;
};

class Init_CreateSchedule_Event_request
{
public:
  explicit Init_CreateSchedule_Event_request(::rmf_scheduler_msgs::srv::CreateSchedule_Event & msg)
  : msg_(msg)
  {}
  Init_CreateSchedule_Event_response request(::rmf_scheduler_msgs::srv::CreateSchedule_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CreateSchedule_Event_response(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::CreateSchedule_Event msg_;
};

class Init_CreateSchedule_Event_info
{
public:
  Init_CreateSchedule_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CreateSchedule_Event_request info(::rmf_scheduler_msgs::srv::CreateSchedule_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CreateSchedule_Event_request(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::CreateSchedule_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_scheduler_msgs::srv::CreateSchedule_Event>()
{
  return rmf_scheduler_msgs::srv::builder::Init_CreateSchedule_Event_info();
}

}  // namespace rmf_scheduler_msgs

#endif  // RMF_SCHEDULER_MSGS__SRV__DETAIL__CREATE_SCHEDULE__BUILDER_HPP_
