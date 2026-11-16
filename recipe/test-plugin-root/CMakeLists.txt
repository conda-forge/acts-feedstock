cmake_minimum_required(VERSION 3.20)
project(acts_plugin_root_test CXX)

find_package(Acts CONFIG REQUIRED COMPONENTS Core PluginRoot)

add_executable(acts_plugin_root_test main.cpp)
target_link_libraries(acts_plugin_root_test PRIVATE Acts::Core Acts::PluginRoot)
