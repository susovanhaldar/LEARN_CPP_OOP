# Disable in-source builds to prevent source tree corruption.
if(" ${CMAKE_SOURCE_DIR}" STREQUAL " ${CMAKE_BINARY_DIR}")
  message(FATAL_ERROR "
FATAL: In-source builds are not allowed.
       You should create a separate directory for build files.
")
endif()

# Specify the minimum version for CMake

cmake_minimum_required(VERSION 2.8)

# Project's name

project(oop_cpp)
# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
# SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")


#include_directories(${CMAKE_SOURCE_DIR}/src)

set(SOURCES base/base_class.cpp
            src/object.cpp
            main.cpp )

add_executable(oop_cpp ${SOURCES})

target_include_directories(oop_cpp PRIVATE ${CMAKE_SOURCE_DIR}/base ${CMAKE_SOURCE_DIR}/src)