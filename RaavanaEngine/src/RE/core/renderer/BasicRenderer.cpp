#include "repch.h"
#include "BasicRenderer.h"

namespace RE {

	void BasicRenderer::Clear() const
	{
		glClear(GL_COLOR_BUFFER_BIT);
	}

	void BasicRenderer::Draw(const VertexArray& va, const IndexBuffer& ib, const Shader& shader, uint32_t indexCount) const
	{
		va.Bind(); 
		ib.Bind();
		shader.Bind();
		glDrawElements(GL_TRIANGLES, indexCount, GL_UNSIGNED_INT, nullptr);
	}

	void BasicRenderer::SetClearColor(float r, float g, float b, float a)
	{
		glClearColor(r, g, b, a);
	}

}