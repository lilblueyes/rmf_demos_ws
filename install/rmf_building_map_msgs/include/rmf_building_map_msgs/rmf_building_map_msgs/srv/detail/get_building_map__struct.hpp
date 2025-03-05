// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_building_map_msgs:srv/GetBuildingMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_building_map_msgs/srv/get_building_map.hpp"


#ifndef RMF_BUILDING_MAP_MSGS__SRV__DETAIL__GET_BUILDING_MAP__STRUCT_HPP_
#define RMF_BUILDING_MAP_MSGS__SRV__DETAIL__GET_BUILDING_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_building_map_msgs__srv__GetBuildingMap_Request __attribute__((deprecated))
#else
# define DEPRECATED__rmf_building_map_msgs__srv__GetBuildingMap_Request __declspec(deprecated)
#endif

namespace rmf_building_map_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetBuildingMap_Request_
{
  using Type = GetBuildingMap_Request_<ContainerAllocator>;

  explicit GetBuildingMap_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetBuildingMap_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    rmf_building_map_msgs::srv::GetBuildingMap_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_building_map_msgs::srv::GetBuildingMap_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::srv::GetBuildingMap_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::srv::GetBuildingMap_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_building_map_msgs__srv__GetBuildingMap_Request
    std::shared_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_building_map_msgs__srv__GetBuildingMap_Request
    std::shared_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetBuildingMap_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetBuildingMap_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetBuildingMap_Request_

// alias to use template instance with default allocator
using GetBuildingMap_Request =
  rmf_building_map_msgs::srv::GetBuildingMap_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_building_map_msgs


// Include directives for member types
// Member 'building_map'
#include "rmf_building_map_msgs/msg/detail/building_map__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_building_map_msgs__srv__GetBuildingMap_Response __attribute__((deprecated))
#else
# define DEPRECATED__rmf_building_map_msgs__srv__GetBuildingMap_Response __declspec(deprecated)
#endif

namespace rmf_building_map_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetBuildingMap_Response_
{
  using Type = GetBuildingMap_Response_<ContainerAllocator>;

  explicit GetBuildingMap_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : building_map(_init)
  {
    (void)_init;
  }

  explicit GetBuildingMap_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : building_map(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _building_map_type =
    rmf_building_map_msgs::msg::BuildingMap_<ContainerAllocator>;
  _building_map_type building_map;

  // setters for named parameter idiom
  Type & set__building_map(
    const rmf_building_map_msgs::msg::BuildingMap_<ContainerAllocator> & _arg)
  {
    this->building_map = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_building_map_msgs::srv::GetBuildingMap_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_building_map_msgs::srv::GetBuildingMap_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::srv::GetBuildingMap_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::srv::GetBuildingMap_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_building_map_msgs__srv__GetBuildingMap_Response
    std::shared_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_building_map_msgs__srv__GetBuildingMap_Response
    std::shared_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetBuildingMap_Response_ & other) const
  {
    if (this->building_map != other.building_map) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetBuildingMap_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetBuildingMap_Response_

// alias to use template instance with default allocator
using GetBuildingMap_Response =
  rmf_building_map_msgs::srv::GetBuildingMap_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_building_map_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_building_map_msgs__srv__GetBuildingMap_Event __attribute__((deprecated))
#else
# define DEPRECATED__rmf_building_map_msgs__srv__GetBuildingMap_Event __declspec(deprecated)
#endif

namespace rmf_building_map_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetBuildingMap_Event_
{
  using Type = GetBuildingMap_Event_<ContainerAllocator>;

  explicit GetBuildingMap_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetBuildingMap_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<rmf_building_map_msgs::srv::GetBuildingMap_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::srv::GetBuildingMap_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<rmf_building_map_msgs::srv::GetBuildingMap_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::srv::GetBuildingMap_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<rmf_building_map_msgs::srv::GetBuildingMap_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::srv::GetBuildingMap_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<rmf_building_map_msgs::srv::GetBuildingMap_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::srv::GetBuildingMap_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rmf_building_map_msgs::srv::GetBuildingMap_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_building_map_msgs::srv::GetBuildingMap_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::srv::GetBuildingMap_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::srv::GetBuildingMap_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_building_map_msgs__srv__GetBuildingMap_Event
    std::shared_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_building_map_msgs__srv__GetBuildingMap_Event
    std::shared_ptr<rmf_building_map_msgs::srv::GetBuildingMap_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetBuildingMap_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetBuildingMap_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetBuildingMap_Event_

// alias to use template instance with default allocator
using GetBuildingMap_Event =
  rmf_building_map_msgs::srv::GetBuildingMap_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rmf_building_map_msgs

namespace rmf_building_map_msgs
{

namespace srv
{

struct GetBuildingMap
{
  using Request = rmf_building_map_msgs::srv::GetBuildingMap_Request;
  using Response = rmf_building_map_msgs::srv::GetBuildingMap_Response;
  using Event = rmf_building_map_msgs::srv::GetBuildingMap_Event;
};

}  // namespace srv

}  // namespace rmf_building_map_msgs

#endif  // RMF_BUILDING_MAP_MSGS__SRV__DETAIL__GET_BUILDING_MAP__STRUCT_HPP_
