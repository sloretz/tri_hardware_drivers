#include <memory>

#include <rclcpp/rclcpp.hpp>

#include "robotiq_ft_driver_node.ros2.hpp"

int main(int argc, char** argv)
{
  auto args = rclcpp::init_and_remove_ros_arguments(argc, argv);
  rclcpp::spin(
      std::make_shared<robotiq_ft_driver::RobotiqFTDriverNode>(
          rclcpp::NodeOptions().arguments(args)));
  rclcpp::shutdown();
  return 0;
}
