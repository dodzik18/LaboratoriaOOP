#pragma once
#include <string>
#include <iostream>

class Date;

class Person
{
public:
	Person(std::string n, std::string s) : name(n), surname(s) {};

	void set();		//sets name and surname
	void log();		//prints name and surname on screen
	void logon(Date &d1);	//prints names, and birth date on screen

	friend void log_person(Person &p1); //global function, prints Person attributes

private:
	Date _d1();
	std::string name, surname;

};