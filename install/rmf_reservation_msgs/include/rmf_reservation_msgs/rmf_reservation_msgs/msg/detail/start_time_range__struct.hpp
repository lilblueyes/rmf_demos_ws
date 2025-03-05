// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_reservation_msgs:msg/StartTimeRange.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/start_time_range.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__START_TIME_RANGE__STRUCT_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__START_TIME_RANGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'earliest_start_time'
// Member 'latest_start_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_reservation_msgs__msg__StartTimeRange __attribute__((deprecated))
#else
# define DEPRECATED__rmf_reservation_msgs__msg__StartTimeRange __declspec(deprecated)
#endif

namespace rmf_reservation_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StartTimeRange_
{
  using Type = StartTimeRange_<ContainerAllocator>;

  explicit StartTimeRange_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : earliest_start_time(_init),
    latest_start_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_earliest_start_time = false;
      this->has_latest_start_time = false;
    }
  }

  explicit StartTimeRange_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : earliest_start_time(_alloc, _init),
    latest_start_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_earliest_start_time = false;
      this->has_latest_start_time = false;
    }
  }

  // field types and members
  using _earliest_start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _earliest_start_time_type earliest_start_time;
  using _has_earliest_start_time_type =
    bool;
  _has_earliest_start_time_type has_earliest_start_time;
  using _latest_start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _latest_start_time_type latest_start_time;
  using _has_latest_start_time_type =
    bool;
  _has_latest_start_time_type has_latest_start_time;

  // setters for named parameter idiom
  Type & set__earliest_start_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->earliest_start_time = _arg;
    return *this;
  }
  Type & set__has_earliest_start_time(
    const bool & _arg)
  {
    this->has_earliest_start_time = _arg;
    return *this;
  }
  Type & set__latest_start_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->latest_start_time = _arg;
    return *this;
  }
  Type & set__has_latest_start_time(
    const bool & _arg)
  {
    this->has_latest_start_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_reservation_msgs::msg::StartTimeRange_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_reservation_msgs::msg::StartTimeRange_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_reservation_msgs::msg::StartTimeRange_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_reservation_msgs::msg::StartTimeRange_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_reservation_msgs::msg::StartTimeRange_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_reservation_msgs::msg::StartTimeRange_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_reservation_msgs::msg::StartTimeRange_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_reservation_msgs::msg::StartTimeRange_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_reservation_msgs::msg::StartTimeRange_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_reservation_msgs::msg::StartTimeRange_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_reservation_msgs__msg__StartTimeRange
    std::shared_ptr<rmf_reservation_msgs::msg::StartTimeRange_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_reservation_msgs__msg__StartTimeRange
    std::shared_ptr<rmf_reservation_msgs::msg::StartTimeRange_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartTimeRange_ & other) const
  {
    if (this->earliest_start_time != other.earliest_start_time) {
      return false;
    }
    if (this->has_earliest_start_time != other.has_earliest_start_time) {
      return false;
    }
    if (this->latest_start_time != other.latest_start_time) {
      return false;
    }
    if (this->has_latest_start_time != other.has_latest_start_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartTimeRange_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartTimeRange_

// alias to use template instance with default allocator
using StartTimeRange =
  rmf_reservation_msgs::msg::StartTimeRange_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_reservation_msgs

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__START_TIME_RANGE__STRUCT_HPP_
