#pragma once
#include "Person.h"
#include <iostream>
#include <string>
class Worker
	: public Person
{
public:
	std::string getPosition(void) { return position; }
	int getEarnings(void) { return earnings; }

	void show(void);

	Worker(std::string name_ = "", std::string surname_ = "", int postalCode_ = 0, int idCardNumber_ = 0, std::string position_ = "", int earnings_ = 0)
		: Person(name_, surname_, postalCode_, idCardNumber_), position(position_), earnings(earnings_) {};
	Worker(const Worker&);
	Worker(const Person& person_, std::string position_ = "", int earnings_ = 0)
		: Person(person_), position(position_), earnings(earnings_) {};

private:
	std::string position;
	int earnings;
};

