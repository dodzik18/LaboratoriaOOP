#include "Worker.h"


Worker::Worker(const Worker& worker)
	:Person(worker.workerPersonalData)
{
	position = worker.position;
	earnings = worker.earnings;
}

Worker::Worker(const Person& person, std::string position_, int earnings_)
{
	position = position_;
	earnings = earnings_;
	workerPersonalData = person;
}

void Worker::show()
{
	workerPersonalData.show();
	std::cout << "Zajmowane stanowisko: " << position << std::endl;
	std::cout << "Zarobki: " << earnings << std::endl;
}