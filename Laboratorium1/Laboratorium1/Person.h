#pragma once
#include <string>

class Person
{
	string name, surname;

public:
	Person(string n, string s);
	void set();		//sets name and surname
	void log();		//prints name and surname on screen
	void logon(Person &p1, Date &d1);	//prints names, and birth date on screen
	friend void log_person(Person &p1); //global function, prints Person attributes
};