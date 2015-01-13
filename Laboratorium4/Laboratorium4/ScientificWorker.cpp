#include "ScientificWorker.h"

ScientificWorker::ScientificWorker(const ScientificWorker& scientificworker_)
	:Worker(scientificworker_)
{
	numberOfCollectedAwards = scientificworker_.numberOfCollectedAwards;
	scientificTitle = scientificworker_.scientificTitle;
}
void ScientificWorker::show(void)
{

	std::cout << "Imie i nazwisko: " << scientificTitle << " " << Worker::getName() << " " << Worker::getSurName() << std::endl;
	Worker::showContactDetails();
	std::cout << "Liczba zebranych nagrod: " << numberOfCollectedAwards << std::endl;
	std::cout << "Zajmowane stanowisko: " << Worker::getPosition() << std::endl;
	std::cout << "Zarobki: " << Worker::getEarnings() << std::endl;

}