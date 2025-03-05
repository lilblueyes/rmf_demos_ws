// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/DeliveryAlertCategory.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/delivery_alert_category__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__DeliveryAlertCategory__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x70, 0xf5, 0x33, 0x87, 0xbe, 0x55, 0x64, 0x4a,
      0x43, 0x33, 0x72, 0xb8, 0xff, 0x59, 0xf3, 0xd0,
      0x48, 0x9f, 0xa1, 0xfd, 0x0e, 0x43, 0x68, 0x75,
      0x01, 0x94, 0x41, 0x10, 0x01, 0xce, 0xd1, 0xac,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_fleet_msgs__msg__DeliveryAlertCategory__TYPE_NAME[] = "rmf_fleet_msgs/msg/DeliveryAlertCategory";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__DeliveryAlertCategory__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__DeliveryAlertCategory__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__DeliveryAlertCategory__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_fleet_msgs__msg__DeliveryAlertCategory__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__DeliveryAlertCategory__TYPE_NAME, 40, 40},
      {rmf_fleet_msgs__msg__DeliveryAlertCategory__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 value\n"
  "uint32 MISSING=0\n"
  "uint32 WRONG=1\n"
  "uint32 OBSTRUCTED=2\n"
  "uint32 CANCELLED=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__DeliveryAlertCategory__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__DeliveryAlertCategory__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 84, 84},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__DeliveryAlertCategory__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__DeliveryAlertCategory__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
