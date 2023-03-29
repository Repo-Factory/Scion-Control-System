cmake_minimum_required(VERSION 3.5)
project(brain_node)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(robot_types REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)

add_executable(brain_exec src/brain_node.cpp)

ament_target_dependencies(brain_exec
"robot_types"
"rclcpp"
"rclcpp_action"
"rclcpp_components")

target_include_directories(brain_exec PUBLIC ../control_interface/include)

install(TARGETS
  brain_exec
  DESTINATION lib/${PROJECT_NAME})

ament_package()
