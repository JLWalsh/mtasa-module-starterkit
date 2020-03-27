project(MTA_MODULE)
cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)

find_package(LUA REQUIRED)

message(STATUS "Found Lua include directory at ${LUA_INCLUDE_DIR}")

# Integrate Lua as a library, for simplicity
add_library(Lua INTERFACE)
target_include_directories(Lua INTERFACE ${LUA_INCLUDE_DIR})

add_subdirectory(sdk)
add_subdirectory(module)
