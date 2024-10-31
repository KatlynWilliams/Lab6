#include "Rectangle.h"
#include "Circle.h"
#include "Shape.h"

static void showShape(Shape& shape) {
	shape.draw();
}

int main() {

	Circle circle1;
	Circle circle2(1.1);
	showShape(circle1);
	
	Rectangle rectangle1;
	Rectangle rectangle2(5, 2);
	showShape(rectangle1);

	return 0;
}