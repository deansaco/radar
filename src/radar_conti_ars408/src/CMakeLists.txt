cmake_minimum_required(VERSION 3.5)

project(radar_conti_ars408)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# if CMAKE_BUILD_TYPE is not specified, take 'Release' as default
IF(NOT CMAKE_BUILD_TYPE)
    SET(CMAKE_BUILD_TYPE Release)
ENDIF(NOT CMAKE_BUILD_TYPE)



##########################################################
#######             INCLUDES AND LIBS            #########
##########################################################
find_package(ament_cmake REQUIRED)
find_package(radar_conti_ars408_msgs REQUIRED)
find_package(ament_index_cpp REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(example_interfaces REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(rcutils REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rclcpp_lifecycle REQUIRED)
find_package(lifecycle_msgs REQUIRED)
find_package(class_loader REQUIRED)
find_package(rmw_implementation REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(can_msgs REQUIRED)
find_package(radar_conti_ars408_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(ros2socketcan_bridge REQUIRED)
find_package(ament_index_cpp REQUIRED)
##########################################################


##########################################################
#######             INCLUDES AND LIBS            #########
##########################################################
include_directories(
  include
  ${CMAKE_CURRENT_SOURCE_DIR}/src
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  ${rclcpp_lifecycle_INCLUDE_DIRS}
  ${lifecycle_msgs_INCLUDE_DIRS}
  ${rclcpp_INCLUDE_DIRS}
  ${class_loader_INCLUDE_DIRS}
  ${rmw_implementation_INCLUDE_DIRS}
  ${std_msgs_INCLUDE_DIRS}
  ${geometry_msgs_INCLUDE_DIRS}
  ${ros2socketcan_bridge_INCLUDE_DIRS}
)
##########################################################


##########################################################
#######         Component and Executable         #########
##########################################################
# create ament index resource which references the libraries in the binary dir
set(node_plugins "")



add_library(radar_conti_ars408_component SHARED ${CMAKE_CURRENT_SOURCE_DIR}/src/radar_conti_ars408_component.cpp)
target_compile_definitions(radar_conti_ars408_component PRIVATE "RADAR_CONTI_ARS408_BUILDING_DLL")
target_link_libraries(radar_conti_ars408_component dl -lboost_system
    ${rclcpp_lifecycle_LIBRARIES}
    ${ament_index_cpp_LIBRARIES}
)

ament_target_dependencies(
  radar_conti_ars408_component
  radar_conti_ars408_msgs
  can_msgs
  visualization_msgs
  tf2_ros
  ros2socketcan_bridge
  "rclcpp_lifecycle"
  "rclcpp"
  "std_msgs"
  "class_loader"
  "rclcpp_components"
  "geometry_msgs"
  ament_index_cpp
)

rclcpp_components_register_nodes(radar_conti_ars408_component "FHAC::radar_conti_ars408")
set(node_plugins "${node_plugins}FHAC::radar_conti_ars408;$<TARGET_FILE:radar_conti_ars408_component>\n")

# since the package installs libraries without exporting them
# it needs to make sure that the library path is being exported
if(NOT WIN32)
  ament_environment_hooks(
    "${ament_cmake_package_templates_ENVIRONMENT_HOOK_LIBRARY_PATH}")
endif()


add_executable(radar_conti_ars408_composition ${CMAKE_CURRENT_SOURCE_DIR}/src/radar_conti_ars408_composition.cpp)
target_link_libraries(
  radar_conti_ars408_composition
  radar_conti_ars408_component
)

#add_executable(talker src/publisher_member_function.cpp)
#ament_target_dependencies(talker rclcpp std_msgs)

#ament_target_dependencies(talker rclcpp radar_conti_ars408_msgs)


# install(TARGETS
#   talker
#   DESTINATION lib/${PROJECT_NAME})

#add_executable(listener src/subscriber_member_function.cpp)
#ament_target_dependencies(listener rclcpp std_msgs)
#ament_target_dependencies(listener rclcpp radar_conti_ars408_msgs)

    
# install(TARGETS
#   talker
#   listener
#   DESTINATION lib/${PROJECT_NAME})

  
ament_target_dependencies(radar_conti_ars408_composition
  "rclcpp"
)
##########################################################


##########################################################
##############         INSTALLS         ##################
##########################################################
#install executable 
install(
  TARGETS radar_conti_ars408_composition
  DESTINATION lib/${PROJECT_NAME})

# install plugins
install(
  TARGETS radar_conti_ars408_component
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin)

# install header files
install(
    DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/
    DESTINATION include/${PROJECT_NAME}/
)

# Install YAML files
#install(
#    DIRECTORY config
#    DESTINATION share/${PROJECT_NAME})

install(
  DIRECTORY resources
  DESTINATION share/${PROJECT_NAME}
)

# Install launch files.
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)
##########################################################


##########################################################
###########      Register package       ##################
##########################################################
ament_package()
##########################################################
