// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_building_map_msgs:msg/Param.idl
// generated code does not contain a copyright notice

#include "rmf_building_map_msgs/msg/detail/param__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_building_map_msgs
const rosidl_type_hash_t *
rmf_building_map_msgs__msg__Param__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa7, 0x25, 0x79, 0x77, 0x8c, 0x6d, 0x0c, 0x56,
      0xef, 0x07, 0xb6, 0x26, 0x64, 0xe5, 0xa8, 0xb1,
      0xa9, 0x4c, 0x0d, 0x74, 0x2f, 0xd8, 0x65, 0xb6,
      0x5d, 0xcb, 0x40, 0x47, 0x2b, 0x14, 0x0a, 0x59,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_building_map_msgs__msg__Param__TYPE_NAME[] = "rmf_building_map_msgs/msg/Param";

// Define type names, field names, and default values
static char rmf_building_map_msgs__msg__Param__FIELD_NAME__name[] = "name";
static char rmf_building_map_msgs__msg__Param__FIELD_NAME__type[] = "type";
static char rmf_building_map_msgs__msg__Param__FIELD_NAME__value_int[] = "value_int";
static char rmf_building_map_msgs__msg__Param__FIELD_NAME__value_float[] = "value_float";
static char rmf_building_map_msgs__msg__Param__FIELD_NAME__value_string[] = "value_string";
static char rmf_building_map_msgs__msg__Param__FIELD_NAME__value_bool[] = "value_bool";

static rosidl_runtime_c__type_description__Field rmf_building_map_msgs__msg__Param__FIELDS[] = {
  {
    {rmf_building_map_msgs__msg__Param__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Param__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Param__FIELD_NAME__value_int, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Param__FIELD_NAME__value_float, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Param__FIELD_NAME__value_string, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Param__FIELD_NAME__value_bool, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_building_map_msgs__msg__Param__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_building_map_msgs__msg__Param__TYPE_NAME, 31, 31},
      {rmf_building_map_msgs__msg__Param__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "\n"
  "uint32 type\n"
  "uint32 TYPE_UNDEFINED=0\n"
  "uint32 TYPE_STRING=1\n"
  "uint32 TYPE_INT=2\n"
  "uint32 TYPE_DOUBLE=3\n"
  "uint32 TYPE_BOOL=4\n"
  "\n"
  "int32 value_int\n"
  "float32 value_float\n"
  "string value_string\n"
  "bool value_bool";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_building_map_msgs__msg__Param__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_building_map_msgs__msg__Param__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 201, 201},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_building_map_msgs__msg__Param__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_building_map_msgs__msg__Param__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
