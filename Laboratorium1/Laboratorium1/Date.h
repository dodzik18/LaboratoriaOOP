#pragma once
#include <iostream>

class Person;
class Date
{

public:
	Date(int d, int m, int y) : day(d), month(m), year(y) {};

	void set();	//sets birth date
	void set(int _x, int _y, int _z);
	void log();	//prints birth date

	friend void logon(Person &p1, Date &d1);

private:
	Date _d1();
	int day, month, year;

};