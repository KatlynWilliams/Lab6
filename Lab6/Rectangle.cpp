#include "Rectangle.h"

Rectangle::Rectangle() {
	width = 10;
	height = 5;
}

Rectangle::Rectangle(int width, int height) {
	this->width = width;
	this->height = height;
}

void Rectangle::draw() const{
	cout << "Drawing a rectangle." << endl;
}

int Rectangle::getArea() const{
	return (width * height);
}