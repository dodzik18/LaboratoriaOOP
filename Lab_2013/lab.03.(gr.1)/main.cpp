#include<iostream>
#include"okrag.h"
#include"pkt.h"

using namespace std;


int main()
{
	float x, y, pr;
	long l_pkt;
	pkt SRODEK, PUNKT;
	
	cout << "Podaj wspolrzedne srodka: \n\twar x: ";
	cin >> x;
	cout << "\twar y: ";
	cin >> y;
	SRODEK.ustaw("srodek", x, y);

	cout << "Podaj promien: ";
	cin >> pr;

	cout << "\nPodaj l. punktow: ";
	cin >> l_pkt;

	okrag OKR(SRODEK, pr, l_pkt);

	OKR.wypisz_okrag();


	cout << "\n\nPrzypomocy konstruktora domniemanego:\n";

	okrag OKR_def = okrag();

	OKR_def.wypisz_okrag();


	cout << endl;
	system("PAUSE");
	return 0;
}