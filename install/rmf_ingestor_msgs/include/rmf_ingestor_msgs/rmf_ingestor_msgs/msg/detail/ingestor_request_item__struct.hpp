// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_ingestor_msgs:msg/IngestorRequestItem.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_ingestor_msgs/msg/ingestor_request_item.hpp"


#ifndef RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__STRUCT_HPP_
#define RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_ingestor_msgs__msg__IngestorRequestItem __attribute__((deprecated))
#else
# define DEPRECATED__rmf_ingestor_msgs__msg__IngestorRequestItem __declspec(deprecated)
#endif

namespace rmf_ingestor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IngestorRequestItem_
{
  using Type = IngestorRequestItem_<ContainerAllocator>;

  explicit IngestorRequestItem_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type_guid = "";
      this->quantity = 0l;
      this->compartment_name = "";
    }
  }

  explicit IngestorRequestItem_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type_guid(_alloc),
    compartment_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type_guid = "";
      this->quantity = 0l;
      this->compartment_name = "";
    }
  }

  // field types and members
  using _type_guid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_guid_type type_guid;
  using _quantity_type =
    int32_t;
  _quantity_type quantity;
  using _compartment_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _compartment_name_type compartment_name;

  // setters for named parameter idiom
  Type & set__type_guid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type_guid = _arg;
    return *this;
  }
  Type & set__quantity(
    const int32_t & _arg)
  {
    this->quantity = _arg;
    return *this;
  }
  Type & set__compartment_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->compartment_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_ingestor_msgs::msg::IngestorRequestItem_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_ingestor_msgs::msg::IngestorRequestItem_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_ingestor_msgs::msg::IngestorRequestItem_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_ingestor_msgs::msg::IngestorRequestItem_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_ingestor_msgs::msg::IngestorRequestItem_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_ingestor_msgs::msg::IngestorRequestItem_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_ingestor_msgs::msg::IngestorRequestItem_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_ingestor_msgs::msg::IngestorRequestItem_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_ingestor_msgs::msg::IngestorRequestItem_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_ingestor_msgs::msg::IngestorRequestItem_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_ingestor_msgs__msg__IngestorRequestItem
    std::shared_ptr<rmf_ingestor_msgs::msg::IngestorRequestItem_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_ingestor_msgs__msg__IngestorRequestItem
    std::shared_ptr<rmf_ingestor_msgs::msg::IngestorRequestItem_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IngestorRequestItem_ & other) const
  {
    if (this->type_guid != other.type_guid) {
      return false;
    }
    if (this->quantity != other.quantity) {
      return false;
    }
    if (this->compartment_name != other.compartment_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const IngestorRequestItem_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IngestorRequestItem_

// alias to use template instance with default allocator
using IngestorRequestItem =
  rmf_ingestor_msgs::msg::IngestorRequestItem_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_ingestor_msgs

#endif  // RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__STRUCT_HPP_
