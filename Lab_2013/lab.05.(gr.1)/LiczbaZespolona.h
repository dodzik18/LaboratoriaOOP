#include<iostream>

using namespace std;

class LiczbaZespolona
{
	double Cz_R;
	double Cz_U;

public:

	void ustaw(double x, double y);

	void pobierz_info(double &x, double &y);

	void wypisz();

	LiczbaZespolona liczbaPrzeciwna();

	LiczbaZespolona(double X, double Y);

	LiczbaZespolona();

	LiczbaZespolona(LiczbaZespolona &LZ);

	LiczbaZespolona operator+(LiczbaZespolona LZ);

	LiczbaZespolona operator-(LiczbaZespolona LZ);

	LiczbaZespolona operator*(LiczbaZespolona LZ);

	int operator!();
};