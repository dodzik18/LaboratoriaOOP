#pragma once
#include "point.h"
#include <iostream>
class straight
{
public:
	straight()
		:p1(0., 0.), p2(0., 0.), a(0.), b(0.) {};
	straight(const point p1_, const point p2_)
		:p1(p1_), p2(p2_) 
	{
		a = (p2.getY() - p1.getY()) / (p2.getX() - p1.getX());
		b = (p2.getY() * (-p1.getX()) + p1.getY() * p1.getX() - p1.getX() * p1.getY() + p1.getX() * p1.getY()) / (p2.getX() - p1.getX());;
	};
	straight(const straight&);

	void show();

	void show(int);

	float getA() { return a; }
	float getB() { return b; }

	friend bool operator !=(straight&, straight&);
	friend bool operator ==(straight&, straight&);

private:
	point p1, p2;
	float a, b;
};

