#pragma once
#include <string>
using namespace std;

class Shape
{
private:
	string background;

public:
	string getBackground();
	void setBackground(string backgroundColor);
	void draw();
};

