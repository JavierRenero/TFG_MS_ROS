// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rover_msgs:msg/MotorsCommand.idl
// generated code does not contain a copyright notice

#ifndef ROVER_MSGS__MSG__DETAIL__MOTORS_COMMAND__BUILDER_HPP_
#define ROVER_MSGS__MSG__DETAIL__MOTORS_COMMAND__BUILDER_HPP_

#include "rover_msgs/msg/detail/motors_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rover_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorsCommand_corner_motor
{
public:
  explicit Init_MotorsCommand_corner_motor(::rover_msgs::msg::MotorsCommand & msg)
  : msg_(msg)
  {}
  ::rover_msgs::msg::MotorsCommand corner_motor(::rover_msgs::msg::MotorsCommand::_corner_motor_type arg)
  {
    msg_.corner_motor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rover_msgs::msg::MotorsCommand msg_;
};

class Init_MotorsCommand_drive_motor
{
public:
  Init_MotorsCommand_drive_motor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorsCommand_corner_motor drive_motor(::rover_msgs::msg::MotorsCommand::_drive_motor_type arg)
  {
    msg_.drive_motor = std::move(arg);
    return Init_MotorsCommand_corner_motor(msg_);
  }

private:
  ::rover_msgs::msg::MotorsCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rover_msgs::msg::MotorsCommand>()
{
  return rover_msgs::msg::builder::Init_MotorsCommand_drive_motor();
}

}  // namespace rover_msgs

#endif  // ROVER_MSGS__MSG__DETAIL__MOTORS_COMMAND__BUILDER_HPP_
