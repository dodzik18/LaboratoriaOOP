#include "straight.h"

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
	std::cout<< " i ma rownanie y=" << a << "x+"<<b<<std::endl;
}

void straight::show(int)
{
	p1.show();
	p2.show();
}