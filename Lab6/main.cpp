#include "Rectangle.h"
#include "Circle.h"
#include "Shape.h"
#include <vector>


static void showShape(Shape& shape) {
	shape.draw();
}

int main() {
	unsigned int i;
	vector<Shape*> shapeList;
	Rectangle* rectanglePtr;
	Circle* circlePtr;

	rectanglePtr = new Rectangle;
	circlePtr = new Circle;
	shapeList.push_back(rectanglePtr);
	shapeList.push_back(circlePtr);

	for (i = 0; i < shapeList.size(); ++i) {
		shapeList.at(i)->draw();
	}

	return 0;
}