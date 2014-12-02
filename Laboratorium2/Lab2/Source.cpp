#include <iostream>
#include "pkt.h"
#include "prosta.h"

using namespace std;



pkt roznica(const pkt &p1, const pkt &p3) //ok
{
	pkt temp;
	temp.x = p1.x - p3.x;
	temp.y = p1.y - p3.y;
	return temp; //2, 5
}

void wypisz(const pkt &p2)
{
	std::cout << "(" << p2.x << "," << p2.y << ")" << std::endl;
}

void SprawdzProstopadlosc(prosta pr2, prosta pr3)
{
	if (pr2.a == (-1 / pr3.a)) cout << "Proste sa prostopadle." << endl;
	else cout << "Proste nie sa prostopadle." << endl;
}

void wypisz(prosta pr1)
{
	cout << "Prosta przechodzi przez punkty";
	pr1._p1._wypisz(); pr1._p2._wypisz();
	cout << "i ma rownianie y=";
	cout << pr1.a << "x";
	pr1.znak(pr1.b);
	cout << pr1.b << endl;
}

int main()
{
	pkt p1, p2(2, 5), p3(3, 7), p4(p3);
	prosta pr1, pr2(p2, p3), pr3(pr2);
	p1.wypisz();
	p2.wypisz();
	p3.wypisz();
	p4.wypisz();
	pr1.wypisz();
	pr2.wypisz();
	pr3.wypisz();
	pr1.SprawdzRownoleglosc(pr2);
	SprawdzProstopadlosc(pr2, pr3);
	p1 = p2.suma(p3);
	p1.wypisz();
	p2 = roznica(p1, p3);
	wypisz(p2);
	wypisz(pr1);
	return 0;
}