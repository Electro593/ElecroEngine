#pragma once

#include <GL/glew.h>
#include <iostream>
#include <vector>
#include "../math/math.h"
#include "../utils/fileutils.h"


namespace electro_engine { namespace graphics {

	class Shader
	{
	private:
		//GLuint m_ShaderID;
		const char* m_VertPath;
		const char* m_FragPath;

		GLint getUniformLocation(const GLchar* name);

		GLuint load();
	public:
		GLuint m_ShaderID;
		
		Shader(const char* vertPath, const char* fragPath);
		~Shader();

		void setUniform1i(const GLchar* name, int value);
		void setUniform1f(const GLchar* name, int value);
		void setUniform2f(const GLchar* name, const math::vec2& vector);
		void setUniform3f(const GLchar* name, const math::vec3& vector);
		void setUniform4f(const GLchar* name, const math::vec4& vector);
		void setUniformMat4(const GLchar* name, const math::mat4& matrix);


		void enable() const;
		void disable() const;
	};

} }