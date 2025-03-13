// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_door_msgs:msg/DoorState.idl
// generated code does not contain a copyright notice

#include "rmf_door_msgs/msg/detail/door_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_door_msgs
const rosidl_type_hash_t *
rmf_door_msgs__msg__DoorState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1c, 0xb9, 0xd9, 0x8f, 0x19, 0xc6, 0x6c, 0xbc,
      0x1f, 0x9a, 0xcb, 0x16, 0xfa, 0xaa, 0x90, 0xc6,
      0x3a, 0x7b, 0x65, 0x02, 0x1b, 0xd2, 0x6c, 0x69,
      0x95, 0x8d, 0x96, 0xf0, 0xa0, 0x38, 0x8b, 0xb2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_door_msgs/msg/detail/door_mode__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rmf_door_msgs__msg__DoorMode__EXPECTED_HASH = {1, {
    0x02, 0xc8, 0x34, 0xbb, 0x83, 0xaa, 0x3c, 0xa1,
    0xfb, 0xd8, 0xcf, 0x4f, 0x61, 0xa1, 0xd1, 0xae,
    0x4d, 0xc8, 0x22, 0x71, 0x11, 0xbd, 0xe3, 0x82,
    0x0d, 0xda, 0x58, 0x0f, 0x8c, 0x2c, 0x64, 0x29,
  }};
#endif

static char rmf_door_msgs__msg__DoorState__TYPE_NAME[] = "rmf_door_msgs/msg/DoorState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_door_msgs__msg__DoorMode__TYPE_NAME[] = "rmf_door_msgs/msg/DoorMode";

// Define type names, field names, and default values
static char rmf_door_msgs__msg__DoorState__FIELD_NAME__door_time[] = "door_time";
static char rmf_door_msgs__msg__DoorState__FIELD_NAME__door_name[] = "door_name";
static char rmf_door_msgs__msg__DoorState__FIELD_NAME__current_mode[] = "current_mode";

static rosidl_runtime_c__type_description__Field rmf_door_msgs__msg__DoorState__FIELDS[] = {
  {
    {rmf_door_msgs__msg__DoorState__FIELD_NAME__door_time, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_door_msgs__msg__DoorState__FIELD_NAME__door_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_door_msgs__msg__DoorState__FIELD_NAME__current_mode, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_door_msgs__msg__DoorMode__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_door_msgs__msg__DoorState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_door_msgs__msg__DoorMode__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_door_msgs__msg__DoorState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_door_msgs__msg__DoorState__TYPE_NAME, 27, 27},
      {rmf_door_msgs__msg__DoorState__FIELDS, 3, 3},
    },
    {rmf_door_msgs__msg__DoorState__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_door_msgs__msg__DoorMode__EXPECTED_HASH, rmf_door_msgs__msg__DoorMode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_door_msgs__msg__DoorMode__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time door_time\n"
  "string door_name\n"
  "DoorMode current_mode";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_door_msgs__msg__DoorState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_door_msgs__msg__DoorState__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 73, 73},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_door_msgs__msg__DoorState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_door_msgs__msg__DoorState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_door_msgs__msg__DoorMode__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
