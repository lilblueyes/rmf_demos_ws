// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_reservation_msgs:msg/ClaimRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/claim_request.hpp"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__CLAIM_REQUEST__STRUCT_HPP_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__CLAIM_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'ticket'
#include "rmf_reservation_msgs/msg/detail/ticket__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_reservation_msgs__msg__ClaimRequest __attribute__((deprecated))
#else
# define DEPRECATED__rmf_reservation_msgs__msg__ClaimRequest __declspec(deprecated)
#endif

namespace rmf_reservation_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClaimRequest_
{
  using Type = ClaimRequest_<ContainerAllocator>;

  explicit ClaimRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ticket(_init)
  {
    (void)_init;
  }

  explicit ClaimRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ticket(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _ticket_type =
    rmf_reservation_msgs::msg::Ticket_<ContainerAllocator>;
  _ticket_type ticket;
  using _wait_points_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _wait_points_type wait_points;

  // setters for named parameter idiom
  Type & set__ticket(
    const rmf_reservation_msgs::msg::Ticket_<ContainerAllocator> & _arg)
  {
    this->ticket = _arg;
    return *this;
  }
  Type & set__wait_points(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->wait_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_reservation_msgs::msg::ClaimRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_reservation_msgs::msg::ClaimRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_reservation_msgs::msg::ClaimRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_reservation_msgs::msg::ClaimRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_reservation_msgs::msg::ClaimRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_reservation_msgs::msg::ClaimRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_reservation_msgs::msg::ClaimRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_reservation_msgs::msg::ClaimRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_reservation_msgs::msg::ClaimRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_reservation_msgs::msg::ClaimRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_reservation_msgs__msg__ClaimRequest
    std::shared_ptr<rmf_reservation_msgs::msg::ClaimRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_reservation_msgs__msg__ClaimRequest
    std::shared_ptr<rmf_reservation_msgs::msg::ClaimRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClaimRequest_ & other) const
  {
    if (this->ticket != other.ticket) {
      return false;
    }
    if (this->wait_points != other.wait_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClaimRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClaimRequest_

// alias to use template instance with default allocator
using ClaimRequest =
  rmf_reservation_msgs::msg::ClaimRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_reservation_msgs

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__CLAIM_REQUEST__STRUCT_HPP_
