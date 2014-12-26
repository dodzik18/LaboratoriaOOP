#pragma once
#include "Person.h"
#include <iostream>
#include <string>
class Worker
	: Person
{
public:
	std::string getPosition() { return position; }
	int getEarnings() { return earnings; }

	void show(void);

	Worker(std::string name_ = "", std::string surname_ = "", int postalCode_ = 0, int idCardNumber_ = 0, std::string position_ = "", int earnings_ = 0)
		: Person(name_, surname_, postalCode_, idCardNumber_), position(position_), earnings(earnings_) {};
	Worker(const Worker&);
	Worker(const Person&, std::string = "", int = 0);

private:
	std::string position;
	int earnings;
	Person workerPersonalData;
};


/*
	BUGS and TODO list
	

*/