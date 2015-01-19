#include "point.h"
#include <iostream>
point::point(const point& point_)
{
	coords[0] = point_.coords[0];
	coords[1] = point_.coords[1];
}
point::point(float x_, float y_)
{
	coords[0] = x_;
	coords[1] = y_;
}
void point::show()
{
	std::cout << "Wspolrzedne punktu: (" << coords[0] << ") (" << coords[1] << ")" <<std::endl;
}

point point::operator=(const point& point_)
{
	coords[0] = point_.coords[0];
	coords[1] = point_.coords[1];
	return *this;
}

point point::operator+(const point& point_)
{
	coords[0] += point_.coords[0];
	coords[1] += point_.coords[1];
	return *this;
}

point point::operator-(const point& point_)
{
	coords[0] -= point_.coords[0];
	coords[1] -= point_.coords[1];
	return *this;
}