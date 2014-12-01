#include"pkt.h"

void pkt::ustaw(string name, float w_x, float w_y)
{
	nazwa = name;
	X = w_x;
	Y = w_y;
}

void pkt::pobierz_info(float &w_x, float &w_y)
{
	w_x = X;
	w_y = Y;
}

float pkt::odl_od_sr()
{
	float odl;
	odl = sqrt(X*X + Y*Y);
	return odl;
}

pkt::pkt(float x, float y ,string nazwa)
{
	X = x;
	Y = y;
}

pkt::pkt(pkt &P)
{
	X = P.X;
	Y = P.Y;
}

