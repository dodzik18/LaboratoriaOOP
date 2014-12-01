/*
Napisz program pozwalający na tworzenie dowolnej tablicy dwuwymiarowej oraz funkcje
pozwalające na zerowanie tablicy oraz uzupełnianie wartością 1 wszystkich przekątnych tej
macierzy. Ponadto należy stworzyć funkcję uzupełniającą elementy tablicy według funkcji
cosinus.
*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{

	int a;
	char tab[20][80] = {};
	double liczba, k;
	const double pi = 3.14159265;
	
	for(int i = 0 ; i < 20 ; ++i)	
	{
		for(int j = 0 ; j < 80 ; ++j)
		{
			if(j == 1)
				tab[i][j] = '|';
			if(i == 10)
				tab[i][j] = '-';
		}
	};


	for(int j = 0 ; j < 80 ; ++j)
	{
		k = cos(pi * j/40);
		k = k * k;
		k = k * (-10);
		k = k + 15;
		a = static_cast<int>(k);
		tab[a][j] = '$';
	};
	
	
	
	for(int i = 0 ; i < 20 ; ++i)	
	{
		for(int j = 0 ; j < 80 ; ++j)
			cout << tab[i][j];
	};
	
	system ("PAUSE");
	return 0;
}