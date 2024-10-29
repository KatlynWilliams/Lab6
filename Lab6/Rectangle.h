#pragma once
#include "Shape.cpp";

class Rectangle: public Shape
{
public:
	int width;
	int height;

private:
	Rectangle();
	Rectangle(int width, int height);
	void draw();
	int getArea();
};

