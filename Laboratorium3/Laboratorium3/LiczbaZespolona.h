#pragma once
#include <cmath>

class LiczbaZespolona
{
public:
	LiczbaZespolona(double x = 0., double y = 0.) : re(x), im(y) {};
	LiczbaZespolona(const LiczbaZespolona &lz);

	void pobierz(double &x, double &y);
	void ustaw(double &x, double &y);
	LiczbaZespolona liczbaPrzeciwna();
	
	LiczbaZespolona operator+(LiczbaZespolona &lz);
	LiczbaZespolona operator-(LiczbaZespolona &lz);
	LiczbaZespolona operator*(LiczbaZespolona &lz);
	double operator!();

	friend LiczbaZespolona liczbaSprzezona(LiczbaZespolona &lz);

private:
	double re, im;
};
