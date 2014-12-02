#pragma once
#include <iostream>

class pkt
{
public:

	pkt(float xx = 0., float yy = 0.):x(xx), y(yy) {};
	pkt(const pkt &p3);

	void wypisz();
	void _wypisz();
	void pobierz(float &_x, float &_y);
	void ustaw(float &_x, float &_y);
	pkt suma(const pkt &p3);


	friend void wypisz(const pkt &p2);
	friend pkt roznica(const pkt &p1, const pkt &p3); 

	pkt & operator=(const pkt &p2);

private:

	float x, y;
};