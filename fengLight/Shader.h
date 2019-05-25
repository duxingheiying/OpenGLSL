#pragma once

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <gl\glew.h>

class Shader
{
public:
	Shader(const GLchar* vertexPath,
		   const GLchar* fragmentPath);
	~Shader();

public:
	void setFloat(const GLchar* fragmentPath, const GLfloat offset);
	void Use();

public:
	GLuint Program;

private:

};