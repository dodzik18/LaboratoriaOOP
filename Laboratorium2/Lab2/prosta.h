#pragma once
#include "pkt.h"

class prosta
{

public:

	prosta() : a(0.), b(0.), _p1(0.,0.), _p2(0.,0.) {};
	prosta(pkt &p1, pkt &p2);
	prosta(const prosta &p2);
	
	void SprawdzRownoleglosc(prosta &pr2);
	void wypisz();
	void znak(float n)
	{ 
		if (n >= 0) std::cout << "+";
	}

	friend void wypisz(prosta pr1);
	friend void SprawdzProstopadlosc(prosta pr2, prosta pr3);

private:

	pkt _p1, _p2;
	float a, b;
};