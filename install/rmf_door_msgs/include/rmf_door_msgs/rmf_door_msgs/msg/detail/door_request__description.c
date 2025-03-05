// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_door_msgs:msg/DoorRequest.idl
// generated code does not contain a copyright notice

#include "rmf_door_msgs/msg/detail/door_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_door_msgs
const rosidl_type_hash_t *
rmf_door_msgs__msg__DoorRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x31, 0x45, 0xb5, 0xd9, 0x70, 0x64, 0xf8, 0x9b,
      0x0a, 0x0d, 0xb9, 0x53, 0xb8, 0x16, 0x7d, 0xde,
      0xee, 0xfb, 0xc2, 0x91, 0x4c, 0x24, 0xa6, 0x03,
      0xc3, 0xbd, 0xc5, 0x1f, 0x12, 0x2f, 0x14, 0x3e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "rmf_door_msgs/msg/detail/door_mode__functions.h"

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

static char rmf_door_msgs__msg__DoorRequest__TYPE_NAME[] = "rmf_door_msgs/msg/DoorRequest";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_door_msgs__msg__DoorMode__TYPE_NAME[] = "rmf_door_msgs/msg/DoorMode";

// Define type names, field names, and default values
static char rmf_door_msgs__msg__DoorRequest__FIELD_NAME__request_time[] = "request_time";
static char rmf_door_msgs__msg__DoorRequest__FIELD_NAME__requester_id[] = "requester_id";
static char rmf_door_msgs__msg__DoorRequest__FIELD_NAME__door_name[] = "door_name";
static char rmf_door_msgs__msg__DoorRequest__FIELD_NAME__requested_mode[] = "requested_mode";

static rosidl_runtime_c__type_description__Field rmf_door_msgs__msg__DoorRequest__FIELDS[] = {
  {
    {rmf_door_msgs__msg__DoorRequest__FIELD_NAME__request_time, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_door_msgs__msg__DoorRequest__FIELD_NAME__requester_id, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_door_msgs__msg__DoorRequest__FIELD_NAME__door_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_door_msgs__msg__DoorRequest__FIELD_NAME__requested_mode, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_door_msgs__msg__DoorMode__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_door_msgs__msg__DoorRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
rmf_door_msgs__msg__DoorRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_door_msgs__msg__DoorRequest__TYPE_NAME, 29, 29},
      {rmf_door_msgs__msg__DoorRequest__FIELDS, 4, 4},
    },
    {rmf_door_msgs__msg__DoorRequest__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "builtin_interfaces/Time request_time\n"
  "string requester_id\n"
  "string door_name\n"
  "DoorMode requested_mode";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_door_msgs__msg__DoorRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_door_msgs__msg__DoorRequest__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 98, 98},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_door_msgs__msg__DoorRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_door_msgs__msg__DoorRequest__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_door_msgs__msg__DoorMode__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
