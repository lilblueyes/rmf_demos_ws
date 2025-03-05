// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_traffic_msgs:msg/ItineraryDelay.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_traffic_msgs/msg/itinerary_delay.hpp"


#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_DELAY__STRUCT_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_DELAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_traffic_msgs__msg__ItineraryDelay __attribute__((deprecated))
#else
# define DEPRECATED__rmf_traffic_msgs__msg__ItineraryDelay __declspec(deprecated)
#endif

namespace rmf_traffic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ItineraryDelay_
{
  using Type = ItineraryDelay_<ContainerAllocator>;

  explicit ItineraryDelay_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant = 0ull;
      this->delay = 0ll;
      this->itinerary_version = 0ull;
    }
  }

  explicit ItineraryDelay_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->participant = 0ull;
      this->delay = 0ll;
      this->itinerary_version = 0ull;
    }
  }

  // field types and members
  using _participant_type =
    uint64_t;
  _participant_type participant;
  using _delay_type =
    int64_t;
  _delay_type delay;
  using _itinerary_version_type =
    uint64_t;
  _itinerary_version_type itinerary_version;

  // setters for named parameter idiom
  Type & set__participant(
    const uint64_t & _arg)
  {
    this->participant = _arg;
    return *this;
  }
  Type & set__delay(
    const int64_t & _arg)
  {
    this->delay = _arg;
    return *this;
  }
  Type & set__itinerary_version(
    const uint64_t & _arg)
  {
    this->itinerary_version = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_traffic_msgs::msg::ItineraryDelay_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_traffic_msgs::msg::ItineraryDelay_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ItineraryDelay_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_traffic_msgs::msg::ItineraryDelay_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ItineraryDelay_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ItineraryDelay_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_traffic_msgs::msg::ItineraryDelay_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_traffic_msgs::msg::ItineraryDelay_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ItineraryDelay_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_traffic_msgs::msg::ItineraryDelay_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_traffic_msgs__msg__ItineraryDelay
    std::shared_ptr<rmf_traffic_msgs::msg::ItineraryDelay_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_traffic_msgs__msg__ItineraryDelay
    std::shared_ptr<rmf_traffic_msgs::msg::ItineraryDelay_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ItineraryDelay_ & other) const
  {
    if (this->participant != other.participant) {
      return false;
    }
    if (this->delay != other.delay) {
      return false;
    }
    if (this->itinerary_version != other.itinerary_version) {
      return false;
    }
    return true;
  }
  bool operator!=(const ItineraryDelay_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ItineraryDelay_

// alias to use template instance with default allocator
using ItineraryDelay =
  rmf_traffic_msgs::msg::ItineraryDelay_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_DELAY__STRUCT_HPP_
