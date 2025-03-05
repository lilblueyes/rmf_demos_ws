// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_building_map_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#include "rmf_building_map_msgs/msg/detail/graph__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_building_map_msgs
const rosidl_type_hash_t *
rmf_building_map_msgs__msg__Graph__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0x98, 0x5e, 0x6c, 0x47, 0xf6, 0x05, 0x8a,
      0xd1, 0xd6, 0xc8, 0x22, 0x6d, 0x76, 0x35, 0x99,
      0xbb, 0x0a, 0x0d, 0x39, 0x6a, 0xa5, 0xfa, 0x7b,
      0x33, 0x3b, 0x6e, 0x38, 0xdd, 0x88, 0x37, 0x28,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_building_map_msgs/msg/detail/param__functions.h"
#include "rmf_building_map_msgs/msg/detail/graph_node__functions.h"
#include "rmf_building_map_msgs/msg/detail/graph_edge__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_building_map_msgs__msg__GraphEdge__EXPECTED_HASH = {1, {
    0x0a, 0x58, 0x69, 0x59, 0xbb, 0xd7, 0x7b, 0x6d,
    0x78, 0xc0, 0x3d, 0xfe, 0x7c, 0xcd, 0x6c, 0xa9,
    0xae, 0x47, 0xb5, 0x71, 0x34, 0xdf, 0x43, 0x9c,
    0xaa, 0xf6, 0x76, 0xcc, 0x0f, 0x02, 0x5a, 0x12,
  }};
static const rosidl_type_hash_t rmf_building_map_msgs__msg__GraphNode__EXPECTED_HASH = {1, {
    0xcd, 0x8d, 0x66, 0xc0, 0x32, 0xb1, 0x9e, 0xe0,
    0x8c, 0xd2, 0x50, 0x66, 0x38, 0xf4, 0xf6, 0x13,
    0x41, 0x0d, 0x77, 0xc4, 0xf8, 0x85, 0x00, 0x66,
    0x95, 0xf5, 0xd4, 0x2b, 0x8e, 0x71, 0x38, 0xaf,
  }};
static const rosidl_type_hash_t rmf_building_map_msgs__msg__Param__EXPECTED_HASH = {1, {
    0xa7, 0x25, 0x79, 0x77, 0x8c, 0x6d, 0x0c, 0x56,
    0xef, 0x07, 0xb6, 0x26, 0x64, 0xe5, 0xa8, 0xb1,
    0xa9, 0x4c, 0x0d, 0x74, 0x2f, 0xd8, 0x65, 0xb6,
    0x5d, 0xcb, 0x40, 0x47, 0x2b, 0x14, 0x0a, 0x59,
  }};
#endif

static char rmf_building_map_msgs__msg__Graph__TYPE_NAME[] = "rmf_building_map_msgs/msg/Graph";
static char rmf_building_map_msgs__msg__GraphEdge__TYPE_NAME[] = "rmf_building_map_msgs/msg/GraphEdge";
static char rmf_building_map_msgs__msg__GraphNode__TYPE_NAME[] = "rmf_building_map_msgs/msg/GraphNode";
static char rmf_building_map_msgs__msg__Param__TYPE_NAME[] = "rmf_building_map_msgs/msg/Param";

// Define type names, field names, and default values
static char rmf_building_map_msgs__msg__Graph__FIELD_NAME__name[] = "name";
static char rmf_building_map_msgs__msg__Graph__FIELD_NAME__vertices[] = "vertices";
static char rmf_building_map_msgs__msg__Graph__FIELD_NAME__edges[] = "edges";
static char rmf_building_map_msgs__msg__Graph__FIELD_NAME__params[] = "params";

static rosidl_runtime_c__type_description__Field rmf_building_map_msgs__msg__Graph__FIELDS[] = {
  {
    {rmf_building_map_msgs__msg__Graph__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Graph__FIELD_NAME__vertices, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_building_map_msgs__msg__GraphNode__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Graph__FIELD_NAME__edges, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_building_map_msgs__msg__GraphEdge__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Graph__FIELD_NAME__params, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_building_map_msgs__msg__Param__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_building_map_msgs__msg__Graph__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_building_map_msgs__msg__GraphEdge__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__GraphNode__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Param__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_building_map_msgs__msg__Graph__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_building_map_msgs__msg__Graph__TYPE_NAME, 31, 31},
      {rmf_building_map_msgs__msg__Graph__FIELDS, 4, 4},
    },
    {rmf_building_map_msgs__msg__Graph__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_building_map_msgs__msg__GraphEdge__EXPECTED_HASH, rmf_building_map_msgs__msg__GraphEdge__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_building_map_msgs__msg__GraphEdge__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__GraphNode__EXPECTED_HASH, rmf_building_map_msgs__msg__GraphNode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_building_map_msgs__msg__GraphNode__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__Param__EXPECTED_HASH, rmf_building_map_msgs__msg__Param__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_building_map_msgs__msg__Param__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "GraphNode[] vertices\n"
  "GraphEdge[] edges\n"
  "Param[] params";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_building_map_msgs__msg__Graph__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_building_map_msgs__msg__Graph__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 66, 66},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_building_map_msgs__msg__Graph__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_building_map_msgs__msg__Graph__get_individual_type_description_source(NULL),
    sources[1] = *rmf_building_map_msgs__msg__GraphEdge__get_individual_type_description_source(NULL);
    sources[2] = *rmf_building_map_msgs__msg__GraphNode__get_individual_type_description_source(NULL);
    sources[3] = *rmf_building_map_msgs__msg__Param__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
