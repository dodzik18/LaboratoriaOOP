#include "AdministrationWorker.h"

AdministrationWorker::AdministrationWorker(const AdministrationWorker& tempAdminWorker)
	:Worker(tempAdminWorker.administrationWorkerDetails)
{
	isEmployedAtGovernment = tempAdminWorker.isEmployedAtGovernment;
	brand = tempAdminWorker.brand;
}

AdministrationWorker::AdministrationWorker(const Worker& workerDetails, bool isEmployedAtGovernment_, carBrand carBrand_)
	:Worker(workerDetails)
{
	isEmployedAtGovernment = isEmployedAtGovernment_;
	brand = carBrand_;
}

void AdministrationWorker::show(void)
{
	std::string employmentState; //this string is set according to isEmployedAtGorernment state

	administrationWorkerDetails.show();

	if (isEmployedAtGovernment == true)
		employmentState = "Pracuje dla rzadu.\n";
	else employmentState = "Nie pracuje dla rzadu.\n";

	std::cout << employmentState;
	std::cout << "Marka sluzbowego samochodu: " << brand << std::endl;

}