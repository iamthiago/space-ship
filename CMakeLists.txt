cmake_minimum_required(VERSION 4.3)
project(spaceship_2d)

set(CMAKE_CXX_STANDARD 20)

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)

add_executable(spaceship_2d main.cpp
        Game.h
        Game.cpp
        Actor.h
        Component.h
        Math.h
        Actor.cpp
        Component.cpp)

target_link_libraries(spaceship_2d PRIVATE SDL2::SDL2)
target_link_libraries(spaceship_2d PRIVATE SDL2_image::SDL2_image)

target_compile_options(spaceship_2d PRIVATE -Wall -Wextra)