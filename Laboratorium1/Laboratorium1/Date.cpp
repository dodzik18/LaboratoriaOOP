#include "Date.h"
using namespace std;


void Date::set()
{
	cout << "Enter birth date: ";
	cin >> day;
	cout << ".";
	cin >> month;
	cout << ".";
	cin >> year;
}

void Date::show()
{
	cout << day << "." << month << "." << year << endl;
}