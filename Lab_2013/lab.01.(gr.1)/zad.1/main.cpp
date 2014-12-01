/*
Napisz program kalkulator, pozwalający na obliczanie operacji: dodawania, odejmowania,
mnozenia i dzielenia. Operacje matematyczne nalezy zrealizowac przy wykorzystaniu funkcji.
Podczas pisania programu nalezy zwrocic uwage na mozliwosc blednego wprowadzenia
danych. Ponadto program powinien wykonywac sie do momentu, w ktorym uzytkownik nie
bedzie chcial wykonywac operacji matematycznych wymienionych w tresci zadania.
Wszystkie operacje powinny byc wykonywane z wykorzystaniem funkcji.
*/

#include<iostream>

using namespace std;

int dodaj(int a, int b)
{
	int c;
	return c = a + b;
}

int minus(int a, int b)
{
	int c;
	return c = a - b;
}

int mnoz(int a, int b)
{
	int c;
	return c = a * b;
}

float dziel(float a, float b)
{
	float c;
	if(b == 0)
	{
		return 0;
	}
	else
		return c = a / b;
}


int main()
{
	int liczba_1, liczba_2, wybor = 1;

	do
	{
		cout << "Podaj I liczbe: ";
		cin >> liczba_1;
		cout << "Podaj II liczbe: ";
		cin >> liczba_2;

		cout << "Wybierz dzialanie:\n"
			"1. Dodawanie.\n"
			"2. Odejmowanie.\n"
			"3. Mnozenie.\n"
			"4. Dzialenie.\n"
			"0. Wyjscie." << endl;
		cin >> wybor;

		switch (wybor)
			{
				case 1:
					cout << liczba_1 << " + " << liczba_2 << " = " << dodaj(liczba_1, liczba_2) << endl;
					break;
				case 2:
					cout << liczba_1 << " - " << liczba_2 << " = " << minus(liczba_1, liczba_2) << endl;
					break;
				case 3:
					cout << liczba_1 << " * " << liczba_2 << " = " << mnoz(liczba_1, liczba_2) << endl;
					break;
				case 4:
					if(liczba_2)
						cout << liczba_1 << " / " << liczba_2 << " = " << dziel(static_cast<float>(liczba_1), static_cast<float>(liczba_2)) << endl;
					else
						cout << "Podaj liczby jeszcze raz!" << endl;
					break;
				case 0:
					break;
				default:
					cout << "Nie ma takiej opcji" << endl;
					break;
			}
		}while(wybor);

	system ("PAUSE");
	return 0;
}
