//
// Created by Albert Manyà on 8/7/25.
//

#ifndef RENDERER_H
#define RENDERER_H

#include <GL/glew.h>

#define ASSERT(x) if (!(x)) __builtin_debugtrap();
#define GLCall(x) GLClearError();\
    x;\
    ASSERT(GLLogCall(#x, __FILE_NAME__, __LINE__))

void GLClearError();
bool GLLogCall(const char *function, const char *file, int line);

#endif //RENDERER_H
