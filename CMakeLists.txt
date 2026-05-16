cmake_minimum_required(VERSION 3.10)

project(RobotTrackingSystem)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(robot_system
main.cpp
RobotManager.cpp
Robot.cpp
Sensor.cpp
)

target_link_libraries(robot_system ${OpenCV_LIBS}) 