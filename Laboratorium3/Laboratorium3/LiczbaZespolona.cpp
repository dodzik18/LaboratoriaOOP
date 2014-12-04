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

void LiczbaZespolona::ustaw(double &x, double &y)
{
	re = x;
	im = y;
}

LiczbaZespolona LiczbaZespolona::liczbaPrzeciwna() 
{
	LiczbaZespolona temp;
	temp.re = (-re);
	temp.im = (-im);
	return temp;
}

LiczbaZespolona LiczbaZespolona::operator+(LiczbaZespolona &lz)
{
	LiczbaZespolona temp;
	temp.re = re + lz.re;
	temp.im = im + lz.im;
	return temp;
}

LiczbaZespolona LiczbaZespolona::operator-(LiczbaZespolona &lz)
{
	LiczbaZespolona temp;
	temp.re = re - lz.re;
	temp.im = im - lz.im;
	return temp;
}

LiczbaZespolona LiczbaZespolona::operator*(LiczbaZespolona &lz)
{
 	LiczbaZespolona temp;

	temp.re = (re*lz.re) - (im*lz.im);
	temp.im = (re*lz.im) + (im*lz.re);

	return temp;
}

double LiczbaZespolona::operator!()
{
	double temp=0;
	temp = sqrt((re*re)+(im*im));
	return temp;
}