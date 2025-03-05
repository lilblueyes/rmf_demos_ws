// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:srv/RegisterParticipant.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_traffic_msgs/srv/register_participant.hpp"


#ifndef RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_PARTICIPANT__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_PARTICIPANT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/srv/detail/register_participant__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace srv
{

namespace builder
{

class Init_RegisterParticipant_Request_description
{
public:
  Init_RegisterParticipant_Request_description()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_traffic_msgs::srv::RegisterParticipant_Request description(::rmf_traffic_msgs::srv::RegisterParticipant_Request::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::RegisterParticipant_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::srv::RegisterParticipant_Request>()
{
  return rmf_traffic_msgs::srv::builder::Init_RegisterParticipant_Request_description();
}

}  // namespace rmf_traffic_msgs


namespace rmf_traffic_msgs
{

namespace srv
{

namespace builder
{

class Init_RegisterParticipant_Response_error
{
public:
  explicit Init_RegisterParticipant_Response_error(::rmf_traffic_msgs::srv::RegisterParticipant_Response & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::srv::RegisterParticipant_Response error(::rmf_traffic_msgs::srv::RegisterParticipant_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::RegisterParticipant_Response msg_;
};

class Init_RegisterParticipant_Response_next_storage_base
{
public:
  explicit Init_RegisterParticipant_Response_next_storage_base(::rmf_traffic_msgs::srv::RegisterParticipant_Response & msg)
  : msg_(msg)
  {}
  Init_RegisterParticipant_Response_error next_storage_base(::rmf_traffic_msgs::srv::RegisterParticipant_Response::_next_storage_base_type arg)
  {
    msg_.next_storage_base = std::move(arg);
    return Init_RegisterParticipant_Response_error(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::RegisterParticipant_Response msg_;
};

class Init_RegisterParticipant_Response_last_plan_id
{
public:
  explicit Init_RegisterParticipant_Response_last_plan_id(::rmf_traffic_msgs::srv::RegisterParticipant_Response & msg)
  : msg_(msg)
  {}
  Init_RegisterParticipant_Response_next_storage_base last_plan_id(::rmf_traffic_msgs::srv::RegisterParticipant_Response::_last_plan_id_type arg)
  {
    msg_.last_plan_id = std::move(arg);
    return Init_RegisterParticipant_Response_next_storage_base(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::RegisterParticipant_Response msg_;
};

class Init_RegisterParticipant_Response_last_itinerary_version
{
public:
  explicit Init_RegisterParticipant_Response_last_itinerary_version(::rmf_traffic_msgs::srv::RegisterParticipant_Response & msg)
  : msg_(msg)
  {}
  Init_RegisterParticipant_Response_last_plan_id last_itinerary_version(::rmf_traffic_msgs::srv::RegisterParticipant_Response::_last_itinerary_version_type arg)
  {
    msg_.last_itinerary_version = std::move(arg);
    return Init_RegisterParticipant_Response_last_plan_id(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::RegisterParticipant_Response msg_;
};

class Init_RegisterParticipant_Response_participant_id
{
public:
  Init_RegisterParticipant_Response_participant_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterParticipant_Response_last_itinerary_version participant_id(::rmf_traffic_msgs::srv::RegisterParticipant_Response::_participant_id_type arg)
  {
    msg_.participant_id = std::move(arg);
    return Init_RegisterParticipant_Response_last_itinerary_version(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::RegisterParticipant_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::srv::RegisterParticipant_Response>()
{
  return rmf_traffic_msgs::srv::builder::Init_RegisterParticipant_Response_participant_id();
}

}  // namespace rmf_traffic_msgs


namespace rmf_traffic_msgs
{

namespace srv
{

namespace builder
{

class Init_RegisterParticipant_Event_response
{
public:
  explicit Init_RegisterParticipant_Event_response(::rmf_traffic_msgs::srv::RegisterParticipant_Event & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::srv::RegisterParticipant_Event response(::rmf_traffic_msgs::srv::RegisterParticipant_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::RegisterParticipant_Event msg_;
};

class Init_RegisterParticipant_Event_request
{
public:
  explicit Init_RegisterParticipant_Event_request(::rmf_traffic_msgs::srv::RegisterParticipant_Event & msg)
  : msg_(msg)
  {}
  Init_RegisterParticipant_Event_response request(::rmf_traffic_msgs::srv::RegisterParticipant_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RegisterParticipant_Event_response(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::RegisterParticipant_Event msg_;
};

class Init_RegisterParticipant_Event_info
{
public:
  Init_RegisterParticipant_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterParticipant_Event_request info(::rmf_traffic_msgs::srv::RegisterParticipant_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RegisterParticipant_Event_request(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::RegisterParticipant_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::srv::RegisterParticipant_Event>()
{
  return rmf_traffic_msgs::srv::builder::Init_RegisterParticipant_Event_info();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_PARTICIPANT__BUILDER_HPP_
