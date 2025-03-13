// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/Profile.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/profile__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__Profile__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xba, 0xb5, 0x43, 0x76, 0x67, 0x95, 0x2a, 0x08,
      0x49, 0x85, 0x74, 0x25, 0x59, 0xf4, 0x82, 0x48,
      0x86, 0xdd, 0xbd, 0x01, 0xd5, 0x94, 0x75, 0xc7,
      0x4c, 0xf8, 0x6c, 0x9c, 0x75, 0x1a, 0x7c, 0x01,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_traffic_msgs/msg/detail/convex_shape__functions.h"
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
static const rosidl_type_hash_t rmf_traffic_msgs__msg__ConvexShape__EXPECTED_HASH = {1, {
    0xb0, 0xb8, 0xe9, 0x28, 0x3b, 0x66, 0x25, 0x24,
    0x09, 0x44, 0x96, 0xa1, 0x4f, 0xed, 0x4c, 0x35,
    0x04, 0xd8, 0xc0, 0x3b, 0xc5, 0x1d, 0x7d, 0x5f,
    0x69, 0x19, 0x2a, 0x3a, 0x0f, 0xfe, 0x45, 0x76,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__ConvexShapeContext__EXPECTED_HASH = {1, {
    0x63, 0x4f, 0xfe, 0xd8, 0xb4, 0x71, 0xfe, 0x5a,
    0xc9, 0xc9, 0xb5, 0x40, 0xcd, 0xef, 0xea, 0x5f,
    0xad, 0xd1, 0xd5, 0x0d, 0x35, 0xdc, 0xdc, 0x80,
    0x03, 0x0c, 0xe1, 0xc4, 0x10, 0x4d, 0xd9, 0xf6,
  }};
#endif

static char rmf_traffic_msgs__msg__Profile__TYPE_NAME[] = "rmf_traffic_msgs/msg/Profile";
static char rmf_traffic_msgs__msg__Circle__TYPE_NAME[] = "rmf_traffic_msgs/msg/Circle";
static char rmf_traffic_msgs__msg__ConvexShape__TYPE_NAME[] = "rmf_traffic_msgs/msg/ConvexShape";
static char rmf_traffic_msgs__msg__ConvexShapeContext__TYPE_NAME[] = "rmf_traffic_msgs/msg/ConvexShapeContext";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__Profile__FIELD_NAME__footprint[] = "footprint";
static char rmf_traffic_msgs__msg__Profile__FIELD_NAME__vicinity[] = "vicinity";
static char rmf_traffic_msgs__msg__Profile__FIELD_NAME__shape_context[] = "shape_context";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__Profile__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__Profile__FIELD_NAME__footprint, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_traffic_msgs__msg__ConvexShape__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Profile__FIELD_NAME__vicinity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_traffic_msgs__msg__ConvexShape__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Profile__FIELD_NAME__shape_context, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_traffic_msgs__msg__ConvexShapeContext__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__msg__Profile__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_traffic_msgs__msg__Circle__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ConvexShape__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ConvexShapeContext__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__Profile__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__Profile__TYPE_NAME, 28, 28},
      {rmf_traffic_msgs__msg__Profile__FIELDS, 3, 3},
    },
    {rmf_traffic_msgs__msg__Profile__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Circle__EXPECTED_HASH, rmf_traffic_msgs__msg__Circle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_traffic_msgs__msg__Circle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ConvexShape__EXPECTED_HASH, rmf_traffic_msgs__msg__ConvexShape__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_traffic_msgs__msg__ConvexShape__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ConvexShapeContext__EXPECTED_HASH, rmf_traffic_msgs__msg__ConvexShapeContext__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_traffic_msgs__msg__ConvexShapeContext__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "# The shape that specifies the footprint of a schedule participant\n"
  "ConvexShape footprint\n"
  "\n"
  "# The shape that specifies the vicinity around a schedule participant\n"
  "ConvexShape vicinity\n"
  "\n"
  "# The buffer that contains the shape descriptions\n"
  "ConvexShapeContext shape_context";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__Profile__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__Profile__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 266, 266},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__Profile__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__Profile__get_individual_type_description_source(NULL),
    sources[1] = *rmf_traffic_msgs__msg__Circle__get_individual_type_description_source(NULL);
    sources[2] = *rmf_traffic_msgs__msg__ConvexShape__get_individual_type_description_source(NULL);
    sources[3] = *rmf_traffic_msgs__msg__ConvexShapeContext__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
