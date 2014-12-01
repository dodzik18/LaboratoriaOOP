#include"prosta.h"
#include<iostream>


bool prosta::SprwawdzRownoleglosc(prosta &A)
{
	if(a == A.a)
		return true;
	else
		return false;
}

void prosta::wypisz()
{
	std::cout << "Prosta przechodzi przez punkty: "; P1.wypisz();
	cout << " oraz "; P2.wypisz();
	cout << "\n\t i ma rownanie y = " << a << "x + " << b <<"\n"<< endl;
}

void prosta::pobierz_info(float &w_a, float &w_b, pkt &pk1, pkt &pk2, string nazwa)
{
	w_a = a;
	w_b = b;
	pk1 = P1;
	pk2 = P2;
}

prosta::prosta()
{
	a = 0;
	b = 0;
	P1.ustaw("A", 0, 0);
	P2.ustaw("B", 0, 0);
	nazwa = "prosta";
}


prosta::prosta(pkt &A, pkt &B)
{
	float x1, x2, y1, y2;
	A.pobierz_info(x1, y1);
	B.pobierz_info(x2, y2);
	P1.ustaw("A", x1, y1);
	P2.ustaw("B", x2, y2);
	a = (y2 - y1) / (x2 - x1);
	b = (y2 * (-x1) + y1 * x1 - x2 * y1 + x1 * y1) / (x2 - x1);
}

prosta::prosta(prosta &PR)
{
	a = PR.a;
	b = PR.b;
	P1 = PR.P1;
	P2 = PR.P2;
	nazwa = PR.nazwa;
}