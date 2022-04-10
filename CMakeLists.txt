cmake_minimum_required(VERSION 3.7)
project(Puppetware)

add_subdirectory(Rasteron)
add_subdirectory(Topl)

add_executable(Puppetware Puppetware_App.cpp)
# target_link_libraries(Puppetware Rasteron )