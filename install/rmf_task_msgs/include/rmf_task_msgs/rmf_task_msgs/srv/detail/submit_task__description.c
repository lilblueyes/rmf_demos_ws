// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:srv/SubmitTask.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/srv/detail/submit_task__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__srv__SubmitTask__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa0, 0xc1, 0xa9, 0xd8, 0xfc, 0x2b, 0xc8, 0xe7,
      0x5c, 0xbb, 0x0d, 0x7c, 0x97, 0x73, 0xa6, 0xaa,
      0xa3, 0x09, 0x72, 0x57, 0x79, 0x89, 0xa1, 0xf3,
      0xc2, 0x7a, 0xd0, 0x0f, 0x7f, 0xa5, 0x5c, 0x53,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__srv__SubmitTask_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x51, 0x77, 0xe3, 0xa2, 0x81, 0x61, 0x42, 0x3d,
      0x82, 0x18, 0xa8, 0x6d, 0x98, 0x93, 0xf3, 0x33,
      0xb2, 0x4b, 0x91, 0x54, 0x81, 0x64, 0xbe, 0xe9,
      0x0a, 0x8a, 0x65, 0x29, 0x5b, 0x05, 0xb5, 0x00,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__srv__SubmitTask_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x38, 0x66, 0xcb, 0xe0, 0xb6, 0x05, 0xd7, 0x19,
      0x9e, 0xd7, 0xd7, 0x0b, 0x0e, 0xad, 0x09, 0x8d,
      0xb3, 0x96, 0x5e, 0xb3, 0xb7, 0xf9, 0xad, 0xa0,
      0x7b, 0xf5, 0x2e, 0xcf, 0x19, 0xfe, 0x8c, 0x95,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__srv__SubmitTask_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0x1f, 0x87, 0xc8, 0x33, 0x17, 0x23, 0xb8,
      0x8e, 0x77, 0xe0, 0x6e, 0xf3, 0x94, 0x58, 0xde,
      0x51, 0x94, 0xbd, 0xaa, 0x7c, 0x7c, 0xc2, 0x58,
      0xe3, 0x56, 0x82, 0x64, 0x54, 0xe3, 0xae, 0xf3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__functions.h"
#include "rmf_task_msgs/msg/detail/task_type__functions.h"
#include "rmf_task_msgs/msg/detail/delivery__functions.h"
#include "rmf_task_msgs/msg/detail/loop__functions.h"
#include "rmf_task_msgs/msg/detail/station__functions.h"
#include "rmf_task_msgs/msg/detail/priority__functions.h"
#include "rmf_task_msgs/msg/detail/clean__functions.h"
#include "rmf_task_msgs/msg/detail/behavior__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "rmf_task_msgs/msg/detail/behavior_parameter__functions.h"
#include "rmf_task_msgs/msg/detail/task_description__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rmf_dispenser_msgs__msg__DispenserRequestItem__EXPECTED_HASH = {1, {
    0xb2, 0x16, 0x4f, 0x63, 0x7d, 0x5c, 0x5f, 0x7d,
    0x24, 0xd1, 0xb3, 0x1f, 0xc6, 0xc2, 0x02, 0x1d,
    0xc0, 0x35, 0xb1, 0x41, 0xd7, 0x91, 0xf9, 0x11,
    0xf3, 0x5d, 0x71, 0xe9, 0xa2, 0x69, 0xcb, 0x70,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__Behavior__EXPECTED_HASH = {1, {
    0xe5, 0x1d, 0xa1, 0x85, 0xa9, 0x8b, 0xb6, 0xaa,
    0x80, 0x00, 0xb7, 0x43, 0x15, 0xe7, 0x08, 0x22,
    0xa3, 0xe9, 0x30, 0x61, 0xde, 0xbc, 0x9d, 0xda,
    0xa8, 0x9e, 0x24, 0x82, 0xa5, 0xe2, 0x4e, 0x91,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__BehaviorParameter__EXPECTED_HASH = {1, {
    0xb7, 0xc9, 0x29, 0xfa, 0xd1, 0xe9, 0x15, 0xaa,
    0x1f, 0x01, 0x81, 0xa2, 0xbe, 0x23, 0xed, 0x27,
    0xad, 0x17, 0xcb, 0x58, 0x0f, 0x82, 0xc7, 0xd6,
    0x2e, 0x75, 0x51, 0xb5, 0x70, 0x0a, 0x71, 0x65,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__Clean__EXPECTED_HASH = {1, {
    0x78, 0xb6, 0xf9, 0x90, 0xbf, 0xcb, 0x5a, 0xd4,
    0x4c, 0xec, 0xf3, 0xe1, 0x5a, 0xcd, 0x7d, 0x62,
    0xd5, 0x07, 0xab, 0xca, 0xea, 0x5b, 0x22, 0xac,
    0x65, 0x65, 0x1b, 0xae, 0x16, 0x20, 0xc4, 0x41,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__Delivery__EXPECTED_HASH = {1, {
    0xf6, 0x48, 0x10, 0xcd, 0x05, 0x55, 0xbb, 0x59,
    0xa1, 0x56, 0x5a, 0xb6, 0x82, 0x07, 0x28, 0x77,
    0x33, 0xd9, 0x06, 0xf5, 0x67, 0x8c, 0xf0, 0xe1,
    0xfd, 0x41, 0xbe, 0xc6, 0x43, 0x7a, 0xa8, 0xcd,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__Loop__EXPECTED_HASH = {1, {
    0x49, 0x7f, 0xdc, 0x35, 0xb4, 0x89, 0x02, 0x3c,
    0x70, 0x48, 0xd4, 0x41, 0xb0, 0xa7, 0xbf, 0xbc,
    0x33, 0x51, 0x6b, 0xc4, 0x52, 0x63, 0xa4, 0x6c,
    0x99, 0x89, 0x71, 0x3c, 0x4b, 0x8b, 0xde, 0xf3,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__Priority__EXPECTED_HASH = {1, {
    0xb9, 0x58, 0x31, 0xf1, 0xa2, 0x4a, 0x16, 0xd9,
    0xae, 0x63, 0x83, 0xbc, 0x1b, 0xf4, 0x46, 0xc7,
    0x02, 0xce, 0x20, 0x33, 0xe6, 0xaa, 0x00, 0x03,
    0x40, 0xc7, 0x1f, 0xd9, 0xc6, 0x2b, 0xc3, 0xac,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__Station__EXPECTED_HASH = {1, {
    0x83, 0xa2, 0x3e, 0xd9, 0xc2, 0x76, 0x26, 0xe3,
    0x4f, 0x28, 0x80, 0x27, 0x06, 0xe0, 0xc2, 0xa0,
    0xad, 0x90, 0xf3, 0x66, 0xa8, 0xa4, 0x36, 0x76,
    0x75, 0xaf, 0xeb, 0x20, 0x55, 0xa7, 0x62, 0x2b,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__TaskDescription__EXPECTED_HASH = {1, {
    0xcc, 0x54, 0x7d, 0xdf, 0x7d, 0x9f, 0x52, 0x83,
    0x58, 0xdf, 0x25, 0x19, 0xf0, 0xe7, 0xa4, 0x1c,
    0x45, 0x94, 0x6f, 0xd9, 0x26, 0x19, 0x65, 0xb9,
    0xd7, 0x48, 0x16, 0xdf, 0x9e, 0xa7, 0xee, 0xfd,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__TaskType__EXPECTED_HASH = {1, {
    0x15, 0x35, 0x72, 0x34, 0xef, 0x2c, 0x30, 0xd2,
    0x36, 0x83, 0xd2, 0xc4, 0x1b, 0x41, 0x33, 0x89,
    0x06, 0xe1, 0xdc, 0xf7, 0xf0, 0x7b, 0xf0, 0x32,
    0xb9, 0x4e, 0xde, 0x27, 0xa1, 0x09, 0x0d, 0x95,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char rmf_task_msgs__srv__SubmitTask__TYPE_NAME[] = "rmf_task_msgs/srv/SubmitTask";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_dispenser_msgs__msg__DispenserRequestItem__TYPE_NAME[] = "rmf_dispenser_msgs/msg/DispenserRequestItem";
static char rmf_task_msgs__msg__Behavior__TYPE_NAME[] = "rmf_task_msgs/msg/Behavior";
static char rmf_task_msgs__msg__BehaviorParameter__TYPE_NAME[] = "rmf_task_msgs/msg/BehaviorParameter";
static char rmf_task_msgs__msg__Clean__TYPE_NAME[] = "rmf_task_msgs/msg/Clean";
static char rmf_task_msgs__msg__Delivery__TYPE_NAME[] = "rmf_task_msgs/msg/Delivery";
static char rmf_task_msgs__msg__Loop__TYPE_NAME[] = "rmf_task_msgs/msg/Loop";
static char rmf_task_msgs__msg__Priority__TYPE_NAME[] = "rmf_task_msgs/msg/Priority";
static char rmf_task_msgs__msg__Station__TYPE_NAME[] = "rmf_task_msgs/msg/Station";
static char rmf_task_msgs__msg__TaskDescription__TYPE_NAME[] = "rmf_task_msgs/msg/TaskDescription";
static char rmf_task_msgs__msg__TaskType__TYPE_NAME[] = "rmf_task_msgs/msg/TaskType";
static char rmf_task_msgs__srv__SubmitTask_Event__TYPE_NAME[] = "rmf_task_msgs/srv/SubmitTask_Event";
static char rmf_task_msgs__srv__SubmitTask_Request__TYPE_NAME[] = "rmf_task_msgs/srv/SubmitTask_Request";
static char rmf_task_msgs__srv__SubmitTask_Response__TYPE_NAME[] = "rmf_task_msgs/srv/SubmitTask_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rmf_task_msgs__srv__SubmitTask__FIELD_NAME__request_message[] = "request_message";
static char rmf_task_msgs__srv__SubmitTask__FIELD_NAME__response_message[] = "response_message";
static char rmf_task_msgs__srv__SubmitTask__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__srv__SubmitTask__FIELDS[] = {
  {
    {rmf_task_msgs__srv__SubmitTask__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__srv__SubmitTask_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__SubmitTask__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__srv__SubmitTask_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__SubmitTask__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__srv__SubmitTask_Event__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_task_msgs__srv__SubmitTask__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_dispenser_msgs__msg__DispenserRequestItem__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Behavior__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__BehaviorParameter__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Clean__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Delivery__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Loop__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Priority__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Station__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__TaskDescription__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__TaskType__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__SubmitTask_Event__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__SubmitTask_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__SubmitTask_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__srv__SubmitTask__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__srv__SubmitTask__TYPE_NAME, 28, 28},
      {rmf_task_msgs__srv__SubmitTask__FIELDS, 3, 3},
    },
    {rmf_task_msgs__srv__SubmitTask__REFERENCED_TYPE_DESCRIPTIONS, 15, 15},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_dispenser_msgs__msg__DispenserRequestItem__EXPECTED_HASH, rmf_dispenser_msgs__msg__DispenserRequestItem__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_dispenser_msgs__msg__DispenserRequestItem__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Behavior__EXPECTED_HASH, rmf_task_msgs__msg__Behavior__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_task_msgs__msg__Behavior__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__BehaviorParameter__EXPECTED_HASH, rmf_task_msgs__msg__BehaviorParameter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_task_msgs__msg__BehaviorParameter__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Clean__EXPECTED_HASH, rmf_task_msgs__msg__Clean__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = rmf_task_msgs__msg__Clean__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Delivery__EXPECTED_HASH, rmf_task_msgs__msg__Delivery__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = rmf_task_msgs__msg__Delivery__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Loop__EXPECTED_HASH, rmf_task_msgs__msg__Loop__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = rmf_task_msgs__msg__Loop__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Priority__EXPECTED_HASH, rmf_task_msgs__msg__Priority__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = rmf_task_msgs__msg__Priority__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Station__EXPECTED_HASH, rmf_task_msgs__msg__Station__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = rmf_task_msgs__msg__Station__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__TaskDescription__EXPECTED_HASH, rmf_task_msgs__msg__TaskDescription__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = rmf_task_msgs__msg__TaskDescription__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__TaskType__EXPECTED_HASH, rmf_task_msgs__msg__TaskType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = rmf_task_msgs__msg__TaskType__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[11].fields = rmf_task_msgs__srv__SubmitTask_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[12].fields = rmf_task_msgs__srv__SubmitTask_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[13].fields = rmf_task_msgs__srv__SubmitTask_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[14].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_task_msgs__srv__SubmitTask_Request__FIELD_NAME__requester[] = "requester";
static char rmf_task_msgs__srv__SubmitTask_Request__FIELD_NAME__description[] = "description";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__srv__SubmitTask_Request__FIELDS[] = {
  {
    {rmf_task_msgs__srv__SubmitTask_Request__FIELD_NAME__requester, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__SubmitTask_Request__FIELD_NAME__description, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__msg__TaskDescription__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_task_msgs__srv__SubmitTask_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_dispenser_msgs__msg__DispenserRequestItem__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Behavior__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__BehaviorParameter__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Clean__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Delivery__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Loop__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Priority__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Station__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__TaskDescription__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__TaskType__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__srv__SubmitTask_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__srv__SubmitTask_Request__TYPE_NAME, 36, 36},
      {rmf_task_msgs__srv__SubmitTask_Request__FIELDS, 2, 2},
    },
    {rmf_task_msgs__srv__SubmitTask_Request__REFERENCED_TYPE_DESCRIPTIONS, 11, 11},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_dispenser_msgs__msg__DispenserRequestItem__EXPECTED_HASH, rmf_dispenser_msgs__msg__DispenserRequestItem__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_dispenser_msgs__msg__DispenserRequestItem__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Behavior__EXPECTED_HASH, rmf_task_msgs__msg__Behavior__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_task_msgs__msg__Behavior__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__BehaviorParameter__EXPECTED_HASH, rmf_task_msgs__msg__BehaviorParameter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_task_msgs__msg__BehaviorParameter__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Clean__EXPECTED_HASH, rmf_task_msgs__msg__Clean__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = rmf_task_msgs__msg__Clean__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Delivery__EXPECTED_HASH, rmf_task_msgs__msg__Delivery__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = rmf_task_msgs__msg__Delivery__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Loop__EXPECTED_HASH, rmf_task_msgs__msg__Loop__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = rmf_task_msgs__msg__Loop__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Priority__EXPECTED_HASH, rmf_task_msgs__msg__Priority__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = rmf_task_msgs__msg__Priority__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Station__EXPECTED_HASH, rmf_task_msgs__msg__Station__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = rmf_task_msgs__msg__Station__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__TaskDescription__EXPECTED_HASH, rmf_task_msgs__msg__TaskDescription__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = rmf_task_msgs__msg__TaskDescription__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__TaskType__EXPECTED_HASH, rmf_task_msgs__msg__TaskType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = rmf_task_msgs__msg__TaskType__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_task_msgs__srv__SubmitTask_Response__FIELD_NAME__success[] = "success";
static char rmf_task_msgs__srv__SubmitTask_Response__FIELD_NAME__task_id[] = "task_id";
static char rmf_task_msgs__srv__SubmitTask_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__srv__SubmitTask_Response__FIELDS[] = {
  {
    {rmf_task_msgs__srv__SubmitTask_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__SubmitTask_Response__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__SubmitTask_Response__FIELD_NAME__message, 7, 7},
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
rmf_task_msgs__srv__SubmitTask_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__srv__SubmitTask_Response__TYPE_NAME, 37, 37},
      {rmf_task_msgs__srv__SubmitTask_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_task_msgs__srv__SubmitTask_Event__FIELD_NAME__info[] = "info";
static char rmf_task_msgs__srv__SubmitTask_Event__FIELD_NAME__request[] = "request";
static char rmf_task_msgs__srv__SubmitTask_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__srv__SubmitTask_Event__FIELDS[] = {
  {
    {rmf_task_msgs__srv__SubmitTask_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__SubmitTask_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_task_msgs__srv__SubmitTask_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__SubmitTask_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_task_msgs__srv__SubmitTask_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_task_msgs__srv__SubmitTask_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_dispenser_msgs__msg__DispenserRequestItem__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Behavior__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__BehaviorParameter__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Clean__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Delivery__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Loop__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Priority__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Station__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__TaskDescription__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__TaskType__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__SubmitTask_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__SubmitTask_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__srv__SubmitTask_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__srv__SubmitTask_Event__TYPE_NAME, 34, 34},
      {rmf_task_msgs__srv__SubmitTask_Event__FIELDS, 3, 3},
    },
    {rmf_task_msgs__srv__SubmitTask_Event__REFERENCED_TYPE_DESCRIPTIONS, 14, 14},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_dispenser_msgs__msg__DispenserRequestItem__EXPECTED_HASH, rmf_dispenser_msgs__msg__DispenserRequestItem__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_dispenser_msgs__msg__DispenserRequestItem__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Behavior__EXPECTED_HASH, rmf_task_msgs__msg__Behavior__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_task_msgs__msg__Behavior__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__BehaviorParameter__EXPECTED_HASH, rmf_task_msgs__msg__BehaviorParameter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_task_msgs__msg__BehaviorParameter__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Clean__EXPECTED_HASH, rmf_task_msgs__msg__Clean__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = rmf_task_msgs__msg__Clean__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Delivery__EXPECTED_HASH, rmf_task_msgs__msg__Delivery__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = rmf_task_msgs__msg__Delivery__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Loop__EXPECTED_HASH, rmf_task_msgs__msg__Loop__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = rmf_task_msgs__msg__Loop__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Priority__EXPECTED_HASH, rmf_task_msgs__msg__Priority__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = rmf_task_msgs__msg__Priority__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Station__EXPECTED_HASH, rmf_task_msgs__msg__Station__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = rmf_task_msgs__msg__Station__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__TaskDescription__EXPECTED_HASH, rmf_task_msgs__msg__TaskDescription__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = rmf_task_msgs__msg__TaskDescription__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__TaskType__EXPECTED_HASH, rmf_task_msgs__msg__TaskType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = rmf_task_msgs__msg__TaskType__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[11].fields = rmf_task_msgs__srv__SubmitTask_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[12].fields = rmf_task_msgs__srv__SubmitTask_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Submit Task | POST service call\n"
  "\n"
  "# Identifier for who is requesting the service\n"
  "string requester\n"
  "\n"
  "# desciption of task\n"
  "TaskDescription description\n"
  "\n"
  "---\n"
  "\n"
  "# Confirmation that this service call is processed\n"
  "bool success\n"
  "\n"
  "# generated task ID by dispatcher node\n"
  "string task_id\n"
  "\n"
  "# This will provide a verbose message regarding task submission\n"
  "string message\n"
  "";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__srv__SubmitTask__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__srv__SubmitTask__TYPE_NAME, 28, 28},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 355, 355},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__srv__SubmitTask_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__srv__SubmitTask_Request__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__srv__SubmitTask_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__srv__SubmitTask_Response__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__srv__SubmitTask_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__srv__SubmitTask_Event__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__srv__SubmitTask__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[16];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 16, 16};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__srv__SubmitTask__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_dispenser_msgs__msg__DispenserRequestItem__get_individual_type_description_source(NULL);
    sources[3] = *rmf_task_msgs__msg__Behavior__get_individual_type_description_source(NULL);
    sources[4] = *rmf_task_msgs__msg__BehaviorParameter__get_individual_type_description_source(NULL);
    sources[5] = *rmf_task_msgs__msg__Clean__get_individual_type_description_source(NULL);
    sources[6] = *rmf_task_msgs__msg__Delivery__get_individual_type_description_source(NULL);
    sources[7] = *rmf_task_msgs__msg__Loop__get_individual_type_description_source(NULL);
    sources[8] = *rmf_task_msgs__msg__Priority__get_individual_type_description_source(NULL);
    sources[9] = *rmf_task_msgs__msg__Station__get_individual_type_description_source(NULL);
    sources[10] = *rmf_task_msgs__msg__TaskDescription__get_individual_type_description_source(NULL);
    sources[11] = *rmf_task_msgs__msg__TaskType__get_individual_type_description_source(NULL);
    sources[12] = *rmf_task_msgs__srv__SubmitTask_Event__get_individual_type_description_source(NULL);
    sources[13] = *rmf_task_msgs__srv__SubmitTask_Request__get_individual_type_description_source(NULL);
    sources[14] = *rmf_task_msgs__srv__SubmitTask_Response__get_individual_type_description_source(NULL);
    sources[15] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__srv__SubmitTask_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[12];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 12, 12};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__srv__SubmitTask_Request__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_dispenser_msgs__msg__DispenserRequestItem__get_individual_type_description_source(NULL);
    sources[3] = *rmf_task_msgs__msg__Behavior__get_individual_type_description_source(NULL);
    sources[4] = *rmf_task_msgs__msg__BehaviorParameter__get_individual_type_description_source(NULL);
    sources[5] = *rmf_task_msgs__msg__Clean__get_individual_type_description_source(NULL);
    sources[6] = *rmf_task_msgs__msg__Delivery__get_individual_type_description_source(NULL);
    sources[7] = *rmf_task_msgs__msg__Loop__get_individual_type_description_source(NULL);
    sources[8] = *rmf_task_msgs__msg__Priority__get_individual_type_description_source(NULL);
    sources[9] = *rmf_task_msgs__msg__Station__get_individual_type_description_source(NULL);
    sources[10] = *rmf_task_msgs__msg__TaskDescription__get_individual_type_description_source(NULL);
    sources[11] = *rmf_task_msgs__msg__TaskType__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__srv__SubmitTask_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__srv__SubmitTask_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__srv__SubmitTask_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[15];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 15, 15};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__srv__SubmitTask_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_dispenser_msgs__msg__DispenserRequestItem__get_individual_type_description_source(NULL);
    sources[3] = *rmf_task_msgs__msg__Behavior__get_individual_type_description_source(NULL);
    sources[4] = *rmf_task_msgs__msg__BehaviorParameter__get_individual_type_description_source(NULL);
    sources[5] = *rmf_task_msgs__msg__Clean__get_individual_type_description_source(NULL);
    sources[6] = *rmf_task_msgs__msg__Delivery__get_individual_type_description_source(NULL);
    sources[7] = *rmf_task_msgs__msg__Loop__get_individual_type_description_source(NULL);
    sources[8] = *rmf_task_msgs__msg__Priority__get_individual_type_description_source(NULL);
    sources[9] = *rmf_task_msgs__msg__Station__get_individual_type_description_source(NULL);
    sources[10] = *rmf_task_msgs__msg__TaskDescription__get_individual_type_description_source(NULL);
    sources[11] = *rmf_task_msgs__msg__TaskType__get_individual_type_description_source(NULL);
    sources[12] = *rmf_task_msgs__srv__SubmitTask_Request__get_individual_type_description_source(NULL);
    sources[13] = *rmf_task_msgs__srv__SubmitTask_Response__get_individual_type_description_source(NULL);
    sources[14] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
