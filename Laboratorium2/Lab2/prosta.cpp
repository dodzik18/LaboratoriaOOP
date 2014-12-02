#include "prosta.h"

prosta::prosta(pkt &p2, pkt &p3)
{
	x1 = p2.x; x2 = p2.y;
	y1 = p3.x; y2 = p3.y;
}
prosta::prosta(const prosta &pr2)
{
	x1 = pr2.x1;
	x2 = pr2.x2;
	y1 = pr2.y1;
	y2 = pr2.y2;
}

void prosta::wypisz()
{
	std::cout << "Prosta przechodzi przez punkty: (" << x1 << "," << x2 << "),(" << y1 << ","<< y2 << ")" << std::endl;
}

