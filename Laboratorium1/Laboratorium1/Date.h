#pragma once
#include <iostream>

class Date
{

public:
	Date(int d, int m, int y) : day(d), month(m), year(y) {};

	void set();	//sets birth date
	void show();	//prints birth date

	int getDay() { return day; };
	int getMonth() { return month; };
	int getYear() { return year; };



private:
	int day, month, year;

};