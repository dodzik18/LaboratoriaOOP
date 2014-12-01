#include "prosta.h"

prosta::prosta(pkt &p2, pkt &p3)
{
	x1 = p2.x; x2 = p2.y;
	y1 = p3.x; y2 = p3.y;
}
prosta::prosta(const prosta &pr2)
{
	this->x1 = pr2.x1;
	this->x2 = pr2.x2;
	this->y1 = pr2.y1;
	this->y2 = pr2.y2;
}

void prosta::wypisz()
{
	std::cout << "Prosta przechodzi przez punkty: (" << this->x1 << "," << this->x2 << "),(" << this->y1 << ","
		<< this->y2 << ")" << std::endl;
}

void wypisz(prosta &pr1)
{
	std::cout << "Prosta przechodzi przez punkty: (" << pr1.x1 << "," << pr1.x2 << "),(" << pr1.y1 << ","
		<< pr1.y2 << ")" << std::endl;
}