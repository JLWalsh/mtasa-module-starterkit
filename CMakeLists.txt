project(MTA_MODULE)
cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 17)

find_package(LUA REQUIRED)

add_subdirectory(mta)
add_subdirectory(module)
