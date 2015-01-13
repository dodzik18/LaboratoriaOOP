#pragma once
#include "Figure.h"
#include <iostream>
class Triangle :
	public Figure
{
public:
	Triangle(int a_ = 0, int h_ = 0)
		: Figure(a_), h(h_) {};

	double area(void);
	double circumference(void);
	void show(void);


	int getA(void) { return a; }; //gives us both sides 

private:

	int h; //height

};

