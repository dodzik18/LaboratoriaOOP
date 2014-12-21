#include "Circle.h"


double Circle::area()
{
	return M_PI*getA()*getA();
}

double Circle::circumference()
{
	return 2 * M_PI*getA();
}

void Circle::show()
{
	std::cout << "Kolo:" << std::endl;
	std::cout << "Pole: " << area() << ", obwod: " << circumference() << std::endl;
}