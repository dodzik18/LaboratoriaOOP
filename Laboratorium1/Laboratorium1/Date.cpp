#include "Date.h"
#include "Person.h"
using namespace std;

Date::Date(int d, int m, int y)
{
	day = d; month = m; year = y;
}

void Date::set()
{
	cout << "Enter birth date: ";
	cin >> day;
	cout << ".";
	cin >> month;
	cout << ".";
	cin >> year;
}

void Date::log()
{
	cout << "." << day << "." << month << "." << year << endl;
}