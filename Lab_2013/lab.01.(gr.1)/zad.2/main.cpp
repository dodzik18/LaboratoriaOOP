/*
Napisz program, obliczaj¹cy pozwalaj¹cy na obliczenie œredniej arytmetycznej z podanych
liczb. Iloœæ liczb nie jest zadawana w czasie dzia³ania programu tylko wyliczana na podstawie
pytañ zadawanych podczas dzia³ania programu.
*/

#include<iostream>

using namespace std;

int main()
{
	float liczba = 1, suma = 0;
	int ilosc = 0;
	
	while(liczba)
	{
		cout << "Podaj liczbe calkowita\\0 liczy srednia\\ ";
		cin >> liczba;
		
		if (liczba)
		{
			cout << endl;
			suma += liczba;
			++ilosc;
		}		
	};

	cout << "Srednia arytmetyczna wynosi: " << suma/ilosc << endl;

	system ("PAUSE");
	return 0;
}