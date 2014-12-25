#include "AdministrationWorker.h"

AdministrationWorker::AdministrationWorker(const AdministrationWorker& tempAdminWorker)
	:administrationWorkerDetails(tempAdminWorker.administrationWorkerDetails)
{
	isEmployedAtGovernment = tempAdminWorker.isEmployedAtGovernment;
	brand = tempAdminWorker.brand;
}

AdministrationWorker::AdministrationWorker(const Worker& workerDetails, bool isEmployedAtGovernment_, carBrand carBrand_)
{
	administrationWorkerDetails = workerDetails;
	isEmployedAtGovernment = isEmployedAtGovernment_;
	brand = carBrand_;
}

void AdministrationWorker::show()
{
	std::string stringAboutEmployment; //this string is set according to isEmployedAtGorernment variable
	administrationWorkerDetails.show(); 

	if (isEmployedAtGovernment == true)
		stringAboutEmployment = "Pracuje dla rzadu\n";
	else stringAboutEmployment = "Nie pracuje dla rzadu\n";

	std::cout << stringAboutEmployment;
	std::cout << "Marka sluzbowego samochodu: " << brand << std::endl;
}