cmake_minimum_required(VERSION 3.7)
project(LearnOpenGL)

set(CMAKE_CXX_STANDARD 20)

list(PREPEND CMAKE_PREFIX_PATH "/opt/homebrew" "/usr/local")

find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)

add_executable(LearnOpenGL main.cpp)

target_compile_definitions(LearnOpenGL PRIVATE GLEW_STATIC)

target_link_libraries(LearnOpenGL
        GLEW::GLEW
        OpenGL::GL
        glfw
)