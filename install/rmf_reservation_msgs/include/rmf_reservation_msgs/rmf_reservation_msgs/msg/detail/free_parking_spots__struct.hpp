// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_reservation_msgs:msg/FreeParkingSpots.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/free_parking_spots.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__FREE_PARKING_SPOTS__STRUCT_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__FREE_PARKING_SPOTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_reservation_msgs__msg__FreeParkingSpots __attribute__((deprecated))
#else
# define DEPRECATED__rmf_reservation_msgs__msg__FreeParkingSpots __declspec(deprecated)
#endif

namespace rmf_reservation_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FreeParkingSpots_
{
  using Type = FreeParkingSpots_<ContainerAllocator>;

  explicit FreeParkingSpots_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit FreeParkingSpots_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _spots_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _spots_type spots;

  // setters for named parameter idiom
  Type & set__spots(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->spots = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_reservation_msgs::msg::FreeParkingSpots_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_reservation_msgs::msg::FreeParkingSpots_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_reservation_msgs::msg::FreeParkingSpots_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_reservation_msgs::msg::FreeParkingSpots_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_reservation_msgs::msg::FreeParkingSpots_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_reservation_msgs::msg::FreeParkingSpots_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_reservation_msgs::msg::FreeParkingSpots_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_reservation_msgs::msg::FreeParkingSpots_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_reservation_msgs::msg::FreeParkingSpots_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_reservation_msgs::msg::FreeParkingSpots_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_reservation_msgs__msg__FreeParkingSpots
    std::shared_ptr<rmf_reservation_msgs::msg::FreeParkingSpots_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_reservation_msgs__msg__FreeParkingSpots
    std::shared_ptr<rmf_reservation_msgs::msg::FreeParkingSpots_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FreeParkingSpots_ & other) const
  {
    if (this->spots != other.spots) {
      return false;
    }
    return true;
  }
  bool operator!=(const FreeParkingSpots_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FreeParkingSpots_

// alias to use template instance with default allocator
using FreeParkingSpots =
  rmf_reservation_msgs::msg::FreeParkingSpots_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_reservation_msgs

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__FREE_PARKING_SPOTS__STRUCT_HPP_
