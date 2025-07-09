//
// Created by Albert Manyà on 9/7/25.
//

#ifndef TEXTURE_H
#define TEXTURE_H
#include <string>

class Texture
{
private:
    unsigned int m_RendererID;
    std::string m_FilePath;
    unsigned char *m_LocalBuffer;
    int m_Width, m_Height, m_BPP;
public:
    Texture(const std::string& filePath);
    ~Texture();

    void Bind(unsigned int slot = 0) const;
    void Unbind() const;

    inline int GetWidth() const { return m_Width; }
};

#endif //TEXTURE_H
