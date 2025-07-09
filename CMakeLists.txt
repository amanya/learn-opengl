cmake_minimum_required(VERSION 3.7)
project(LearnOpenGL)

set(CMAKE_CXX_STANDARD 20)

list(PREPEND CMAKE_PREFIX_PATH "/opt/homebrew" "/usr/local")

find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)

add_executable(LearnOpenGL src/main.cpp
        src/Renderer.cpp
        src/Renderer.h
        src/VertexBuffer.cpp
        src/VertexBuffer.h
        src/IndexBuffer.cpp
        src/IndexBuffer.h
        src/VertexArray.cpp
        src/VertexArray.h
        src/VertexBufferLayout.cpp
        src/VertexBufferLayout.h
        src/Shader.cpp
        src/Shader.h
        src/vendor/stb_image/stb_image.h
        src/vendor/stb_image/stb_image.cpp
        src/Texture.cpp
        src/Texture.h
)
target_include_directories(LearnOpenGL PRIVATE ${CMAKE_SOURCE_DIR}/src)

target_compile_definitions(LearnOpenGL PRIVATE GLEW_STATIC)

target_link_libraries(LearnOpenGL
        GLEW::GLEW
        OpenGL::GL
        glfw
)

file(COPY ${CMAKE_SOURCE_DIR}/res DESTINATION ${CMAKE_BINARY_DIR})