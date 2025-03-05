// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_site_map_msgs:msg/SiteMap.idl
// generated code does not contain a copyright notice

#include "rmf_site_map_msgs/msg/detail/site_map__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_site_map_msgs
const rosidl_type_hash_t *
rmf_site_map_msgs__msg__SiteMap__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6a, 0x49, 0x63, 0xa4, 0x94, 0x1f, 0xad, 0xe7,
      0xf1, 0x95, 0x3a, 0x8a, 0x8a, 0x5d, 0xe0, 0x07,
      0x7b, 0x60, 0xf3, 0x6c, 0xb0, 0x63, 0xc5, 0x70,
      0xc1, 0x24, 0x51, 0x67, 0xab, 0x4a, 0xb5, 0xfa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_site_map_msgs__msg__SiteMap__TYPE_NAME[] = "rmf_site_map_msgs/msg/SiteMap";

// Define type names, field names, and default values
static char rmf_site_map_msgs__msg__SiteMap__FIELD_NAME__encoding[] = "encoding";
static char rmf_site_map_msgs__msg__SiteMap__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field rmf_site_map_msgs__msg__SiteMap__FIELDS[] = {
  {
    {rmf_site_map_msgs__msg__SiteMap__FIELD_NAME__encoding, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_site_map_msgs__msg__SiteMap__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_site_map_msgs__msg__SiteMap__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_site_map_msgs__msg__SiteMap__TYPE_NAME, 29, 29},
      {rmf_site_map_msgs__msg__SiteMap__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 MAP_DATA_UNDEFINED=0\n"
  "uint32 MAP_DATA_GPKG=1\n"
  "uint32 MAP_DATA_GPKG_GZ=2\n"
  "uint32 MAP_DATA_GEOJSON=3\n"
  "uint32 MAP_DATA_GEOJSON_GZ=4\n"
  "\n"
  "uint32 encoding\n"
  "uint8[] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_site_map_msgs__msg__SiteMap__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_site_map_msgs__msg__SiteMap__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 162, 162},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_site_map_msgs__msg__SiteMap__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_site_map_msgs__msg__SiteMap__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
