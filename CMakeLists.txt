cmake_minimum_required(VERSION 3.5.0)
project(Core VERSION 1.0.0)
cmake_policy(SET CMP0072 NEW)

find_package(OpenGL REQUIRED)

add_executable(Core
	main.cpp
	srcs/Logger.cpp
)

target_include_directories(Core PRIVATE
	${CMAKE_SOURCE_DIR}/includes
	${CMAKE_SOURCE_DIR}/includes/classes
	${CMAKE_SOURCE_DIR}/includes/enums
	${CMAKE_SOURCE_DIR}/includes/interfaces
)

target_compile_options(Core PRIVATE -Wall -Wextra -O3 -g -fPIE)