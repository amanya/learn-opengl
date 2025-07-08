cmake_minimum_required(VERSION 3.7)
project(LearnOpenGL)

set(CMAKE_CXX_STANDARD 20)

list(PREPEND CMAKE_PREFIX_PATH "/opt/homebrew" "/usr/local")

find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)

add_executable(LearnOpenGL src/main.cpp)
target_include_directories(LearnOpenGL PRIVATE ${CMAKE_SOURCE_DIR}/src)

target_compile_definitions(LearnOpenGL PRIVATE GLEW_STATIC)

target_link_libraries(LearnOpenGL
        GLEW::GLEW
        OpenGL::GL
        glfw
)

file(COPY ${CMAKE_SOURCE_DIR}/res DESTINATION ${CMAKE_BINARY_DIR})