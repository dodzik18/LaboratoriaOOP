#include"LiczbaZespolona.h"
#include<iostream>
#include<cmath>

using namespace std;

void LiczbaZespolona::ustaw(double x, double y)
{
	Cz_R = x;
	Cz_U = y;
}

void LiczbaZespolona::pobierz_info(double &x, double &y)
{
	x = Cz_R;
	y = Cz_U;
}

void LiczbaZespolona::wypisz()
	{
		cout << "Liczba zespolona: " << Cz_R; 
		if(Cz_U >= 0)
			cout << " + " << Cz_U << "i" << endl;
		else
			cout << " - " << -Cz_U << "i" << endl;
	}

LiczbaZespolona LiczbaZespolona::liczbaPrzeciwna()
{
	LiczbaZespolona LZ;
	LZ.Cz_R = (-Cz_R);
	LZ.Cz_U = (-Cz_U);
	return LZ;
}

LiczbaZespolona::LiczbaZespolona(double X, double Y) :Cz_R(X), Cz_U(Y)
{
}

LiczbaZespolona::LiczbaZespolona()
{
	Cz_R = 0;
	Cz_U = 0;
}

LiczbaZespolona::LiczbaZespolona(LiczbaZespolona &LZ)
{
	Cz_R = LZ.Cz_R;
	Cz_U = LZ.Cz_U;
}

LiczbaZespolona LiczbaZespolona::operator+(LiczbaZespolona LZ)
{
	LZ.Cz_R += Cz_R;
	LZ.Cz_U += Cz_U;
	return LZ;
}

LiczbaZespolona LiczbaZespolona::operator-(LiczbaZespolona LZ)
{
	LZ.Cz_R -= Cz_R;
	LZ.Cz_U -= Cz_U;
	return LZ;
}

LiczbaZespolona LiczbaZespolona::operator*(LiczbaZespolona LZ)
{
	LiczbaZespolona LZ_2;

	LZ.Cz_R *= Cz_R;
	LZ.Cz_U *= Cz_U;

	LZ_2.Cz_R = LZ.Cz_R - LZ.Cz_U;
	
	LZ.Cz_R *= Cz_U;
	LZ.Cz_U *= Cz_R;
	
	LZ_2.Cz_U = LZ.Cz_R + LZ.Cz_U;

	return LZ_2;
}

int LiczbaZespolona::operator!()
{
	int a;
	a = sqrt(Cz_R * Cz_R + Cz_U * Cz_U);
	return a;
}

