#pragma once
#include "Figure.h"
#include <iostream>
class Triangle :
	public Figure
{
public:
	Triangle(int a_ = 0, int h_ = 0)
		: Figure(a_), h(h_) {};

	double area();
	double circumference();
	void show();

	int getA() { return a; }; 

private:

	int h;//gives us one of sides

};

