#include "straight.h"
#include <iostream>
straight::straight(const point p1_, const point p2_):p1(p1_), p2(p2_)
{
	a = (p2.getY() - p1.getY()) / (p2.getX() - p1.getX());
	b = (p2.getY() * (-p1.getX()) + p1.getY() * p1.getX() - p1.getX() * p1.getY() + p1.getX() * p1.getY()) / (p2.getX() - p1.getX());;
}

straight::straight(const straight& straight_)
{
	p1 = straight_.p1;
	p2 = straight_.p2;
	a = straight_.a;
	b = straight_.b;
}

void straight::show()
{
	std::cout << "Prosta przechodzi przez punkty: ";
	p1.show();
	std::cout << " ";
	p2.show();
	std::cout<< " i ma rownanie y=" << a << "x"<< sign() << b << std::endl;
}

void straight::show(int)
{
	p1.show();
	p2.show();
}