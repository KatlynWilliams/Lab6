#include "Circle.h"

Circle::Circle() {

}

Circle::Circle(float radius) {
	this->radius = radius;
}

float Circle::getArea() {
	return (3.14 * radius + radius);
}

void Circle::draw() {

}