#include "Rectangle.h"
#include "Circle.h"
#include "Shape.h"
#include <vector>
#include <memory>


static void showShape(Shape& shape) {
	shape.draw();
}

int main() {
//Without Unique Pointer
	unsigned int i;
	vector<Shape*> shapeList;

	shapeList.push_back(new Rectangle());
	shapeList.push_back(new Circle());

	for (const auto& Shape : shapeList) {
		Shape->draw();
	}
	//Delete objects when done
	for (const auto& Shape : shapeList) {
		delete Shape;
	}

	//Remove/Clear the vector
	shapeList.clear();

//With Unique Pointer
	vector<std::unique_ptr<Shape>>shapeList2;
	shapeList2.push_back(std::make_unique<Rectangle>(2,3));
	shapeList2.push_back(std::make_unique<Circle>(4));

	for (const auto& Shape : shapeList2) {
		Shape->draw();
	}

	shapeList2.clear();

	return 0;
}