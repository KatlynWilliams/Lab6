#include "Circle.h"

Circle::Circle() {
	radius = 10.5;
}

Circle::Circle(float radius) {
	this->radius = radius;
}

float Circle::getArea() const{
	return (3.14 * radius + radius);
}

void Circle::draw() const{
	cout << "drawing a circle." << endl;
}