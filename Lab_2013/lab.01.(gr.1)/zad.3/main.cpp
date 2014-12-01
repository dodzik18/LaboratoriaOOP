/*
Napisz program, obliczaj¹cy sumê liczb parzystych i nieparzystych sk³adaj¹cych siê na liczbê
podana przez u¿ytkownika. Program ma ponadto zawieraæ menu umo¿liwiaj¹ce wielokrotne
u¿ycie programu. np.:
	u¿ytkownik podaje liczbê 7 to wtedy:
	na liczbê 7 sk³adaj¹ siê nastêpuj¹ce cyfry:		0,1,2,3,4,5,6,7
	suma liczb parzystych wynosi:					0+2+4+6 = 12,
	suma liczb nieparzystych wynosi:				1+3+5+7 = 16.
Operacje zliczania sum powinny byæ realizowane z wykorzystaniem funkcji.
*/

#include<iostream>

using namespace std;

int parzyste(int a, int *t)
{
	int suma = 0;
	for(int i = 0 ; i <= a ; ++i)
	{
		if(!((a - i) % 2))
		suma += i;
		
	}
	return suma;
}
int nieparzyste(int a, int *t)
{
	int suma = 0;
	for(int i = 0 ; i <= a ; ++i)
	{
		if((a - i) % 2)
			suma += i;
	}
	return suma;
}

int main()
{
	int liczba, i, suma_p = 0, suma_n = 0, *tab;
	bool wybor;

	do
	{
		cout << "Podaj  liczbe: ";
		cin >> liczba;
		
		tab = new int[liczba + 1];
		
		for(i = 0 ; i <= liczba ; ++i)
			tab[i] = i;
		
		suma_p = parzyste(liczba, tab);
		suma_n = nieparzyste(liczba, tab);
		
		for(i = 0 ; i <= liczba ; ++i)
		{
			if(i % 2)
			{
				cout << tab[i];
				if(i < (liczba - 1))
					cout << " + ";
			}
		}
		cout << " = " << suma_p << endl;

		for(i = 0 ; i <= liczba ; ++i)
		{
			if(!(i % 2))
			{
				cout << tab[i];
				if(i < (liczba - 1))
					cout << " + ";
			}
		}

		cout << " = " << suma_n << endl;

		cout << "Kontynuowac? 1/0";
		cin >> wybor;
	}
	while(wybor);

	delete [] tab;

	system ("PAUSE");
	return 0;
}
