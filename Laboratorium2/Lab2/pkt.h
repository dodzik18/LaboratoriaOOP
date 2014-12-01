#pragma once
#include <iostream>

class pkt
{

public:
	float x, y;

	pkt(float xx = 0., float yy = 0.):x(xx), y(yy) {};
	pkt(const pkt &p3);

	void wypisz();
	pkt suma(const pkt &p3);

	pkt & operator=(const pkt &p2);

	friend void wypisz(const pkt &p2);
	friend pkt roznica(const pkt &p1, const pkt &p3); 
};