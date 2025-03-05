// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/BlockadeStatus.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/blockade_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__BlockadeStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4d, 0x6a, 0x0c, 0x47, 0xfa, 0xd4, 0x83, 0x05,
      0xce, 0xe6, 0x0f, 0xcf, 0x06, 0x68, 0xd2, 0x42,
      0x89, 0xd2, 0x74, 0x6e, 0x46, 0x3c, 0x85, 0xc6,
      0xe4, 0x5a, 0x71, 0xc0, 0x47, 0xfa, 0x8c, 0x9c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__BlockadeStatus__TYPE_NAME[] = "rmf_traffic_msgs/msg/BlockadeStatus";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__BlockadeStatus__FIELD_NAME__participant[] = "participant";
static char rmf_traffic_msgs__msg__BlockadeStatus__FIELD_NAME__reservation[] = "reservation";
static char rmf_traffic_msgs__msg__BlockadeStatus__FIELD_NAME__any_ready[] = "any_ready";
static char rmf_traffic_msgs__msg__BlockadeStatus__FIELD_NAME__last_ready[] = "last_ready";
static char rmf_traffic_msgs__msg__BlockadeStatus__FIELD_NAME__last_reached[] = "last_reached";
static char rmf_traffic_msgs__msg__BlockadeStatus__FIELD_NAME__assignment_begin[] = "assignment_begin";
static char rmf_traffic_msgs__msg__BlockadeStatus__FIELD_NAME__assignment_end[] = "assignment_end";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__BlockadeStatus__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__BlockadeStatus__FIELD_NAME__participant, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__BlockadeStatus__FIELD_NAME__reservation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__BlockadeStatus__FIELD_NAME__any_ready, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__BlockadeStatus__FIELD_NAME__last_ready, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__BlockadeStatus__FIELD_NAME__last_reached, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__BlockadeStatus__FIELD_NAME__assignment_begin, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__BlockadeStatus__FIELD_NAME__assignment_end, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__BlockadeStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__BlockadeStatus__TYPE_NAME, 35, 35},
      {rmf_traffic_msgs__msg__BlockadeStatus__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "# The Participant ID that this status is for\n"
  "uint64 participant\n"
  "\n"
  "# The latest reservation known for this participant\n"
  "uint64 reservation\n"
  "\n"
  "# This is true if and only if the moderator has ever received a ready notice\n"
  "# from the participant\n"
  "bool any_ready\n"
  "\n"
  "# If any_ready is true, then this is the most recent ready checkpoint that the\n"
  "# moderator knows about. If any_ready is false, then this field is meaningless.\n"
  "uint64 last_ready\n"
  "\n"
  "# The last checkpoint that the moderator knows of the participant reaching\n"
  "uint64 last_reached\n"
  "\n"
  "# The first checkpoint that's currently blockaded for this participant\n"
  "uint64 assignment_begin\n"
  "\n"
  "# The last checkpoint that's currently blockaded for this participant\n"
  "uint64 assignment_end";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__BlockadeStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__BlockadeStatus__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 716, 716},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__BlockadeStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__BlockadeStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
