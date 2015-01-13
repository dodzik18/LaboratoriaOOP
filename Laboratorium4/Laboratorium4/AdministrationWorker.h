#pragma once
#include "Worker.h"
#include <string>
#include <iostream>
enum carBrand{none, Skoda, Opel, Honda, Hyundai, BMW}; //type to define worker car's brand

class AdministrationWorker :
	public Worker
{
public:

	carBrand getBrand(void) { return brand; }
	bool getEmploymentStatus(void) { return isEmployedAtGovernment; }


	std::string translateEmploymentStatusToString(void)
	{
		if (isEmployedAtGovernment == true)
			return  "Pracuje dla rzadu.\n";
		else return "Nie pracuje dla rzadu.\n";
	}

	inline std::string translateCarBrandToString(carBrand);		
	void show(void);

	AdministrationWorker(std::string name_ = "", std::string surname_ = "", int postalCode_ = 0, int idCardNumber_ = 0, std::string position_ = "", int earnings_ = 0, bool isEmployedAtGovernment_=false, carBrand carBrand_ = none)
		: Worker(name_, surname_, postalCode_, idCardNumber_, position_, earnings_), isEmployedAtGovernment(isEmployedAtGovernment_), brand(carBrand_) {};
	AdministrationWorker(const Worker& worker_, bool isEmployedAtGovernment_ = false, carBrand brand_ = none)
		:Worker(worker_), isEmployedAtGovernment(isEmployedAtGovernment_), brand(brand_) {};
	AdministrationWorker(const AdministrationWorker&);


private:
	bool isEmployedAtGovernment;
	carBrand brand; 
};

