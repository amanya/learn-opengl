//
// Created by Albert Manyà on 8/7/25.
//

#ifndef RENDERER_H
#define RENDERER_H

#include <GL/glew.h>

#include "IndexBuffer.h"
#include "Shader.h"
#include "VertexArray.h"

#define ASSERT(x) if (!(x)) __builtin_debugtrap();
#define GLCall(x) GLClearError();\
    x;\
    ASSERT(GLLogCall(#x, __FILE_NAME__, __LINE__))

void GLClearError();
bool GLLogCall(const char *function, const char *file, int line);

class Renderer
{
public:
    Renderer();
    ~Renderer();
    void Draw(const VertexArray& va, const IndexBuffer& ib, const Shader& shaderi) const;
    void Clear() const;
};

#endif //RENDERER_H
