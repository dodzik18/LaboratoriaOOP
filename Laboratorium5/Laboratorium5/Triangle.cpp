#include "Triangle.h"



double Triangle::area()
{
	return 0.5*getA()*h;
}

double Triangle::circumference()
{
	return getA() + h + (getA()*getA() + h*h);
}
void Triangle::show()
{
	std::cout << "Trojkat:" << std::endl;
	std::cout << "Pole: " << area() << ", obwod: " << circumference() << std::endl;
}