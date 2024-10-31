#pragma once
#include "Shape.h"

class Rectangle: public Shape
{
private:
	int width;
	int height;

public:
	Rectangle();
	Rectangle(int width, int height);
	void draw() const override;
	int getArea() const;
};

