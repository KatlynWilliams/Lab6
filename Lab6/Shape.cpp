#include "Shape.h"

string Shape::getBackground() const{
	return background;
}

void Shape::setBackground(string backgroundColor) {
	background = backgroundColor;
}

void Shape::draw() const{
	cout << "Drawing a shape." << endl;
}