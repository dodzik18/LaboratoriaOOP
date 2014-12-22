#pragma once
#include <string>
#include <iostream>
#include "ContactDetails.h"

class Person
{
public:
	Person(std::string name_ = "", std::string surname_ = "", int postalCode_ = 0, int idCardNumber_ = 0) 
		: name(name_), surname(surname_), personDetails(postalCode_, idCardNumber_) {};
	Person(const Person&);

private:
	std::string name, surname;
	ContactDetails personDetails;
};

