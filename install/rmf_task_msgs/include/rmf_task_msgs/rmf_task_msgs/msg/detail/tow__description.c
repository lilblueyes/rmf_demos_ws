// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/Tow.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/tow__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__Tow__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5c, 0x2c, 0xbf, 0x45, 0xc1, 0x88, 0xa0, 0x24,
      0xb2, 0x4b, 0x9c, 0x58, 0xf1, 0x09, 0xe2, 0xc3,
      0x65, 0x4c, 0xc1, 0xee, 0x01, 0x59, 0x73, 0x72,
      0x13, 0x84, 0x41, 0x19, 0x4d, 0x7e, 0x7e, 0x2e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_task_msgs__msg__Tow__TYPE_NAME[] = "rmf_task_msgs/msg/Tow";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__Tow__FIELD_NAME__task_id[] = "task_id";
static char rmf_task_msgs__msg__Tow__FIELD_NAME__object_type[] = "object_type";
static char rmf_task_msgs__msg__Tow__FIELD_NAME__is_object_id_known[] = "is_object_id_known";
static char rmf_task_msgs__msg__Tow__FIELD_NAME__object_id[] = "object_id";
static char rmf_task_msgs__msg__Tow__FIELD_NAME__pickup_place_name[] = "pickup_place_name";
static char rmf_task_msgs__msg__Tow__FIELD_NAME__is_dropoff_place_known[] = "is_dropoff_place_known";
static char rmf_task_msgs__msg__Tow__FIELD_NAME__dropoff_place_name[] = "dropoff_place_name";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__Tow__FIELDS[] = {
  {
    {rmf_task_msgs__msg__Tow__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Tow__FIELD_NAME__object_type, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Tow__FIELD_NAME__is_object_id_known, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Tow__FIELD_NAME__object_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Tow__FIELD_NAME__pickup_place_name, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Tow__FIELD_NAME__is_dropoff_place_known, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Tow__FIELD_NAME__dropoff_place_name, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__msg__Tow__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__Tow__TYPE_NAME, 21, 21},
      {rmf_task_msgs__msg__Tow__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# task_id is intended to be a pseudo-random string generated\n"
  "# by the caller which can be used to identify this task as it\n"
  "# moves between the queues to completion (or failure).\n"
  "string task_id\n"
  "\n"
  "string object_type\n"
  "\n"
  "bool is_object_id_known\n"
  "string object_id\n"
  "\n"
  "string pickup_place_name\n"
  "\n"
  "bool is_dropoff_place_known\n"
  "string dropoff_place_name";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__Tow__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__Tow__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 336, 336},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__Tow__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__Tow__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
