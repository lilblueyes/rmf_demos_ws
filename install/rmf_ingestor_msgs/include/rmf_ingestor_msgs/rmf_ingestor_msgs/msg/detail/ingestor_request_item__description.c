// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_ingestor_msgs:msg/IngestorRequestItem.idl
// generated code does not contain a copyright notice

#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
const rosidl_type_hash_t *
rmf_ingestor_msgs__msg__IngestorRequestItem__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x93, 0x3e, 0x04, 0xb4, 0x3b, 0x65, 0xff, 0x72,
      0x16, 0x3f, 0xc5, 0x2d, 0x1b, 0x09, 0x4a, 0xf6,
      0xd8, 0x93, 0xd2, 0x14, 0x32, 0x56, 0xac, 0x85,
      0x9a, 0x68, 0x91, 0xa2, 0xe2, 0x5b, 0x3d, 0xa7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_ingestor_msgs__msg__IngestorRequestItem__TYPE_NAME[] = "rmf_ingestor_msgs/msg/IngestorRequestItem";

// Define type names, field names, and default values
static char rmf_ingestor_msgs__msg__IngestorRequestItem__FIELD_NAME__type_guid[] = "type_guid";
static char rmf_ingestor_msgs__msg__IngestorRequestItem__FIELD_NAME__quantity[] = "quantity";
static char rmf_ingestor_msgs__msg__IngestorRequestItem__FIELD_NAME__compartment_name[] = "compartment_name";

static rosidl_runtime_c__type_description__Field rmf_ingestor_msgs__msg__IngestorRequestItem__FIELDS[] = {
  {
    {rmf_ingestor_msgs__msg__IngestorRequestItem__FIELD_NAME__type_guid, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_ingestor_msgs__msg__IngestorRequestItem__FIELD_NAME__quantity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_ingestor_msgs__msg__IngestorRequestItem__FIELD_NAME__compartment_name, 16, 16},
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
rmf_ingestor_msgs__msg__IngestorRequestItem__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_ingestor_msgs__msg__IngestorRequestItem__TYPE_NAME, 41, 41},
      {rmf_ingestor_msgs__msg__IngestorRequestItem__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string type_guid\n"
  "int32 quantity\n"
  "string compartment_name";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_ingestor_msgs__msg__IngestorRequestItem__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_ingestor_msgs__msg__IngestorRequestItem__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 56, 56},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_ingestor_msgs__msg__IngestorRequestItem__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_ingestor_msgs__msg__IngestorRequestItem__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
