cmake_minimum_required(VERSION 2.6)
cmake_policy(SET CMP0015 NEW)

project(PhysicsAutomatism)
gd_add_extension_includes()

#Defines
###
gd_add_extension_definitions(PhysicsAutomatism)

#The targets
###
include_directories(Box2D/Box2D)
file(GLOB_RECURSE box2d_source_files Box2D/Box2D/Box2D/*)
file(GLOB source_files * Box2D/Box2D/Box2D/* Triangulation/* ${box2d_source_files})

gd_add_extension_target(PhysicsAutomatism "${source_files}")
gdcpp_add_runtime_extension_target(PhysicsAutomatism_Runtime "${source_files}")

#Linker files for the IDE extension
###
gd_extension_link_libraries(PhysicsAutomatism)

#Linker files for the GD C++ Runtime extension
###
gdcpp_runtime_extension_link_libraries(PhysicsAutomatism_Runtime)
