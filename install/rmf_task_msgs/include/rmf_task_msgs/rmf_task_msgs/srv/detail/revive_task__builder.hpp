// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:srv/ReviveTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_task_msgs/srv/revive_task.hpp"


#ifndef RMF_TASK_MSGS__SRV__DETAIL__REVIVE_TASK__BUILDER_HPP_
#define RMF_TASK_MSGS__SRV__DETAIL__REVIVE_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/srv/detail/revive_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace srv
{

namespace builder
{

class Init_ReviveTask_Request_task_id
{
public:
  explicit Init_ReviveTask_Request_task_id(::rmf_task_msgs::srv::ReviveTask_Request & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::srv::ReviveTask_Request task_id(::rmf_task_msgs::srv::ReviveTask_Request::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::srv::ReviveTask_Request msg_;
};

class Init_ReviveTask_Request_requester
{
public:
  Init_ReviveTask_Request_requester()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReviveTask_Request_task_id requester(::rmf_task_msgs::srv::ReviveTask_Request::_requester_type arg)
  {
    msg_.requester = std::move(arg);
    return Init_ReviveTask_Request_task_id(msg_);
  }

private:
  ::rmf_task_msgs::srv::ReviveTask_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::srv::ReviveTask_Request>()
{
  return rmf_task_msgs::srv::builder::Init_ReviveTask_Request_requester();
}

}  // namespace rmf_task_msgs


namespace rmf_task_msgs
{

namespace srv
{

namespace builder
{

class Init_ReviveTask_Response_success
{
public:
  Init_ReviveTask_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_task_msgs::srv::ReviveTask_Response success(::rmf_task_msgs::srv::ReviveTask_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::srv::ReviveTask_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::srv::ReviveTask_Response>()
{
  return rmf_task_msgs::srv::builder::Init_ReviveTask_Response_success();
}

}  // namespace rmf_task_msgs


namespace rmf_task_msgs
{

namespace srv
{

namespace builder
{

class Init_ReviveTask_Event_response
{
public:
  explicit Init_ReviveTask_Event_response(::rmf_task_msgs::srv::ReviveTask_Event & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::srv::ReviveTask_Event response(::rmf_task_msgs::srv::ReviveTask_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::srv::ReviveTask_Event msg_;
};

class Init_ReviveTask_Event_request
{
public:
  explicit Init_ReviveTask_Event_request(::rmf_task_msgs::srv::ReviveTask_Event & msg)
  : msg_(msg)
  {}
  Init_ReviveTask_Event_response request(::rmf_task_msgs::srv::ReviveTask_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ReviveTask_Event_response(msg_);
  }

private:
  ::rmf_task_msgs::srv::ReviveTask_Event msg_;
};

class Init_ReviveTask_Event_info
{
public:
  Init_ReviveTask_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReviveTask_Event_request info(::rmf_task_msgs::srv::ReviveTask_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ReviveTask_Event_request(msg_);
  }

private:
  ::rmf_task_msgs::srv::ReviveTask_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::srv::ReviveTask_Event>()
{
  return rmf_task_msgs::srv::builder::Init_ReviveTask_Event_info();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__SRV__DETAIL__REVIVE_TASK__BUILDER_HPP_
