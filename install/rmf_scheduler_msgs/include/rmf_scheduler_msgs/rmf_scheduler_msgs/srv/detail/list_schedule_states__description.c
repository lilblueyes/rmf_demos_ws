// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_scheduler_msgs:srv/ListScheduleStates.idl
// generated code does not contain a copyright notice

#include "rmf_scheduler_msgs/srv/detail/list_schedule_states__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__ListScheduleStates__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0d, 0x68, 0xc0, 0x43, 0x4a, 0xd0, 0x6c, 0x4e,
      0x41, 0x11, 0x41, 0xef, 0x30, 0x9b, 0x2f, 0xd8,
      0xfe, 0x9e, 0x48, 0x17, 0x3b, 0xa4, 0xb0, 0xe8,
      0xfa, 0x5e, 0x2f, 0x8d, 0x59, 0x3b, 0x33, 0x3f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__ListScheduleStates_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5b, 0x75, 0x82, 0xb5, 0x16, 0x2d, 0xa0, 0xe6,
      0x67, 0xf7, 0xc7, 0xc3, 0x58, 0x4f, 0xd1, 0xc3,
      0xa0, 0xf5, 0x37, 0xe3, 0x27, 0xc0, 0x74, 0x12,
      0x00, 0xfe, 0xf8, 0x28, 0x94, 0x11, 0x65, 0xba,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__ListScheduleStates_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x23, 0x1f, 0x14, 0xa1, 0xda, 0xfd, 0xc6, 0xc4,
      0x63, 0x91, 0x0b, 0x95, 0x4a, 0x5c, 0xae, 0x73,
      0xd2, 0x77, 0x9b, 0x53, 0x46, 0xa0, 0x39, 0x93,
      0x54, 0xa5, 0xe4, 0x09, 0x8d, 0x05, 0x02, 0x6d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__ListScheduleStates_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x99, 0x84, 0xe2, 0x32, 0x84, 0xe8, 0x5f, 0x55,
      0x98, 0x4a, 0xa3, 0xc6, 0xbc, 0xe9, 0xc1, 0x3e,
      0xa1, 0xe0, 0x2e, 0x85, 0x96, 0xf5, 0xfa, 0x36,
      0x51, 0xbc, 0x0a, 0xa8, 0xd0, 0xc0, 0xd6, 0xd6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "rmf_scheduler_msgs/msg/detail/schedule_state__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rmf_scheduler_msgs__msg__ScheduleState__EXPECTED_HASH = {1, {
    0xb1, 0xf2, 0xdd, 0x93, 0xf6, 0x48, 0xbd, 0x06,
    0xca, 0x34, 0x7e, 0x63, 0xb7, 0x9a, 0x27, 0xfe,
    0x33, 0x5d, 0xa1, 0x5a, 0xf7, 0xe4, 0x16, 0xb6,
    0xe7, 0x73, 0x05, 0x0f, 0x2e, 0xac, 0xbd, 0x6d,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char rmf_scheduler_msgs__srv__ListScheduleStates__TYPE_NAME[] = "rmf_scheduler_msgs/srv/ListScheduleStates";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_scheduler_msgs__msg__ScheduleState__TYPE_NAME[] = "rmf_scheduler_msgs/msg/ScheduleState";
static char rmf_scheduler_msgs__srv__ListScheduleStates_Event__TYPE_NAME[] = "rmf_scheduler_msgs/srv/ListScheduleStates_Event";
static char rmf_scheduler_msgs__srv__ListScheduleStates_Request__TYPE_NAME[] = "rmf_scheduler_msgs/srv/ListScheduleStates_Request";
static char rmf_scheduler_msgs__srv__ListScheduleStates_Response__TYPE_NAME[] = "rmf_scheduler_msgs/srv/ListScheduleStates_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__ListScheduleStates__FIELD_NAME__request_message[] = "request_message";
static char rmf_scheduler_msgs__srv__ListScheduleStates__FIELD_NAME__response_message[] = "response_message";
static char rmf_scheduler_msgs__srv__ListScheduleStates__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__ListScheduleStates__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__ListScheduleStates__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__srv__ListScheduleStates_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__ListScheduleStates__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__srv__ListScheduleStates_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__ListScheduleStates__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__srv__ListScheduleStates_Event__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_scheduler_msgs__srv__ListScheduleStates__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__ScheduleState__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__ListScheduleStates_Event__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__ListScheduleStates_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__ListScheduleStates_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__srv__ListScheduleStates__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__ListScheduleStates__TYPE_NAME, 41, 41},
      {rmf_scheduler_msgs__srv__ListScheduleStates__FIELDS, 3, 3},
    },
    {rmf_scheduler_msgs__srv__ListScheduleStates__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_scheduler_msgs__msg__ScheduleState__EXPECTED_HASH, rmf_scheduler_msgs__msg__ScheduleState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_scheduler_msgs__msg__ScheduleState__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rmf_scheduler_msgs__srv__ListScheduleStates_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rmf_scheduler_msgs__srv__ListScheduleStates_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = rmf_scheduler_msgs__srv__ListScheduleStates_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__ListScheduleStates_Request__FIELD_NAME__modified_after[] = "modified_after";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__ListScheduleStates_Request__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__ListScheduleStates_Request__FIELD_NAME__modified_after, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__srv__ListScheduleStates_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__ListScheduleStates_Request__TYPE_NAME, 49, 49},
      {rmf_scheduler_msgs__srv__ListScheduleStates_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__ListScheduleStates_Response__FIELD_NAME__success[] = "success";
static char rmf_scheduler_msgs__srv__ListScheduleStates_Response__FIELD_NAME__message[] = "message";
static char rmf_scheduler_msgs__srv__ListScheduleStates_Response__FIELD_NAME__schedules[] = "schedules";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__ListScheduleStates_Response__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__ListScheduleStates_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__ListScheduleStates_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__ListScheduleStates_Response__FIELD_NAME__schedules, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_scheduler_msgs__msg__ScheduleState__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_scheduler_msgs__srv__ListScheduleStates_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_scheduler_msgs__msg__ScheduleState__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__srv__ListScheduleStates_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__ListScheduleStates_Response__TYPE_NAME, 50, 50},
      {rmf_scheduler_msgs__srv__ListScheduleStates_Response__FIELDS, 3, 3},
    },
    {rmf_scheduler_msgs__srv__ListScheduleStates_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_scheduler_msgs__msg__ScheduleState__EXPECTED_HASH, rmf_scheduler_msgs__msg__ScheduleState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_scheduler_msgs__msg__ScheduleState__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__ListScheduleStates_Event__FIELD_NAME__info[] = "info";
static char rmf_scheduler_msgs__srv__ListScheduleStates_Event__FIELD_NAME__request[] = "request";
static char rmf_scheduler_msgs__srv__ListScheduleStates_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__ListScheduleStates_Event__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__ListScheduleStates_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__ListScheduleStates_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_scheduler_msgs__srv__ListScheduleStates_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__ListScheduleStates_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_scheduler_msgs__srv__ListScheduleStates_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_scheduler_msgs__srv__ListScheduleStates_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__ScheduleState__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__ListScheduleStates_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__ListScheduleStates_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__srv__ListScheduleStates_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__ListScheduleStates_Event__TYPE_NAME, 47, 47},
      {rmf_scheduler_msgs__srv__ListScheduleStates_Event__FIELDS, 3, 3},
    },
    {rmf_scheduler_msgs__srv__ListScheduleStates_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_scheduler_msgs__msg__ScheduleState__EXPECTED_HASH, rmf_scheduler_msgs__msg__ScheduleState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_scheduler_msgs__msg__ScheduleState__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rmf_scheduler_msgs__srv__ListScheduleStates_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rmf_scheduler_msgs__srv__ListScheduleStates_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Get a list of currently registered schedules.\n"
  "\n"
  "# unix time in seconds\n"
  "int64 modified_after\n"
  "\n"
  "---\n"
  "\n"
  "# Confirmation that the trigger is successfully cancelled.\n"
  "bool success\n"
  "\n"
  "# If success is false, this provides a reason for the failure.\n"
  "string message\n"
  "\n"
  "ScheduleState[] schedules";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__ListScheduleStates__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__ListScheduleStates__TYPE_NAME, 41, 41},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 277, 277},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__ListScheduleStates_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__ListScheduleStates_Request__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__ListScheduleStates_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__ListScheduleStates_Response__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__ListScheduleStates_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__ListScheduleStates_Event__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__ListScheduleStates__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__ListScheduleStates__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_scheduler_msgs__msg__ScheduleState__get_individual_type_description_source(NULL);
    sources[3] = *rmf_scheduler_msgs__srv__ListScheduleStates_Event__get_individual_type_description_source(NULL);
    sources[4] = *rmf_scheduler_msgs__srv__ListScheduleStates_Request__get_individual_type_description_source(NULL);
    sources[5] = *rmf_scheduler_msgs__srv__ListScheduleStates_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__ListScheduleStates_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__ListScheduleStates_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__ListScheduleStates_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__ListScheduleStates_Response__get_individual_type_description_source(NULL),
    sources[1] = *rmf_scheduler_msgs__msg__ScheduleState__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__ListScheduleStates_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__ListScheduleStates_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_scheduler_msgs__msg__ScheduleState__get_individual_type_description_source(NULL);
    sources[3] = *rmf_scheduler_msgs__srv__ListScheduleStates_Request__get_individual_type_description_source(NULL);
    sources[4] = *rmf_scheduler_msgs__srv__ListScheduleStates_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
