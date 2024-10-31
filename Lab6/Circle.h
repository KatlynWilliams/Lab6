#pragma once
#include "Shape.h"

class Circle: public Shape
{
private:
	float radius;

public:
	Circle();
	explicit Circle(float radius);
	float getArea() const;
	void draw() const override;
};

