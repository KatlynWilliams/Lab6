#pragma once
#include "Shape.cpp";

class Circle: public Shape
{
private:
	float radius;

private:
	Circle();
	Circle(float radius);
	float getArea();
	void draw();
};

