#pragma once
#include <iostream>

class Date
{
	int day, month, year;

public:
	Date(int d, int m, int y);
	void set();	//sets birth date
	void log();	//prints birth date
	friend void logon(Person &p1, Date &d1);
};