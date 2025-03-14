/*
 * This file is automatically generated by the build system of 
 *
 * Automatically generated files do not have a copyright
 */

#ifndef RMF_API_MSGS__SCHEMAS__ROBOT_COMMISSION_REQUEST
#define RMF_API_MSGS__SCHEMAS__ROBOT_COMMISSION_REQUEST

#include <nlohmann/json.hpp>

namespace rmf_api_msgs {
namespace schemas {

static const nlohmann::json robot_commission_request =
R"raw_schema(
{
  "$schema": "https://json-schema.org/draft/2020-12/schema",
  "$id": "https://raw.githubusercontent.com/open-rmf/rmf_api_msgs/main/rmf_api_msgs/schemas/robot_commission_request.json",
  "title": "Robot Commission Request",
  "description": "Request a change in the commission of a robot, i.e. whether it accepts dispatched and/or direct tasks",
  "type": "object",
  "properties": {
    "type": {
      "description": "Indicate that this is a robot commission request",
      "type": "string",
      "constant": "robot_commission_request"
    },
    "robot": {
      "description": "The name of the robot",
      "type": "string"
    },
    "fleet": {
      "description": "The fleet the robot belongs to",
      "type": "string"
    },
    "commission": { "$ref": "commission.json" },
    "pending_dispatch_tasks_policy": {
      "description": "What should be done for pending dispatched tasks that were assigned to this robot? reassign: pending dispatched tasks will be reassigned to other robots in the fleet, or canceled if there are no more robots available. complete: the robot will complete its pending dispatched tasks. cancel: pending dispatched tasks will be immediately canceled. If unset, it will default to reassign.",
      "type": "string",
      "enum": ["reassign", "complete", "cancel"]
    },
    "pending_direct_tasks_policy": {
      "description": "Set the behavior for what should happen with the pending direct task assignments of a robot. complete: pending direct tasks will be completed. canceled: pending direct tasks will be immediately canceled. If unset, it will default to complete.",
      "type": "string",
      "enum": ["complete", "cancel"]
    }
  },
  "required": ["type", "robot", "fleet", "commission"]
}
)raw_schema"_json;

} // namespace schemas
} // namespace rmf_api_msgs

#endif // RMF_API_MSGS__SCHEMAS__ROBOT_COMMISSION_REQUEST
