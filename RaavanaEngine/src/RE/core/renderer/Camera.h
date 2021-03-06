#pragma once
#include "repch.h"
#include "core.h"
#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"

namespace RE {

	class Camera {

	private:
		glm::mat4 m_Projection;
		glm::mat4 m_View;
		glm::mat4 m_ScaleMat;
		glm::mat4 m_Rotation;
		glm::mat4 m_ViewProjection;

		glm::vec3 m_Position;
		glm::vec3 m_Scale;

		float m_RotationZ;

	public:
		Camera(float minX, float maxX, float minY, float maxY);
		~Camera();

		void SetPosition(const glm::vec3& pos);
		void SetScale(const glm::vec2& scale);
		void Rotate(float angle);

		inline glm::mat4 GetViewProjection() const { return m_ViewProjection; }

	private:
		void RecalculateViewProjection();

	};

}