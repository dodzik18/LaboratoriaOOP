#pragma once

class LiczbaZespolona
{
public:
	LiczbaZespolona(double x=0., double y=0.) : re(x), im(y) {};
	LiczbaZespolona(const LiczbaZespolona &lz);

	void pobierz(double &x, double &y);


private:
	double re, im;
};

