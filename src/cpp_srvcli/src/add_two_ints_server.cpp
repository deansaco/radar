#include "rclcpp/rclcpp.hpp"
#include "radar_conti_ars408_msgs/srv/add_three_ints.hpp"     // CHANGE

#include <memory>

void add(const std::shared_ptr<radar_conti_ars408_msgs::srv::AddThreeInts::Request> request,     // CHANGE
          std::shared_ptr<radar_conti_ars408_msgs::srv::AddThreeInts::Response>       response)  // CHANGE
{
  response->sum = request->a + request->b + request->c;                                       // CHANGE
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\na: %ld" " b: %ld" " c: %ld",   // CHANGE
                request->a, request->b, request->c);                                          // CHANGE
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%ld]", (long int)response->sum);
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("add_three_ints_server");  // CHANGE

  rclcpp::Service<radar_conti_ars408_msgs::srv::AddThreeInts>::SharedPtr service =                 // CHANGE
    node->create_service<radar_conti_ars408_msgs::srv::AddThreeInts>("add_three_ints",  &add);     // CHANGE

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to add three ints.");      // CHANGE

  rclcpp::spin(node);
  rclcpp::shutdown();
}