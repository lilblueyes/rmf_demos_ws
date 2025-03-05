// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_building_map_msgs:msg/Door.idl
// generated code does not contain a copyright notice

#include "rmf_building_map_msgs/msg/detail/door__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_building_map_msgs
const rosidl_type_hash_t *
rmf_building_map_msgs__msg__Door__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7b, 0xee, 0xbf, 0x1d, 0x0e, 0x1b, 0xb6, 0xdd,
      0x28, 0x8a, 0x03, 0x47, 0x06, 0x7c, 0x1a, 0xda,
      0x63, 0x2d, 0xdc, 0x3e, 0xd7, 0x82, 0xa4, 0xb0,
      0xa6, 0x04, 0xff, 0x24, 0x2f, 0x0b, 0x63, 0xaa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_building_map_msgs__msg__Door__TYPE_NAME[] = "rmf_building_map_msgs/msg/Door";

// Define type names, field names, and default values
static char rmf_building_map_msgs__msg__Door__FIELD_NAME__name[] = "name";
static char rmf_building_map_msgs__msg__Door__FIELD_NAME__v1_x[] = "v1_x";
static char rmf_building_map_msgs__msg__Door__FIELD_NAME__v1_y[] = "v1_y";
static char rmf_building_map_msgs__msg__Door__FIELD_NAME__v2_x[] = "v2_x";
static char rmf_building_map_msgs__msg__Door__FIELD_NAME__v2_y[] = "v2_y";
static char rmf_building_map_msgs__msg__Door__FIELD_NAME__door_type[] = "door_type";
static char rmf_building_map_msgs__msg__Door__FIELD_NAME__motion_range[] = "motion_range";
static char rmf_building_map_msgs__msg__Door__FIELD_NAME__motion_direction[] = "motion_direction";

static rosidl_runtime_c__type_description__Field rmf_building_map_msgs__msg__Door__FIELDS[] = {
  {
    {rmf_building_map_msgs__msg__Door__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Door__FIELD_NAME__v1_x, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Door__FIELD_NAME__v1_y, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Door__FIELD_NAME__v2_x, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Door__FIELD_NAME__v2_y, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Door__FIELD_NAME__door_type, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Door__FIELD_NAME__motion_range, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Door__FIELD_NAME__motion_direction, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_building_map_msgs__msg__Door__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_building_map_msgs__msg__Door__TYPE_NAME, 30, 30},
      {rmf_building_map_msgs__msg__Door__FIELDS, 8, 8},
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
  "# CONVENTIONS\n"
  "# ===========\n"
  "# single hinge doors:\n"
  "#   * hinge is located at (v1_x, v1_y)\n"
  "#   * door extends till (v2_x, v2_y)\n"
  "#   * motion_range = door swing range in DEGREES\n"
  "#   * there are two possible motions: clockwise and anti-clockwise\n"
  "#     selected by the motion_direction parameter, which is +1 or -1\n"
  "#\n"
  "# double hinge doors:\n"
  "#   * hinges are located at both (v1_x, v1_y) and (v2_x, v2_y)\n"
  "#   * motion range = door swing ranges in DEGREES (assume symmetric)\n"
  "#   * same motion-direction selection as single hinge\n"
  "#\n"
  "# single sliding doors:\n"
  "#   * the door slides from (v2_x, v2_y) towards (v1_x, v1_y)\n"
  "#   * range of motion is entire distance from v2->v1. No need to specify.\n"
  "#\n"
  "# double sliding doors:\n"
  "#   * door panels slide from the centerpoint of v1<->v2 towards v1 and v2\n"
  "#\n"
  "# single/double telescoping doors:\n"
  "#   * common in elevators; same parameters as sliding doors; they just\n"
  "#     open/close faster and take up less space inside the wall.\n"
  "\n"
  "float32 v1_x\n"
  "float32 v1_y\n"
  "\n"
  "float32 v2_x\n"
  "float32 v2_y\n"
  "\n"
  "uint8 door_type\n"
  "uint8 DOOR_TYPE_UNDEFINED=0\n"
  "uint8 DOOR_TYPE_SINGLE_SLIDING=1\n"
  "uint8 DOOR_TYPE_DOUBLE_SLIDING=2\n"
  "uint8 DOOR_TYPE_SINGLE_TELESCOPE=3\n"
  "uint8 DOOR_TYPE_DOUBLE_TELESCOPE=4\n"
  "uint8 DOOR_TYPE_SINGLE_SWING=5\n"
  "uint8 DOOR_TYPE_DOUBLE_SWING=6\n"
  "\n"
  "float32 motion_range\n"
  "int32 motion_direction";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_building_map_msgs__msg__Door__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_building_map_msgs__msg__Door__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1308, 1308},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_building_map_msgs__msg__Door__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_building_map_msgs__msg__Door__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
