// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/ShapeContext.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/shape_context__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__ShapeContext__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6b, 0x37, 0xf4, 0x28, 0xfb, 0xd6, 0x5d, 0xe3,
      0x6e, 0xd7, 0xc4, 0x2f, 0xfe, 0x68, 0xdd, 0x33,
      0xbb, 0xbb, 0x86, 0x34, 0x7f, 0xdb, 0x9d, 0x3d,
      0xe9, 0xde, 0xca, 0x8d, 0x39, 0x25, 0x4a, 0x85,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_traffic_msgs/msg/detail/circle__functions.h"
#include "rmf_traffic_msgs/msg/detail/convex_shape_context__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_traffic_msgs__msg__Circle__EXPECTED_HASH = {1, {
    0xd0, 0x12, 0x71, 0xf4, 0x8e, 0xa9, 0x4a, 0x8a,
    0xa4, 0x93, 0x38, 0xc5, 0x5f, 0x66, 0xfc, 0xda,
    0x71, 0xb4, 0xe2, 0xa6, 0x02, 0x34, 0x6b, 0xce,
    0x3b, 0xcb, 0x3a, 0x24, 0xd8, 0xca, 0xa1, 0x46,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__ConvexShapeContext__EXPECTED_HASH = {1, {
    0x63, 0x4f, 0xfe, 0xd8, 0xb4, 0x71, 0xfe, 0x5a,
    0xc9, 0xc9, 0xb5, 0x40, 0xcd, 0xef, 0xea, 0x5f,
    0xad, 0xd1, 0xd5, 0x0d, 0x35, 0xdc, 0xdc, 0x80,
    0x03, 0x0c, 0xe1, 0xc4, 0x10, 0x4d, 0xd9, 0xf6,
  }};
#endif

static char rmf_traffic_msgs__msg__ShapeContext__TYPE_NAME[] = "rmf_traffic_msgs/msg/ShapeContext";
static char rmf_traffic_msgs__msg__Circle__TYPE_NAME[] = "rmf_traffic_msgs/msg/Circle";
static char rmf_traffic_msgs__msg__ConvexShapeContext__TYPE_NAME[] = "rmf_traffic_msgs/msg/ConvexShapeContext";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__ShapeContext__FIELD_NAME__convex_shapes[] = "convex_shapes";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__ShapeContext__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__ShapeContext__FIELD_NAME__convex_shapes, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_traffic_msgs__msg__ConvexShapeContext__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__msg__ShapeContext__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_traffic_msgs__msg__Circle__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ConvexShapeContext__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__ShapeContext__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__ShapeContext__TYPE_NAME, 33, 33},
      {rmf_traffic_msgs__msg__ShapeContext__FIELDS, 1, 1},
    },
    {rmf_traffic_msgs__msg__ShapeContext__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Circle__EXPECTED_HASH, rmf_traffic_msgs__msg__Circle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_traffic_msgs__msg__Circle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ConvexShapeContext__EXPECTED_HASH, rmf_traffic_msgs__msg__ConvexShapeContext__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_traffic_msgs__msg__ConvexShapeContext__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "# The convex shape descriptions that are available\n"
  "ConvexShapeContext convex_shapes\n"
  "\n"
  "# TODO(MXG): Implement the SimplePolygon message\n"
  "# SimplePolygon[] simple_polygons";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__ShapeContext__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__ShapeContext__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 169, 169},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__ShapeContext__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__ShapeContext__get_individual_type_description_source(NULL),
    sources[1] = *rmf_traffic_msgs__msg__Circle__get_individual_type_description_source(NULL);
    sources[2] = *rmf_traffic_msgs__msg__ConvexShapeContext__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
