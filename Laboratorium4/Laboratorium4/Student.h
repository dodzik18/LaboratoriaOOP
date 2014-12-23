#pragma once
#include "Person.h"
#include <string>
#include <iostream>
class Student :
	public Person
{
public:
	std::string getUniversityName() { return universityName;  }
	int getIndexNumber() { return indexNumber; }

	void show(void);

	Student(std::string name_ = "", std::string surname_ = "", int postalCode_ = 0, int idCardNumber_ = 0, std::string universityName_ = "", int indexNumber_ = 0)
		: Person(name_, surname_, postalCode_, idCardNumber_), universityName(universityName_), indexNumber(indexNumber_) {};
	Student(const Student&); 
	Student(const Person&, std::string = "", int = 0);

private:
	std::string universityName;
	int indexNumber;
	Person studentPersonalDetails;
};

