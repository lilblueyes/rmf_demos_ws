// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_task_msgs:msg/Tasks.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_task_msgs/msg/tasks.hpp"


#ifndef RMF_TASK_MSGS__MSG__DETAIL__TASKS__STRUCT_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__TASKS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'tasks'
#include "rmf_task_msgs/msg/detail/task_summary__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_task_msgs__msg__Tasks __attribute__((deprecated))
#else
# define DEPRECATED__rmf_task_msgs__msg__Tasks __declspec(deprecated)
#endif

namespace rmf_task_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Tasks_
{
  using Type = Tasks_<ContainerAllocator>;

  explicit Tasks_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Tasks_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _tasks_type =
    std::vector<rmf_task_msgs::msg::TaskSummary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_task_msgs::msg::TaskSummary_<ContainerAllocator>>>;
  _tasks_type tasks;

  // setters for named parameter idiom
  Type & set__tasks(
    const std::vector<rmf_task_msgs::msg::TaskSummary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_task_msgs::msg::TaskSummary_<ContainerAllocator>>> & _arg)
  {
    this->tasks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_task_msgs::msg::Tasks_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_task_msgs::msg::Tasks_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::Tasks_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_task_msgs::msg::Tasks_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::Tasks_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::Tasks_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_task_msgs::msg::Tasks_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_task_msgs::msg::Tasks_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::Tasks_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_task_msgs::msg::Tasks_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_task_msgs__msg__Tasks
    std::shared_ptr<rmf_task_msgs::msg::Tasks_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_task_msgs__msg__Tasks
    std::shared_ptr<rmf_task_msgs::msg::Tasks_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tasks_ & other) const
  {
    if (this->tasks != other.tasks) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tasks_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tasks_

// alias to use template instance with default allocator
using Tasks =
  rmf_task_msgs::msg::Tasks_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TASKS__STRUCT_HPP_
