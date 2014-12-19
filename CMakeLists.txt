cmake_minimum_required(VERSION 2.8.4)
project(OpenGLFrameWork)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(OpenGLFrameWork ${SOURCE_FILES})

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )

target_link_libraries(OpenGLFrameWork ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )