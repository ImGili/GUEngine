/*
 * @Author: ImGili
 * @Description: 
 */
#include"Renderer/UniformBuffer.h"
#include"Renderer/RenderAPI.h"
#include"Platform/OpenGL/OpenGLUniformBuffer.h"
using namespace GU;
std::shared_ptr<UniformBuffer> UniformBuffer::Create(uint32_t size, uint32_t binding)
{
    switch (RenderAPI::GetAPI())
    {
    case RenderAPI::API::None:
        GU_ASSERT(false, "RenderAPI is None")
        break;
    case RenderAPI::API::OpenGL:
        return std::make_shared<OpenGLUniformBuffer>(size, binding);
        break;
    default:
        break;
    }
    return nullptr;
}