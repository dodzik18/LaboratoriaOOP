#pragma once
#include "Figure.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
class Circle :
	public Figure
{
public:
	Circle(int _a = 0)
		: Figure(_a) {} ;

	double area();
	double circumference();
	void show();

	int getA() {return a;}; //gives us radius of the circle
};

