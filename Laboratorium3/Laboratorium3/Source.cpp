#include "LiczbaZespolona.h"
#include <iostream>

using namespace std;

ostream& operator <<(ostream& wyjscie, LiczbaZespolona& lz_)
{
	double x = 0, y = 0;
	lz_.pobierz(x, y);
	wyjscie << "("<< x << "," << y << ")" <<endl;
	return wyjscie;
}


int main()
{
	LiczbaZespolona z1, z2(1, 2), z3(z2);
	cout << z1; cout << z2; cout << z3;
	//int a;
	//z1 = z2 + z3;
	cout << z1; cout << z2; cout << z3;
	//z1 = z1 - z3;
	cout << z1; cout << z2; cout << z3;
	//z3 = z1 * z2;
	cout << z1; cout << z2; cout << z3;
	//z1 = z2.liczbaPrzeciwna();
	cout << z1; cout << z2;
	//z3 = liczbaSprzezona(z1);
	cout << z1; cout << z3;
	//a = !z2; //modul z liczby zespolonej z2
	//cout << a;
	cout << z1; cout << z2; cout << z3;
	return 0;
}