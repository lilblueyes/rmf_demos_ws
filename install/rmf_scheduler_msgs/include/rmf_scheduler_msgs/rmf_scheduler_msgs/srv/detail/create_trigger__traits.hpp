// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_scheduler_msgs:srv/CreateTrigger.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_scheduler_msgs/srv/create_trigger.hpp"


#ifndef RMF_SCHEDULER_MSGS__SRV__DETAIL__CREATE_TRIGGER__TRAITS_HPP_
#define RMF_SCHEDULER_MSGS__SRV__DETAIL__CREATE_TRIGGER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_scheduler_msgs/srv/detail/create_trigger__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'trigger'
#include "rmf_scheduler_msgs/msg/detail/trigger__traits.hpp"

namespace rmf_scheduler_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CreateTrigger_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: trigger
  {
    out << "trigger: ";
    to_flow_style_yaml(msg.trigger, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CreateTrigger_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trigger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trigger:\n";
    to_block_style_yaml(msg.trigger, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CreateTrigger_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rmf_scheduler_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_scheduler_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_scheduler_msgs::srv::CreateTrigger_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_scheduler_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_scheduler_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_scheduler_msgs::srv::CreateTrigger_Request & msg)
{
  return rmf_scheduler_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_scheduler_msgs::srv::CreateTrigger_Request>()
{
  return "rmf_scheduler_msgs::srv::CreateTrigger_Request";
}

template<>
inline const char * name<rmf_scheduler_msgs::srv::CreateTrigger_Request>()
{
  return "rmf_scheduler_msgs/srv/CreateTrigger_Request";
}

template<>
struct has_fixed_size<rmf_scheduler_msgs::srv::CreateTrigger_Request>
  : std::integral_constant<bool, has_fixed_size<rmf_scheduler_msgs::msg::Trigger>::value> {};

template<>
struct has_bounded_size<rmf_scheduler_msgs::srv::CreateTrigger_Request>
  : std::integral_constant<bool, has_bounded_size<rmf_scheduler_msgs::msg::Trigger>::value> {};

template<>
struct is_message<rmf_scheduler_msgs::srv::CreateTrigger_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rmf_scheduler_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CreateTrigger_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CreateTrigger_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CreateTrigger_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rmf_scheduler_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_scheduler_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_scheduler_msgs::srv::CreateTrigger_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_scheduler_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_scheduler_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_scheduler_msgs::srv::CreateTrigger_Response & msg)
{
  return rmf_scheduler_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_scheduler_msgs::srv::CreateTrigger_Response>()
{
  return "rmf_scheduler_msgs::srv::CreateTrigger_Response";
}

template<>
inline const char * name<rmf_scheduler_msgs::srv::CreateTrigger_Response>()
{
  return "rmf_scheduler_msgs/srv/CreateTrigger_Response";
}

template<>
struct has_fixed_size<rmf_scheduler_msgs::srv::CreateTrigger_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_scheduler_msgs::srv::CreateTrigger_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_scheduler_msgs::srv::CreateTrigger_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace rmf_scheduler_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CreateTrigger_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CreateTrigger_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CreateTrigger_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rmf_scheduler_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_scheduler_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_scheduler_msgs::srv::CreateTrigger_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_scheduler_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_scheduler_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_scheduler_msgs::srv::CreateTrigger_Event & msg)
{
  return rmf_scheduler_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_scheduler_msgs::srv::CreateTrigger_Event>()
{
  return "rmf_scheduler_msgs::srv::CreateTrigger_Event";
}

template<>
inline const char * name<rmf_scheduler_msgs::srv::CreateTrigger_Event>()
{
  return "rmf_scheduler_msgs/srv/CreateTrigger_Event";
}

template<>
struct has_fixed_size<rmf_scheduler_msgs::srv::CreateTrigger_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_scheduler_msgs::srv::CreateTrigger_Event>
  : std::integral_constant<bool, has_bounded_size<rmf_scheduler_msgs::srv::CreateTrigger_Request>::value && has_bounded_size<rmf_scheduler_msgs::srv::CreateTrigger_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<rmf_scheduler_msgs::srv::CreateTrigger_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_scheduler_msgs::srv::CreateTrigger>()
{
  return "rmf_scheduler_msgs::srv::CreateTrigger";
}

template<>
inline const char * name<rmf_scheduler_msgs::srv::CreateTrigger>()
{
  return "rmf_scheduler_msgs/srv/CreateTrigger";
}

template<>
struct has_fixed_size<rmf_scheduler_msgs::srv::CreateTrigger>
  : std::integral_constant<
    bool,
    has_fixed_size<rmf_scheduler_msgs::srv::CreateTrigger_Request>::value &&
    has_fixed_size<rmf_scheduler_msgs::srv::CreateTrigger_Response>::value
  >
{
};

template<>
struct has_bounded_size<rmf_scheduler_msgs::srv::CreateTrigger>
  : std::integral_constant<
    bool,
    has_bounded_size<rmf_scheduler_msgs::srv::CreateTrigger_Request>::value &&
    has_bounded_size<rmf_scheduler_msgs::srv::CreateTrigger_Response>::value
  >
{
};

template<>
struct is_service<rmf_scheduler_msgs::srv::CreateTrigger>
  : std::true_type
{
};

template<>
struct is_service_request<rmf_scheduler_msgs::srv::CreateTrigger_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rmf_scheduler_msgs::srv::CreateTrigger_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RMF_SCHEDULER_MSGS__SRV__DETAIL__CREATE_TRIGGER__TRAITS_HPP_
