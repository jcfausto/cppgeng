cmake_minimum_required(VERSION 3.9)

project(cppgeng)

# Defines the output directory for the compiled artifact
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)

# setting up SDL2
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${cppgeng_SOURCE_DIR}/cmake")

# The path where you have SDL2 installed
set(SDL2_PATH "${MINGW_HOME}\\include\\SDL2")

# This tool will find the correct path for SDL2 libraries.
# and will set to the SDL2_INCLUDE_DIR variable
find_package(SDL2 REQUIRED)

include_directories(${SDL2_INCLUDE_DIR})

include_directories(
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/include/managers
)

SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB_RECURSE SRCS src/*.cpp)
file(GLOB_RECURSE HDRS include/*.h)

add_executable(cppgeng ${SRCS} ${HDRS})
target_link_libraries(cppgeng ${SDL2_LIBRARY})
