// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_scheduler_msgs:srv/CancelAll.idl
// generated code does not contain a copyright notice

#include "rmf_scheduler_msgs/srv/detail/cancel_all__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__CancelAll__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x77, 0x2b, 0x1d, 0x09, 0xde, 0xfc, 0x78, 0x31,
      0x69, 0x0d, 0xcb, 0x3e, 0x93, 0x96, 0xa2, 0x05,
      0x9e, 0xf5, 0x3d, 0x03, 0x0c, 0xa2, 0xf2, 0x99,
      0x70, 0xb7, 0xcc, 0x71, 0x38, 0xb9, 0xb7, 0xa8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__CancelAll_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd3, 0x3f, 0xc8, 0xfb, 0xc0, 0x97, 0x06, 0xfb,
      0xd7, 0x63, 0x36, 0x78, 0xa2, 0x61, 0x5c, 0x8b,
      0xfe, 0x9f, 0x72, 0x65, 0x5e, 0xf9, 0x08, 0x3c,
      0x55, 0x4a, 0x94, 0x93, 0x43, 0x0a, 0x91, 0x93,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__CancelAll_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8b, 0x9b, 0x72, 0x4b, 0x05, 0xfd, 0x50, 0x87,
      0x22, 0x22, 0x3a, 0x59, 0xf9, 0xce, 0x08, 0x2a,
      0x4a, 0x2c, 0x89, 0xd3, 0xd7, 0xaf, 0x59, 0xe4,
      0x9d, 0xc8, 0xf1, 0x3d, 0xe9, 0xf1, 0x91, 0x63,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__CancelAll_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0x3e, 0xd7, 0x6f, 0xa5, 0xce, 0x6e, 0xa0,
      0xda, 0xd8, 0xf1, 0xab, 0xd4, 0x05, 0x36, 0x3f,
      0x17, 0xa7, 0xe7, 0x80, 0x2d, 0x37, 0x34, 0xfa,
      0xf3, 0xf6, 0x74, 0x35, 0x9e, 0x68, 0xaa, 0x88,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char rmf_scheduler_msgs__srv__CancelAll__TYPE_NAME[] = "rmf_scheduler_msgs/srv/CancelAll";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_scheduler_msgs__srv__CancelAll_Event__TYPE_NAME[] = "rmf_scheduler_msgs/srv/CancelAll_Event";
static char rmf_scheduler_msgs__srv__CancelAll_Request__TYPE_NAME[] = "rmf_scheduler_msgs/srv/CancelAll_Request";
static char rmf_scheduler_msgs__srv__CancelAll_Response__TYPE_NAME[] = "rmf_scheduler_msgs/srv/CancelAll_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__CancelAll__FIELD_NAME__request_message[] = "request_message";
static char rmf_scheduler_msgs__srv__CancelAll__FIELD_NAME__response_message[] = "response_message";
static char rmf_scheduler_msgs__srv__CancelAll__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__CancelAll__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__CancelAll__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__srv__CancelAll_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelAll__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__srv__CancelAll_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelAll__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__srv__CancelAll_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_scheduler_msgs__srv__CancelAll__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelAll_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelAll_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelAll_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__srv__CancelAll__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__CancelAll__TYPE_NAME, 32, 32},
      {rmf_scheduler_msgs__srv__CancelAll__FIELDS, 3, 3},
    },
    {rmf_scheduler_msgs__srv__CancelAll__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rmf_scheduler_msgs__srv__CancelAll_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rmf_scheduler_msgs__srv__CancelAll_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rmf_scheduler_msgs__srv__CancelAll_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__CancelAll_Request__FIELD_NAME__group[] = "group";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__CancelAll_Request__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__CancelAll_Request__FIELD_NAME__group, 5, 5},
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
rmf_scheduler_msgs__srv__CancelAll_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__CancelAll_Request__TYPE_NAME, 40, 40},
      {rmf_scheduler_msgs__srv__CancelAll_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__CancelAll_Response__FIELD_NAME__success[] = "success";
static char rmf_scheduler_msgs__srv__CancelAll_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__CancelAll_Response__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__CancelAll_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelAll_Response__FIELD_NAME__message, 7, 7},
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
rmf_scheduler_msgs__srv__CancelAll_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__CancelAll_Response__TYPE_NAME, 41, 41},
      {rmf_scheduler_msgs__srv__CancelAll_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__CancelAll_Event__FIELD_NAME__info[] = "info";
static char rmf_scheduler_msgs__srv__CancelAll_Event__FIELD_NAME__request[] = "request";
static char rmf_scheduler_msgs__srv__CancelAll_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__CancelAll_Event__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__CancelAll_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelAll_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_scheduler_msgs__srv__CancelAll_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelAll_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_scheduler_msgs__srv__CancelAll_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_scheduler_msgs__srv__CancelAll_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelAll_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CancelAll_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__srv__CancelAll_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__CancelAll_Event__TYPE_NAME, 38, 38},
      {rmf_scheduler_msgs__srv__CancelAll_Event__FIELDS, 3, 3},
    },
    {rmf_scheduler_msgs__srv__CancelAll_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rmf_scheduler_msgs__srv__CancelAll_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rmf_scheduler_msgs__srv__CancelAll_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Cancel all triggers and schedules belonging to a group.\n"
  "\n"
  "string group\n"
  "\n"
  "---\n"
  "\n"
  "# Confirmation that the schedule is successfully registered\n"
  "bool success\n"
  "\n"
  "# If success is false, this provides a reason for the failure.\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__CancelAll__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__CancelAll__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 230, 230},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__CancelAll_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__CancelAll_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__CancelAll_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__CancelAll_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__CancelAll_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__CancelAll_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__CancelAll__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__CancelAll__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_scheduler_msgs__srv__CancelAll_Event__get_individual_type_description_source(NULL);
    sources[3] = *rmf_scheduler_msgs__srv__CancelAll_Request__get_individual_type_description_source(NULL);
    sources[4] = *rmf_scheduler_msgs__srv__CancelAll_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__CancelAll_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__CancelAll_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__CancelAll_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__CancelAll_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__CancelAll_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__CancelAll_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_scheduler_msgs__srv__CancelAll_Request__get_individual_type_description_source(NULL);
    sources[3] = *rmf_scheduler_msgs__srv__CancelAll_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
