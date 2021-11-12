/*
 * @Author: ImGili
 * @Description: 
 */
#pragma once
#include"Core/Core.h"
#include"Renderer/RenderAPI.h"
#include"Renderer/VertexArray.h"
#include<glm/glm.hpp>
#include<memory>
namespace GU
{
    class GU_API RenderCommand
    {
    public:
        static void Init();
        static void SetClearColor(const glm::vec4& color);
        static void Clear();
        static void DrawIndexed(const std::shared_ptr<VertexArray>& vertexArray, uint32_t indexCount = 0);
    private:
        static std::unique_ptr<RenderAPI> s_RenderAPI;
    };
}