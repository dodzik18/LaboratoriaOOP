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

void wypisz(prosta &pr1)
{
	std::cout << "Prosta przechodzi przez punkty: (" << pr1.x1 << "," << pr1.x2 << "),(" << pr1.y1 << "," << pr1.y2 << ")" << std::endl;
}



int main()
{
	pkt p1, p2(2, 5), p3(3, 7), p4(p3);
	prosta pr1, pr2(p2, p3), pr3(pr2);
	p1.wypisz();
	p2.wypisz();// wspolrzedne punktu (2,5)
	p3.wypisz();
	p4.wypisz();
	pr1.wypisz();
	pr2.wypisz();
	// prosta przechodzi przez punkty (2,5) (3,7) i ma równanie y = 2x + 1
	pr3.wypisz();
	//pr1.SprawdzRownoleglosc(pr2);
	// tu ma byæ informacja czy proste s¹ równoleg³e 
	//SprawdzProstopadlosc(pr2, pr3);
	// tu ma byæ informacja czy proste s¹ prostopad³e
	p1 = p2.suma(p3);
	p1.wypisz();
	p2 = roznica(p1, p3);
	wypisz(p2);
	wypisz(pr1);
	// wypisanie informacji o punktach Np.: „Prosta y =ax+b przechodzi przez punkty...
	return 0;
}