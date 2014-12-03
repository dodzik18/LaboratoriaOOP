#include "LiczbaZespolona.h"



LiczbaZespolona::LiczbaZespolona(const LiczbaZespolona &lz)
{
	re = lz.re;
	im = lz.im;
}

void LiczbaZespolona::pobierz(double &x, double &y)
{
	x = re;
	y = im;
}