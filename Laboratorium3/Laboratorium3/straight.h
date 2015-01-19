#pragma once
#include "point.h"
#include <string>
class straight
{
public:
	straight()
		:p1(0., 0.), p2(0., 0.), a(0.), b(0.) {};

	straight(const point p1_, const point p2_);;
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
	inline std::string sign() //inserts correct sign into euqation, depending on b
	{
		if (b > 0) return "+";
		else return "";
	}
	
};

