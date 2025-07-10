//
// Created by Albert Manyà on 9/7/25.
//

#ifndef SHADER_H
#define SHADER_H
#include <string>
#include <unordered_map>

#include "glm/fwd.hpp"
#include "glm/gtc/matrix_transform.hpp"

struct ShaderProgramSource
{
    std::string VertexSource;
    std::string FragmentSource;
};

class Shader
{
private:
    std::string m_FilePath;
    unsigned int m_RendererID;
    std::unordered_map<std::string, int> m_UniformLocationCache;
    // caching for uniforms
public:
    Shader(const std::string& filePath);
    ~Shader();
    void Bind() const;
    static void Unbind() ;

    // set uniforms
    void SetUniform1i(const std::string& name, int value);
    void SetUniform4f(const std::string& name, float v0, float v1, float v2, float v3);
    void SetUniformMat4f(const std::string& name, const glm::mat4& matrix);
private:
    int GetUniformLocation(const std::string &name);
    static unsigned int CompileShader(unsigned int type, const std::string &source);
    unsigned int CreateShader(const std::string &vertexShader, const std::string &fragmentShader);
    static ShaderProgramSource ParseShader(const std::string& filePath);
};

#endif //SHADER_H
