#pragma once
#include "Figure.h"
#define _USE_MATH_DEFINES 
#include <cmath> //M_PI
#include <iostream>
class Circle :
	public Figure
{
public:
	Circle(int _a = 0)
		: Figure(_a) {} ;

	double area(void);
	double circumference(void);
	void show(void);

	int getA(void) { return a; }; //gives us radius of the circle
};

