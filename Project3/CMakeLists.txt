cmake_minimum_required(VERSION 2.6)
project(project3)

add_executable(project3 main.cpp)

install(TARGETS project3 RUNTIME DESTINATION bin)
