cmake_minimum_required(VERSION 3.8)
FIND_PACKAGE(yaml-cpp REQUIRED)

project(traker_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()


# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(yaml-cpp REQUIRED)


add_executable(founder src/founder.cpp)
ament_target_dependencies(founder rclcpp std_msgs yaml-cpp)

add_executable(tracker src/tracker.cpp)
ament_target_dependencies(tracker rclcpp std_msgs)

include_directories(${YAML_CPP_INCLUDE_DIR})
target_link_libraries(founder yaml-cpp)

install(TARGETS
  founder
  tracker
  DESTINATION lib/${traker_package})

ament_export_dependencies(rosidl_default_runtime)
ament_export_include_directories(include)
ament_export_libraries(tracker_package)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()



ament_package()
