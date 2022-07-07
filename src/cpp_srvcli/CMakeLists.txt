cmake_minimum_required(VERSION 3.5)
project(cpp_srvcli)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(radar_conti_ars408_msgs REQUIRED)

add_executable(server src/add_two_ints_server.cpp)
ament_target_dependencies(server
  rclcpp radar_conti_ars408_msgs)

add_executable(client src/add_two_ints_client.cpp)
ament_target_dependencies(client
  rclcpp radar_conti_ars408_msgs)

install(TARGETS
  server
  client
  DESTINATION lib/${PROJECT_NAME})

ament_package()