#include "AdministrationWorker.h"

AdministrationWorker::AdministrationWorker(const AdministrationWorker& administrationWorker_)
	:Worker(administrationWorker_)
{
	isEmployedAtGovernment = administrationWorker_.isEmployedAtGovernment;
	brand = administrationWorker_.brand;
}


void AdministrationWorker::show(void)
{

	Worker::show();

	std::cout << translateEmploymentStatusToString();
	std::cout << "Marka sluzbowego samochodu: " << translateCarBrandToString(brand) << std::endl;

}

inline std::string AdministrationWorker::translateCarBrandToString(carBrand brand)
{
	{
		switch (brand)
		{
		case Skoda: return "Skoda";
		case Opel: return "Opel";
		case Honda: return "Honda";
		case Hyundai: return "Hyundai";
		case BMW: return "BMW";
		default: return "Brak samochodu sluzbowego";
		}
	}
}