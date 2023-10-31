cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

project(sfml-lab-4)

find_package(Freetype REQUIRED)
find_package(JPEG REQUIRED)
find_package(SFML 2 COMPONENTS window graphics system REQUIRED)

add_subdirectory(workshop1.1)
add_subdirectory(workshop1.2)
add_subdirectory(workshop1.3)
add_subdirectory(workshop1.4)