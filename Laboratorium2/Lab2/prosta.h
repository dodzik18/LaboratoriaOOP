#pragma once
#include "pkt.h"
class prosta
{
private:
	//pkt p1, p2;
	//float a, b;
	float x1, x2, y1, y2;
public:

	prosta(float xx = 0., float xz = 0., float yy = 0., float yz = 0.)
		:x1(xx), x2(xz), y1(yy), y2(yz) {};
	prosta(pkt &p2, pkt &p3);

	prosta(const prosta &pr2);
	void wypisz();

	friend void wypisz(prosta &pr1);

};