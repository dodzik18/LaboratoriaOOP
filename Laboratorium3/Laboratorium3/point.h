#pragma once
#include <iostream>
class point
{
public:
	point(float x_ = 0., float y_ = 0.);
	point(const point&);

	void show();

	float getX() { return coords[0]; }
	float getY() { return coords[1]; }

private:
	float coords[2];
};

