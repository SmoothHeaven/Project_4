cmake_minimum_required(VERSION 3.11)
project(Project_4)
set(CMAKE_CXX_STANDARD 14)

find_package(Eigen3 REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp src/matrix_operation.cpp)
# Include directories
target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_SOURCE_DIR}/include" ${Eigen_INCLUDE_DIRS})

#Eigen is header only library so no need for target_link_libraries

install(TARGETS ${PROJECT_NAME} DESTINATION ${PROJECT_SOURCE_DIR}/bin)


