// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_building_map_msgs:srv/GetBuildingMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_building_map_msgs/srv/get_building_map.hpp"


#ifndef RMF_BUILDING_MAP_MSGS__SRV__DETAIL__GET_BUILDING_MAP__BUILDER_HPP_
#define RMF_BUILDING_MAP_MSGS__SRV__DETAIL__GET_BUILDING_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_building_map_msgs/srv/detail/get_building_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_building_map_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_building_map_msgs::srv::GetBuildingMap_Request>()
{
  return ::rmf_building_map_msgs::srv::GetBuildingMap_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rmf_building_map_msgs


namespace rmf_building_map_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBuildingMap_Response_building_map
{
public:
  Init_GetBuildingMap_Response_building_map()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_building_map_msgs::srv::GetBuildingMap_Response building_map(::rmf_building_map_msgs::srv::GetBuildingMap_Response::_building_map_type arg)
  {
    msg_.building_map = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_building_map_msgs::srv::GetBuildingMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_building_map_msgs::srv::GetBuildingMap_Response>()
{
  return rmf_building_map_msgs::srv::builder::Init_GetBuildingMap_Response_building_map();
}

}  // namespace rmf_building_map_msgs


namespace rmf_building_map_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBuildingMap_Event_response
{
public:
  explicit Init_GetBuildingMap_Event_response(::rmf_building_map_msgs::srv::GetBuildingMap_Event & msg)
  : msg_(msg)
  {}
  ::rmf_building_map_msgs::srv::GetBuildingMap_Event response(::rmf_building_map_msgs::srv::GetBuildingMap_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_building_map_msgs::srv::GetBuildingMap_Event msg_;
};

class Init_GetBuildingMap_Event_request
{
public:
  explicit Init_GetBuildingMap_Event_request(::rmf_building_map_msgs::srv::GetBuildingMap_Event & msg)
  : msg_(msg)
  {}
  Init_GetBuildingMap_Event_response request(::rmf_building_map_msgs::srv::GetBuildingMap_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetBuildingMap_Event_response(msg_);
  }

private:
  ::rmf_building_map_msgs::srv::GetBuildingMap_Event msg_;
};

class Init_GetBuildingMap_Event_info
{
public:
  Init_GetBuildingMap_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBuildingMap_Event_request info(::rmf_building_map_msgs::srv::GetBuildingMap_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetBuildingMap_Event_request(msg_);
  }

private:
  ::rmf_building_map_msgs::srv::GetBuildingMap_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_building_map_msgs::srv::GetBuildingMap_Event>()
{
  return rmf_building_map_msgs::srv::builder::Init_GetBuildingMap_Event_info();
}

}  // namespace rmf_building_map_msgs

#endif  // RMF_BUILDING_MAP_MSGS__SRV__DETAIL__GET_BUILDING_MAP__BUILDER_HPP_
