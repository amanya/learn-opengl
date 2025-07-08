//
// Created by Albert Manyà on 8/7/25.
//

#include "Renderer.h"
#include <iostream>

void GLClearError()
{
    while (glGetError() != GL_NO_ERROR);
}

bool GLLogCall(const char *function, const char *file, int line)
{
    while (GLenum error = glGetError())
    {
        std::cout << "OpenGL Error: " << function << " at " << file << ":" << line << " - " << error << std::endl;
        return false;
    }
    return true;
}

