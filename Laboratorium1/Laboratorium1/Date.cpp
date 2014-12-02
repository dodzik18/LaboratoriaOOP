#include "Date.h"
using namespace std;

Date::Date(const Date &d1)
{
	day = d1.day;
	month = d1.month;
	year = d1.year;
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
void Date::set(int _x, int _y, int _z)
{
	_x = day;
	_y = month;
	_z = year;
}

void Date::log()
{
	cout << day << "." << month << "." << year << endl;
}