/*
Dana jest klasa pkt (jak zadaniu z poprzednich zajêæ). Zdefiniuj klasê prosta oraz stosowne
funkcje, konstruktory oraz funkcje operatorowe, ponadto uzupe³nij klasê pkt tak, aby
mo¿liwe sta³o sie wykonywanie nastêpuj¹cego kodu:
	pkt p1, p2(2,5), p3(3,7), p4(p3);
	prosta pr1, pr2(p2,p3), pr3(pr2);
	p1.wypisz();
	p2.wypisz(); // wspolrzedne punktu (2,5)
	p3.wypisz();
	p4.wypisz();
	pr1.wypisz();
	pr2.wypisz(); // prosta przechodzi przez punkty (2,5) (3,7) i ma równanie y = 2x + 1
	pr3.wypisz();
	pr1.SprawdzRownoleglosc(pr2); // tu ma byæ informacja czy proste s¹ równoleg³e
	SprawdzProstopadlosc(pr2, pr3); // tu ma byæ informacja czy proste s¹ prostopad³e
	p1 = p2 + p3; // dodawanie dwoch punktów
	p1.wypisz();
	p2 = p1 - p3; // odejmowanie dwoch punktow
	cout<< p2;
	cout<< pr1; // wypisanie informacji o punktach Np.: „Prosta y =ax+b przechodzi przez punkty…
UWAGA:
Nale¿y wykorzystaæ równanie prostej przechodz¹cej przez dwa punkty. Dla prostej
przechodz¹cej przez punkty A(x1, y1) oraz B(x2,y2) równanie prostej wynosi:
(x2-x1)(y-y1)=(y2-y1)(x-x1)
Dla dwóch prostych: y = a1x + b1, y = a2x + b2 mo¿na sprawdziæ poprzez ich wspó³czynniki
kierunkowe nastêpuj¹ce parametry:
- równoleg³oœæ: a1 = a2
- prostopad³oœæ: a1 = -1/a2.
*/


#include<iostream>
#include"pkt.h"
#include"prosta.h"

using namespace std;

char * SprawdzProstopadlosc(prosta &A, prosta &B)
{
	char napis1[] = {"Jest Prostopadla"};
	char napis2[] = {"Nie jest Prostopadla"};
	pkt pk1, pk2, pk3, pk4;
	float a1, b1, a2, b2;

	A.pobierz_info(a1, b1, pk1, pk2);
	B.pobierz_info(a2, b2, pk3, pk4);
	if(a1 == (-1/a2))
		return napis1;
	else
		return napis2;
}

ostream & operator<< (ostream & wypisz, pkt p)
{
	float x1, y1;
	string name = "P";

	p.pobierz_info(x1, y1);

	wypisz << " " << name << "(" << x1 << ", " << y1 << ")";

	return wypisz;
}

ostream & operator<< (ostream & wypisz, prosta pr)
{
	pkt p1, p2;
	float x1, y1;
	string name = "P";


	pr.pobierz_info(x1, y1, p1, p2);

	wypisz << "Prosta przechodzi przez punkty: "; p1.wypisz();
	wypisz << " oraz "; p2.wypisz();
	wypisz << "\n\t i ma rownanie y = " << x1 << "x + " << y1 <<"\n"<< endl;

	return wypisz;
}

int main()
{
	pkt p1, p2(2,5), p3(3,7), p4(p3);
	prosta pr1, pr2(p1, p3), pr3(pr2);
	p1.wypisz();
	p2.wypisz();
	p3.wypisz();
	p4.wypisz();

	cout << endl;

	pr1.wypisz();
	pr2.wypisz();
	pr3.wypisz();
	pr1.SprwawdzRownoleglosc(pr2);
	SprawdzProstopadlosc(pr2, pr3);
	
 
	cout << endl;

	p1 = p2 + p3;
	p1.wypisz();
	p2 = p1 - p3;
	cout << p2 << endl;
	cout << pr1;

	cout << "\n\n" << endl;

	system("PAUSE");
	return 0;
}