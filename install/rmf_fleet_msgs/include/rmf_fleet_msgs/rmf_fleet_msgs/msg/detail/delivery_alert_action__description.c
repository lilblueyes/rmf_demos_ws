// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/DeliveryAlertAction.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/delivery_alert_action__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__DeliveryAlertAction__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0x5b, 0x99, 0x63, 0x4c, 0xf0, 0x1f, 0x02,
      0xf7, 0x24, 0xed, 0x15, 0xf8, 0x5b, 0x5c, 0xd5,
      0x0d, 0x4f, 0x73, 0x48, 0x0f, 0xf2, 0xa9, 0x94,
      0x5c, 0xeb, 0x8a, 0xc5, 0xb9, 0x17, 0xf7, 0x89,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_fleet_msgs__msg__DeliveryAlertAction__TYPE_NAME[] = "rmf_fleet_msgs/msg/DeliveryAlertAction";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__DeliveryAlertAction__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__DeliveryAlertAction__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__DeliveryAlertAction__FIELD_NAME__value, 5, 5},
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
rmf_fleet_msgs__msg__DeliveryAlertAction__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__DeliveryAlertAction__TYPE_NAME, 38, 38},
      {rmf_fleet_msgs__msg__DeliveryAlertAction__FIELDS, 1, 1},
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
  "uint32 WAITING=0\n"
  "uint32 CANCEL=1\n"
  "uint32 OVERRIDE=2\n"
  "uint32 RESUME=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__DeliveryAlertAction__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__DeliveryAlertAction__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 80, 80},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__DeliveryAlertAction__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__DeliveryAlertAction__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
