#include "pkt.h"

pkt::pkt(const pkt &p3)
{
	x = p3.x;
	y = p3.y;
}

void pkt::wypisz()
{
	std::cout << "Wspolrzedne punktu: " << "(" << x << "," << y << ")" << std::endl;
}
void pkt::_wypisz()
{
	std::cout << " (" << x << "," << y << ") ";
}

void pkt::pobierz(float &_x, float &_y)
{
	_x = x;
	_y = y;
}

void pkt::ustaw(float &_x, float &_y)
{
	x = _x;
	y = _y;
}

pkt pkt::suma(const pkt &p3) 
{
	pkt temp;
	temp.x = x + p3.x;
	temp.y = y + p3.y; 
	return temp;  
}

pkt &pkt::operator=(const pkt &p2) 
{
	x = p2.x;
	y = p2.y;
	return *this; 
}
