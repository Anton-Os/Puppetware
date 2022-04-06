cmake_minimum_required(VERSION 3.7)
project(Puppetops)

add_subdirectory(Rasteron)
add_subdirectory(Topl)

add_executable(Puppetops Puppetops_App.cpp)
# target_link_libraries(Puppetops Rasteron )