// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_fleet_msgs:msg/DeliveryAlertTier.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_fleet_msgs/msg/detail/delivery_alert_tier__rosidl_typesupport_introspection_c.h"
#include "rmf_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_fleet_msgs/msg/detail/delivery_alert_tier__functions.h"
#include "rmf_fleet_msgs/msg/detail/delivery_alert_tier__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rmf_fleet_msgs__msg__DeliveryAlertTier__rosidl_typesupport_introspection_c__DeliveryAlertTier_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_fleet_msgs__msg__DeliveryAlertTier__init(message_memory);
}

void rmf_fleet_msgs__msg__DeliveryAlertTier__rosidl_typesupport_introspection_c__DeliveryAlertTier_fini_function(void * message_memory)
{
  rmf_fleet_msgs__msg__DeliveryAlertTier__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_fleet_msgs__msg__DeliveryAlertTier__rosidl_typesupport_introspection_c__DeliveryAlertTier_message_member_array[1] = {
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__DeliveryAlertTier, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_fleet_msgs__msg__DeliveryAlertTier__rosidl_typesupport_introspection_c__DeliveryAlertTier_message_members = {
  "rmf_fleet_msgs__msg",  // message namespace
  "DeliveryAlertTier",  // message name
  1,  // number of fields
  sizeof(rmf_fleet_msgs__msg__DeliveryAlertTier),
  false,  // has_any_key_member_
  rmf_fleet_msgs__msg__DeliveryAlertTier__rosidl_typesupport_introspection_c__DeliveryAlertTier_message_member_array,  // message members
  rmf_fleet_msgs__msg__DeliveryAlertTier__rosidl_typesupport_introspection_c__DeliveryAlertTier_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_fleet_msgs__msg__DeliveryAlertTier__rosidl_typesupport_introspection_c__DeliveryAlertTier_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_fleet_msgs__msg__DeliveryAlertTier__rosidl_typesupport_introspection_c__DeliveryAlertTier_message_type_support_handle = {
  0,
  &rmf_fleet_msgs__msg__DeliveryAlertTier__rosidl_typesupport_introspection_c__DeliveryAlertTier_message_members,
  get_message_typesupport_handle_function,
  &rmf_fleet_msgs__msg__DeliveryAlertTier__get_type_hash,
  &rmf_fleet_msgs__msg__DeliveryAlertTier__get_type_description,
  &rmf_fleet_msgs__msg__DeliveryAlertTier__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, DeliveryAlertTier)() {
  if (!rmf_fleet_msgs__msg__DeliveryAlertTier__rosidl_typesupport_introspection_c__DeliveryAlertTier_message_type_support_handle.typesupport_identifier) {
    rmf_fleet_msgs__msg__DeliveryAlertTier__rosidl_typesupport_introspection_c__DeliveryAlertTier_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_fleet_msgs__msg__DeliveryAlertTier__rosidl_typesupport_introspection_c__DeliveryAlertTier_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
