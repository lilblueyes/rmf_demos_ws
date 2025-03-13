// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/DestinationRequest.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/destination_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__DestinationRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x56, 0x8d, 0x79, 0x13, 0xe8, 0x70, 0xac, 0x8a,
      0x04, 0x8d, 0x79, 0x60, 0xdc, 0x7c, 0x05, 0xce,
      0x82, 0xfd, 0x67, 0x30, 0xc7, 0x74, 0xbb, 0xf2,
      0x24, 0xac, 0x12, 0x8e, 0xd8, 0x2c, 0x31, 0x93,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "rmf_fleet_msgs/msg/detail/location__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rmf_fleet_msgs__msg__Location__EXPECTED_HASH = {1, {
    0x61, 0x36, 0xf1, 0xfc, 0x14, 0xb8, 0x96, 0xb5,
    0x72, 0xc3, 0x47, 0x46, 0xc5, 0x5d, 0xbb, 0xfd,
    0x88, 0x62, 0xe3, 0xc5, 0x61, 0xad, 0x5c, 0x95,
    0x7e, 0xe8, 0xb0, 0xc1, 0x16, 0xa0, 0xe8, 0xdf,
  }};
#endif

static char rmf_fleet_msgs__msg__DestinationRequest__TYPE_NAME[] = "rmf_fleet_msgs/msg/DestinationRequest";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_fleet_msgs__msg__Location__TYPE_NAME[] = "rmf_fleet_msgs/msg/Location";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__DestinationRequest__FIELD_NAME__fleet_name[] = "fleet_name";
static char rmf_fleet_msgs__msg__DestinationRequest__FIELD_NAME__robot_name[] = "robot_name";
static char rmf_fleet_msgs__msg__DestinationRequest__FIELD_NAME__destination[] = "destination";
static char rmf_fleet_msgs__msg__DestinationRequest__FIELD_NAME__task_id[] = "task_id";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__DestinationRequest__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__DestinationRequest__FIELD_NAME__fleet_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__DestinationRequest__FIELD_NAME__robot_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__DestinationRequest__FIELD_NAME__destination, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_fleet_msgs__msg__Location__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__DestinationRequest__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_fleet_msgs__msg__DestinationRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__Location__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_fleet_msgs__msg__DestinationRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__DestinationRequest__TYPE_NAME, 37, 37},
      {rmf_fleet_msgs__msg__DestinationRequest__FIELDS, 4, 4},
    },
    {rmf_fleet_msgs__msg__DestinationRequest__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_fleet_msgs__msg__Location__EXPECTED_HASH, rmf_fleet_msgs__msg__Location__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_fleet_msgs__msg__Location__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string fleet_name\n"
  "string robot_name\n"
  "Location destination\n"
  "\n"
  "# task_id must be copied into future RobotState messages\n"
  "string task_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__DestinationRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__DestinationRequest__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 130, 130},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__DestinationRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__DestinationRequest__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_fleet_msgs__msg__Location__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
