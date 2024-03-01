cmake_minimum_required(VERSION 3.11)
project(Project_4)
set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
find_package(Eigen3 REQUIRED)


add_executable(${PROJECT_NAME} src/main.cpp src/matrix_operation.cpp)
# Include directories
target_include_directories(${PROJECT_NAME} PRIVATE include ${Eigen_INCLUDE_DIRS})

# Eigen is header only library so no need for target_link_libraries
# For distribution
# install(TARGETS ${PROJECT_NAME} DESTINATION ${PROJECT_BINARY_DIR}/bin)


