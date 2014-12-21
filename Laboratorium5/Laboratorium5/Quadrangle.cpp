#include "Quadrangle.h"

double Quadrangle::area()
{
	return getA() * b;
}

double Quadrangle::circumference()
{
	return (2 * getA()) + (2 * b);
}

void Quadrangle::show()
{
	std::cout << "Kwadrat:" << std::endl;
	std::cout << "Pole: " << area() << ", obwod: " << circumference() << std::endl;
}
