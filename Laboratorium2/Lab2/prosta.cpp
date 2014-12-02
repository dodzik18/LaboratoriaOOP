#include "prosta.h"


prosta::prosta(pkt &p2, pkt &p3)
{
	float x1=0, x2=0, y1=0, y2=0;
	p2.pobierz(x1, y1);
	p3.pobierz(x2, y2);
	_p1.ustaw(x1, y1);
	_p2.ustaw(x2, y2);
	a = (y2-y1);
	b = (y2 * (-x1) + y1 * x1 - x2 * y1 + x1 * y1) / (x2 - x1);
}

prosta::prosta(const prosta &pr2)
{
	a = pr2.a;
	b = pr2.b;
	_p1 = pr2._p1;
	_p2 = pr2._p2;
}

void prosta::wypisz()
{
	std::cout << "Prosta przechodzi przez punkty";
	_p1._wypisz(); 	_p2._wypisz();
	std::cout << "i ma rownanie y=";
	std::cout << a << "x";
	znak(b);
	std::cout<< b << std::endl;
}

void prosta::SprawdzRownoleglosc(prosta &pr2)
{
	if (a == pr2.a) std::cout << "Proste sa rownolegle." << std::endl;
	else std::cout << "Proste nie sa rownolegle." << std::endl;
}