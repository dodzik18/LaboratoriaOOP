#include "Worker.h"


Worker::Worker(const Worker& worker)
	:Person(worker.workerPersonalData)
{
	position = worker.position;
	earnings = worker.earnings;
}

Worker::Worker(const Person& person, std::string position_, int earnings_)
	:workerPersonalData(person)
{
	position = position_;
	earnings = earnings_;
}

void Worker::show(void)
{
	workerPersonalData.show();
	std::cout << "Zajmowane stanowisko: " << position << std::endl;
	std::cout << "Zarobki: " << earnings << std::endl;
}