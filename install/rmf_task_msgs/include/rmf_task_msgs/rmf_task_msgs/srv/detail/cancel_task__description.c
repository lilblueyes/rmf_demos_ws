// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:srv/CancelTask.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/srv/detail/cancel_task__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__srv__CancelTask__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x04, 0x5d, 0x68, 0x90, 0xd1, 0xe7, 0xe7, 0x00,
      0xf3, 0xb7, 0x86, 0x20, 0x67, 0x55, 0x67, 0xaa,
      0x21, 0x77, 0xa7, 0x23, 0x25, 0xd5, 0xec, 0xc7,
      0xbf, 0xd6, 0x38, 0x62, 0xf0, 0xc7, 0x2b, 0x31,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__srv__CancelTask_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4f, 0x54, 0x6c, 0xc6, 0x72, 0x3f, 0xac, 0x03,
      0x0c, 0x5c, 0x02, 0xca, 0xb3, 0xfa, 0xf0, 0xe3,
      0x0b, 0x66, 0x2f, 0x33, 0x01, 0x79, 0x0c, 0x7a,
      0x9e, 0xe0, 0x79, 0xfe, 0x97, 0xf8, 0x01, 0x47,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__srv__CancelTask_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x80, 0x1a, 0x9e, 0x72, 0xec, 0x20, 0x66, 0xad,
      0xb9, 0x55, 0x40, 0xbe, 0x5d, 0xd8, 0x61, 0xe8,
      0x39, 0x77, 0xfa, 0x30, 0x8f, 0x2b, 0x8a, 0x17,
      0x1e, 0xd4, 0x09, 0x8b, 0x4d, 0x5d, 0xcc, 0x94,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__srv__CancelTask_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7a, 0x4c, 0xe2, 0xde, 0xaf, 0x3c, 0x62, 0x74,
      0x23, 0xc5, 0x2c, 0xd2, 0x26, 0x00, 0xa9, 0xd1,
      0x02, 0xda, 0x11, 0xd7, 0xf4, 0x62, 0x16, 0x55,
      0xc5, 0xd9, 0xbe, 0x3a, 0x6f, 0xce, 0x4b, 0x9e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

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

static char rmf_task_msgs__srv__CancelTask__TYPE_NAME[] = "rmf_task_msgs/srv/CancelTask";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_task_msgs__srv__CancelTask_Event__TYPE_NAME[] = "rmf_task_msgs/srv/CancelTask_Event";
static char rmf_task_msgs__srv__CancelTask_Request__TYPE_NAME[] = "rmf_task_msgs/srv/CancelTask_Request";
static char rmf_task_msgs__srv__CancelTask_Response__TYPE_NAME[] = "rmf_task_msgs/srv/CancelTask_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rmf_task_msgs__srv__CancelTask__FIELD_NAME__request_message[] = "request_message";
static char rmf_task_msgs__srv__CancelTask__FIELD_NAME__response_message[] = "response_message";
static char rmf_task_msgs__srv__CancelTask__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__srv__CancelTask__FIELDS[] = {
  {
    {rmf_task_msgs__srv__CancelTask__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__srv__CancelTask_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__CancelTask__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__srv__CancelTask_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__CancelTask__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__srv__CancelTask_Event__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_task_msgs__srv__CancelTask__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__CancelTask_Event__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__CancelTask_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__CancelTask_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__srv__CancelTask__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__srv__CancelTask__TYPE_NAME, 28, 28},
      {rmf_task_msgs__srv__CancelTask__FIELDS, 3, 3},
    },
    {rmf_task_msgs__srv__CancelTask__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rmf_task_msgs__srv__CancelTask_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rmf_task_msgs__srv__CancelTask_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rmf_task_msgs__srv__CancelTask_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_task_msgs__srv__CancelTask_Request__FIELD_NAME__requester[] = "requester";
static char rmf_task_msgs__srv__CancelTask_Request__FIELD_NAME__task_id[] = "task_id";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__srv__CancelTask_Request__FIELDS[] = {
  {
    {rmf_task_msgs__srv__CancelTask_Request__FIELD_NAME__requester, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__CancelTask_Request__FIELD_NAME__task_id, 7, 7},
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
rmf_task_msgs__srv__CancelTask_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__srv__CancelTask_Request__TYPE_NAME, 36, 36},
      {rmf_task_msgs__srv__CancelTask_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_task_msgs__srv__CancelTask_Response__FIELD_NAME__success[] = "success";
static char rmf_task_msgs__srv__CancelTask_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__srv__CancelTask_Response__FIELDS[] = {
  {
    {rmf_task_msgs__srv__CancelTask_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__CancelTask_Response__FIELD_NAME__message, 7, 7},
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
rmf_task_msgs__srv__CancelTask_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__srv__CancelTask_Response__TYPE_NAME, 37, 37},
      {rmf_task_msgs__srv__CancelTask_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_task_msgs__srv__CancelTask_Event__FIELD_NAME__info[] = "info";
static char rmf_task_msgs__srv__CancelTask_Event__FIELD_NAME__request[] = "request";
static char rmf_task_msgs__srv__CancelTask_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__srv__CancelTask_Event__FIELDS[] = {
  {
    {rmf_task_msgs__srv__CancelTask_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__CancelTask_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_task_msgs__srv__CancelTask_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__CancelTask_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_task_msgs__srv__CancelTask_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_task_msgs__srv__CancelTask_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__CancelTask_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__CancelTask_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__srv__CancelTask_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__srv__CancelTask_Event__TYPE_NAME, 34, 34},
      {rmf_task_msgs__srv__CancelTask_Event__FIELDS, 3, 3},
    },
    {rmf_task_msgs__srv__CancelTask_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = rmf_task_msgs__srv__CancelTask_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rmf_task_msgs__srv__CancelTask_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Cancel Task | \"Delete\" service call\n"
  "\n"
  "# Identifier for who is requesting the service\n"
  "string requester\n"
  "\n"
  "# generated task ID by dispatcher node\n"
  "string task_id\n"
  "\n"
  "---\n"
  "\n"
  "# Confirmation that this service call is processed\n"
  "bool success\n"
  "\n"
  "# This will provide a verbose message regarding task cancellation\n"
  "string message\n"
  "";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__srv__CancelTask__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__srv__CancelTask__TYPE_NAME, 28, 28},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 311, 311},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__srv__CancelTask_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__srv__CancelTask_Request__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__srv__CancelTask_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__srv__CancelTask_Response__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__srv__CancelTask_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__srv__CancelTask_Event__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__srv__CancelTask__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__srv__CancelTask__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_task_msgs__srv__CancelTask_Event__get_individual_type_description_source(NULL);
    sources[3] = *rmf_task_msgs__srv__CancelTask_Request__get_individual_type_description_source(NULL);
    sources[4] = *rmf_task_msgs__srv__CancelTask_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__srv__CancelTask_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__srv__CancelTask_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__srv__CancelTask_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__srv__CancelTask_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__srv__CancelTask_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__srv__CancelTask_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_task_msgs__srv__CancelTask_Request__get_individual_type_description_source(NULL);
    sources[3] = *rmf_task_msgs__srv__CancelTask_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
