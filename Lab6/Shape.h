#pragma once
#include <string>
#include <iostream>
using namespace std;

class Shape
{
private:
	string background;

public:
	string getBackground() const;
	void setBackground(string backgroundColor);
	virtual void draw() const;
};

