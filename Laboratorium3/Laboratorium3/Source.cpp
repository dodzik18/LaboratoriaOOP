#include "LiczbaZespolona.h"
#include <iostream>

using namespace std;

ostream& operator <<(ostream& wyjscie, LiczbaZespolona& lz)
{
	double x = 0, y = 0;
	lz.pobierz(x, y);
	wyjscie << "(" << x << "," << y << ")" ;
	return wyjscie;
}

LiczbaZespolona liczbaSprzezona(LiczbaZespolona &lz) 
{
	LiczbaZespolona temp;
	double x = 0, y = 0;
	lz.pobierz(x, y);
	y = (-y);
	temp.ustaw(x, y);
	return temp;
}


int main()
{
	LiczbaZespolona z1, z2(1, 2), z3(z2);
	cout << z1; cout << z2; cout << z3 << endl; 
	int a;
	z1 = z2 + z3;
	cout << z1; cout << z2; cout << z3 << endl;
	z1 = z1 - z3;
	cout << z1; cout << z2; cout << z3 << endl;
	z3 = z1 * z2;
	cout << z1; cout << z2; cout << z3 << endl;
	z1 = z2.liczbaPrzeciwna();
	cout << z1; cout << z2 << endl;;
	z3 = liczbaSprzezona(z1);
	cout << z1; cout << z3 << endl;;
	a = !z2; 
	cout << a << endl;;
	cout << z1; cout << z2; cout << z3 << endl;
	return 0;
}