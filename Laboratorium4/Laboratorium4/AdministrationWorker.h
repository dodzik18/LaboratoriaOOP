#pragma once
#include "Worker.h"
#include <string>
#include <iostream>
enum carBrand{none, Skoda, Opel, Honda, Hyundai, BMW}; //my own type used by class below to define worker car's brand

class AdministrationWorker :
	public Worker
{
public:
	
	carBrand getBrand() { return brand; }
	bool getEmploymentStatus() { return isEmployedAtGovernment; }

	void show();

	AdministrationWorker(std::string name_ = "", std::string surname_ = "", int postalCode_ = 0, int idCardNumber_ = 0, std::string position_ = "", int earnings_ = 0, bool isEmployedAtGovernment_=false, carBrand carBrand_ = none)
		: administrationWorkerDetails(name_, surname_, postalCode_, idCardNumber_, position_, earnings_), isEmployedAtGovernment(isEmployedAtGovernment_), brand(carBrand_) {};
	AdministrationWorker(const AdministrationWorker&);
	AdministrationWorker(const Worker&, bool = false, carBrand  = none);


private:
	bool isEmployedAtGovernment;
	carBrand brand; //this enumerator defines brand of administrationWorker's car. Type of carBrand
	Worker administrationWorkerDetails;
};

/*
	BUGS and TODO list:
	

1.	cout<<carBrand doesnt work as it should. We need fun(), that is using method getBrand() and returnning		string with brand name.
2.	the whole thing with administrationWorkerDetails doesnt work, needs fix. 
3.	in addition to 2nd problem, Person object in Worker class needsreview

*/