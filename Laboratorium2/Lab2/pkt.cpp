#include "pkt.h"

pkt::pkt(const pkt &p3)
{
	this->x = p3.x;
	this->y = p3.y;
}

void pkt::wypisz()
{
	std::cout << "Wspolrzedne punktu: " << "(" << this->x << "," << this->y << ")" << std::endl;
}

pkt pkt::suma(const pkt &p3)
{
	pkt temp;
	temp.x += p3.x;
	temp.y += p3.y; //b³¹d prawdopodobnie, ale coœ w ten deseñ
	return temp;  //5,12
}

pkt &pkt::operator=(const pkt &p2)
{
	x = p2.x;
	y = p2.y;
	return *this;
}

void wypisz(const pkt &p2)
{
	std::cout << "(" << p2.x << "," << p2.y << ")" << std::endl;
}

pkt roznica(const pkt &p1, const pkt &p3)
{
	pkt temp;
	temp.x = p1.x - p3.x;
	temp.y = p1.y - p3.y;
	return temp; //2, 5
}

