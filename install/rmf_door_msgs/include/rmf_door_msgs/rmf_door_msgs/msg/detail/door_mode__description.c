// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_door_msgs:msg/DoorMode.idl
// generated code does not contain a copyright notice

#include "rmf_door_msgs/msg/detail/door_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_door_msgs
const rosidl_type_hash_t *
rmf_door_msgs__msg__DoorMode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x02, 0xc8, 0x34, 0xbb, 0x83, 0xaa, 0x3c, 0xa1,
      0xfb, 0xd8, 0xcf, 0x4f, 0x61, 0xa1, 0xd1, 0xae,
      0x4d, 0xc8, 0x22, 0x71, 0x11, 0xbd, 0xe3, 0x82,
      0x0d, 0xda, 0x58, 0x0f, 0x8c, 0x2c, 0x64, 0x29,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_door_msgs__msg__DoorMode__TYPE_NAME[] = "rmf_door_msgs/msg/DoorMode";

// Define type names, field names, and default values
static char rmf_door_msgs__msg__DoorMode__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field rmf_door_msgs__msg__DoorMode__FIELDS[] = {
  {
    {rmf_door_msgs__msg__DoorMode__FIELD_NAME__value, 5, 5},
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
rmf_door_msgs__msg__DoorMode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_door_msgs__msg__DoorMode__TYPE_NAME, 26, 26},
      {rmf_door_msgs__msg__DoorMode__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The DoorMode message captures the \"mode\" of an automatic door controller.\n"
  "# Most door controllers default to running in \"closed\" mode, and transition\n"
  "# through some sort of \"moving\" mode until reaching the \"open\" mode.\n"
  "\n"
  "uint32 value\n"
  "\n"
  "# \"value\" must be one of the following enumerations:\n"
  "uint32 MODE_CLOSED=0\n"
  "uint32 MODE_MOVING=1\n"
  "uint32 MODE_OPEN=2\n"
  "uint32 MODE_OFFLINE=3\n"
  "uint32 MODE_UNKNOWN=4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_door_msgs__msg__DoorMode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_door_msgs__msg__DoorMode__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 394, 394},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_door_msgs__msg__DoorMode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_door_msgs__msg__DoorMode__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
