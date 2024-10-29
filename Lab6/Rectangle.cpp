#include "Rectangle.h"

Rectangle::Rectangle() {

}

Rectangle::Rectangle(int width, int height) {
	this->width = width;
	this->height = height;
}

void Rectangle::draw() {

}

int Rectangle::getArea() {
	return (width * height);
}