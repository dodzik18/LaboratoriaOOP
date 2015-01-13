#pragma once
#include "Figure.h"
#include <iostream>
class Quadrangle :
	public Figure
{
public:
	Quadrangle(int a_ = 0, int b_ = 0)
		: Figure(a_), b(b_) {};

	double area(void);
	double circumference(void);
	void show(void);


	int getA(void) { return a; }; //gives us one of two sides

private:

	int b; 
};

