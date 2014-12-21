#pragma once
#include "Date.h"
#include <string>
#include <iostream>


class Person
{
public:
	Person(std::string n = "Jan", std::string s = "Kowalski", int age_ = 0, int d_ = 1, int m_ = 1, int y_ = 1970)
		: name(n), surname(s), age(age_), d1(d_, m_, y_) {};

	void set();		//sets name and surname
	void show();		//prints name and surname on screen

	friend void show(Person&); //global function, prints Person attributes
	

	std::string getName() { return name; }
	std::string getSurname() { return surname; }
	int getAge() { return age; }


private:
	Date d1;
	int age;
	std::string name, surname;

};