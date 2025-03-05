// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/DeliveryAlertTier.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/delivery_alert_tier__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__DeliveryAlertTier__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0xe9, 0x7c, 0x01, 0x6b, 0x19, 0x15, 0x4b,
      0x26, 0x78, 0xd0, 0x1d, 0xd8, 0x87, 0x3d, 0xc2,
      0xff, 0x41, 0xd0, 0x49, 0xdf, 0x98, 0x30, 0xa5,
      0x7a, 0x2e, 0x53, 0xd7, 0x77, 0xa1, 0xbb, 0xa2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_fleet_msgs__msg__DeliveryAlertTier__TYPE_NAME[] = "rmf_fleet_msgs/msg/DeliveryAlertTier";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__DeliveryAlertTier__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__DeliveryAlertTier__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__DeliveryAlertTier__FIELD_NAME__value, 5, 5},
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
rmf_fleet_msgs__msg__DeliveryAlertTier__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__DeliveryAlertTier__TYPE_NAME, 36, 36},
      {rmf_fleet_msgs__msg__DeliveryAlertTier__FIELDS, 1, 1},
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
  "uint32 WARNING=0\n"
  "uint32 ERROR=1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__DeliveryAlertTier__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__DeliveryAlertTier__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 45, 45},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__DeliveryAlertTier__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__DeliveryAlertTier__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
