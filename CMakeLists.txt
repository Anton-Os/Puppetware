cmake_minimum_required(VERSION 3.7)
project(PixelPuppets)

add_subdirectory(Rasteron)
add_subdirectory(Topl)

add_executable(PixelPuppets PixelPuppets_App.cpp)
# target_link_libraries(PixelPuppets Rasteron )