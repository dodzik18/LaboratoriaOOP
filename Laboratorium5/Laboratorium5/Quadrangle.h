#pragma once
#include "Figure.h"
#include <iostream>
class Quadrangle :
	public Figure
{
public:
	Quadrangle(int a_ = 0, int b_ = 0)
		: Figure(a_), b(b_) {};

	double area();
	double circumference();
	void show();


	int getA() { return a; };

private:

	int b; //we are inheriting second side, by getA() func. 
};

