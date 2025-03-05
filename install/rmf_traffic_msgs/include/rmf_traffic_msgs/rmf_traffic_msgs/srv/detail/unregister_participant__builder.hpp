// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:srv/UnregisterParticipant.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_traffic_msgs/srv/unregister_participant.hpp"


#ifndef RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_PARTICIPANT__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_PARTICIPANT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/srv/detail/unregister_participant__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace srv
{

namespace builder
{

class Init_UnregisterParticipant_Request_participant_id
{
public:
  Init_UnregisterParticipant_Request_participant_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_traffic_msgs::srv::UnregisterParticipant_Request participant_id(::rmf_traffic_msgs::srv::UnregisterParticipant_Request::_participant_id_type arg)
  {
    msg_.participant_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::UnregisterParticipant_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::srv::UnregisterParticipant_Request>()
{
  return rmf_traffic_msgs::srv::builder::Init_UnregisterParticipant_Request_participant_id();
}

}  // namespace rmf_traffic_msgs


namespace rmf_traffic_msgs
{

namespace srv
{

namespace builder
{

class Init_UnregisterParticipant_Response_error
{
public:
  explicit Init_UnregisterParticipant_Response_error(::rmf_traffic_msgs::srv::UnregisterParticipant_Response & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::srv::UnregisterParticipant_Response error(::rmf_traffic_msgs::srv::UnregisterParticipant_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::UnregisterParticipant_Response msg_;
};

class Init_UnregisterParticipant_Response_confirmation
{
public:
  Init_UnregisterParticipant_Response_confirmation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UnregisterParticipant_Response_error confirmation(::rmf_traffic_msgs::srv::UnregisterParticipant_Response::_confirmation_type arg)
  {
    msg_.confirmation = std::move(arg);
    return Init_UnregisterParticipant_Response_error(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::UnregisterParticipant_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::srv::UnregisterParticipant_Response>()
{
  return rmf_traffic_msgs::srv::builder::Init_UnregisterParticipant_Response_confirmation();
}

}  // namespace rmf_traffic_msgs


namespace rmf_traffic_msgs
{

namespace srv
{

namespace builder
{

class Init_UnregisterParticipant_Event_response
{
public:
  explicit Init_UnregisterParticipant_Event_response(::rmf_traffic_msgs::srv::UnregisterParticipant_Event & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::srv::UnregisterParticipant_Event response(::rmf_traffic_msgs::srv::UnregisterParticipant_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::UnregisterParticipant_Event msg_;
};

class Init_UnregisterParticipant_Event_request
{
public:
  explicit Init_UnregisterParticipant_Event_request(::rmf_traffic_msgs::srv::UnregisterParticipant_Event & msg)
  : msg_(msg)
  {}
  Init_UnregisterParticipant_Event_response request(::rmf_traffic_msgs::srv::UnregisterParticipant_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_UnregisterParticipant_Event_response(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::UnregisterParticipant_Event msg_;
};

class Init_UnregisterParticipant_Event_info
{
public:
  Init_UnregisterParticipant_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UnregisterParticipant_Event_request info(::rmf_traffic_msgs::srv::UnregisterParticipant_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_UnregisterParticipant_Event_request(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::UnregisterParticipant_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::srv::UnregisterParticipant_Event>()
{
  return rmf_traffic_msgs::srv::builder::Init_UnregisterParticipant_Event_info();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_PARTICIPANT__BUILDER_HPP_
