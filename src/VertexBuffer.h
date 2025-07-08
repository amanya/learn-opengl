//
// Created by Albert Manyà on 8/7/25.
//

#ifndef VERTEXBUFFER_H
#define VERTEXBUFFER_H

class VertexBuffer
{
private:
    unsigned int m_RendererID;
public:
    VertexBuffer(const void *data, unsigned int size);
    ~VertexBuffer();

    void Bind() const;
    static void Unbind() ;
};

#endif //VERTEXBUFFER_H
