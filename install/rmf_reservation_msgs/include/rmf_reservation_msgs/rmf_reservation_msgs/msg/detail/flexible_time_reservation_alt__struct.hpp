// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_reservation_msgs:msg/FlexibleTimeReservationAlt.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/flexible_time_reservation_alt.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__FLEXIBLE_TIME_RESERVATION_ALT__STRUCT_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__FLEXIBLE_TIME_RESERVATION_ALT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'start_time'
#include "rmf_reservation_msgs/msg/detail/start_time_range__struct.hpp"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_reservation_msgs__msg__FlexibleTimeReservationAlt __attribute__((deprecated))
#else
# define DEPRECATED__rmf_reservation_msgs__msg__FlexibleTimeReservationAlt __declspec(deprecated)
#endif

namespace rmf_reservation_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FlexibleTimeReservationAlt_
{
  using Type = FlexibleTimeReservationAlt_<ContainerAllocator>;

  explicit FlexibleTimeReservationAlt_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start_time(_init),
    duration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resource_name = "";
      this->cost = 0.0;
      this->has_end = false;
    }
  }

  explicit FlexibleTimeReservationAlt_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : resource_name(_alloc),
    start_time(_alloc, _init),
    duration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resource_name = "";
      this->cost = 0.0;
      this->has_end = false;
    }
  }

  // field types and members
  using _resource_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _resource_name_type resource_name;
  using _cost_type =
    double;
  _cost_type cost;
  using _start_time_type =
    rmf_reservation_msgs::msg::StartTimeRange_<ContainerAllocator>;
  _start_time_type start_time;
  using _has_end_type =
    bool;
  _has_end_type has_end;
  using _duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__resource_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->resource_name = _arg;
    return *this;
  }
  Type & set__cost(
    const double & _arg)
  {
    this->cost = _arg;
    return *this;
  }
  Type & set__start_time(
    const rmf_reservation_msgs::msg::StartTimeRange_<ContainerAllocator> & _arg)
  {
    this->start_time = _arg;
    return *this;
  }
  Type & set__has_end(
    const bool & _arg)
  {
    this->has_end = _arg;
    return *this;
  }
  Type & set__duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_reservation_msgs::msg::FlexibleTimeReservationAlt_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_reservation_msgs::msg::FlexibleTimeReservationAlt_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_reservation_msgs::msg::FlexibleTimeReservationAlt_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_reservation_msgs::msg::FlexibleTimeReservationAlt_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_reservation_msgs::msg::FlexibleTimeReservationAlt_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_reservation_msgs::msg::FlexibleTimeReservationAlt_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_reservation_msgs::msg::FlexibleTimeReservationAlt_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_reservation_msgs::msg::FlexibleTimeReservationAlt_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_reservation_msgs::msg::FlexibleTimeReservationAlt_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_reservation_msgs::msg::FlexibleTimeReservationAlt_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_reservation_msgs__msg__FlexibleTimeReservationAlt
    std::shared_ptr<rmf_reservation_msgs::msg::FlexibleTimeReservationAlt_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_reservation_msgs__msg__FlexibleTimeReservationAlt
    std::shared_ptr<rmf_reservation_msgs::msg::FlexibleTimeReservationAlt_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FlexibleTimeReservationAlt_ & other) const
  {
    if (this->resource_name != other.resource_name) {
      return false;
    }
    if (this->cost != other.cost) {
      return false;
    }
    if (this->start_time != other.start_time) {
      return false;
    }
    if (this->has_end != other.has_end) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const FlexibleTimeReservationAlt_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FlexibleTimeReservationAlt_

// alias to use template instance with default allocator
using FlexibleTimeReservationAlt =
  rmf_reservation_msgs::msg::FlexibleTimeReservationAlt_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_reservation_msgs

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__FLEXIBLE_TIME_RESERVATION_ALT__STRUCT_HPP_
