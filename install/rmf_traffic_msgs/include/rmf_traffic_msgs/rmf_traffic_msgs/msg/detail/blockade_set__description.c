// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/BlockadeSet.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/blockade_set__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__BlockadeSet__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8f, 0xae, 0x90, 0xbe, 0x4e, 0xa4, 0xd4, 0xa9,
      0x49, 0x21, 0xe7, 0xbf, 0x2a, 0xdb, 0xb0, 0x5a,
      0xba, 0xd3, 0xd7, 0x94, 0x4c, 0xca, 0x80, 0x6a,
      0xc5, 0xc5, 0x3f, 0x49, 0x2e, 0x97, 0x1c, 0x7d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_traffic_msgs/msg/detail/blockade_checkpoint__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_traffic_msgs__msg__BlockadeCheckpoint__EXPECTED_HASH = {1, {
    0x7f, 0x4e, 0x3d, 0x48, 0x9e, 0x64, 0xf2, 0x6f,
    0xfe, 0xb9, 0x0e, 0x49, 0x5e, 0xa4, 0x02, 0xda,
    0xd4, 0x4a, 0xed, 0xd2, 0x40, 0x5f, 0x95, 0x42,
    0x80, 0xa9, 0xe8, 0xb7, 0x58, 0x73, 0xca, 0xef,
  }};
#endif

static char rmf_traffic_msgs__msg__BlockadeSet__TYPE_NAME[] = "rmf_traffic_msgs/msg/BlockadeSet";
static char rmf_traffic_msgs__msg__BlockadeCheckpoint__TYPE_NAME[] = "rmf_traffic_msgs/msg/BlockadeCheckpoint";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__BlockadeSet__FIELD_NAME__participant[] = "participant";
static char rmf_traffic_msgs__msg__BlockadeSet__FIELD_NAME__reservation[] = "reservation";
static char rmf_traffic_msgs__msg__BlockadeSet__FIELD_NAME__radius[] = "radius";
static char rmf_traffic_msgs__msg__BlockadeSet__FIELD_NAME__path[] = "path";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__BlockadeSet__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__BlockadeSet__FIELD_NAME__participant, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__BlockadeSet__FIELD_NAME__reservation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__BlockadeSet__FIELD_NAME__radius, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__BlockadeSet__FIELD_NAME__path, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_traffic_msgs__msg__BlockadeCheckpoint__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__msg__BlockadeSet__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_traffic_msgs__msg__BlockadeCheckpoint__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__BlockadeSet__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__BlockadeSet__TYPE_NAME, 32, 32},
      {rmf_traffic_msgs__msg__BlockadeSet__FIELDS, 4, 4},
    },
    {rmf_traffic_msgs__msg__BlockadeSet__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_traffic_msgs__msg__BlockadeCheckpoint__EXPECTED_HASH, rmf_traffic_msgs__msg__BlockadeCheckpoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_traffic_msgs__msg__BlockadeCheckpoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "# The ID of the participant that is setting its path\n"
  "uint64 participant\n"
  "\n"
  "# The ID of the reservation that is being set\n"
  "uint64 reservation\n"
  "\n"
  "# The radius to inflate the path\n"
  "float64 radius\n"
  "\n"
  "# The path that is being reserved\n"
  "BlockadeCheckpoint[] path";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__BlockadeSet__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__BlockadeSet__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 249, 249},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__BlockadeSet__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__BlockadeSet__get_individual_type_description_source(NULL),
    sources[1] = *rmf_traffic_msgs__msg__BlockadeCheckpoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
