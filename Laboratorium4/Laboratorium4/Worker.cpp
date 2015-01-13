#include "Worker.h"


Worker::Worker(const Worker& worker)
	:Person(worker)
{
	position = worker.position;
	earnings = worker.earnings;
}

void Worker::show(void)
{
	Person::show();
	std::cout << "Zajmowane stanowisko: " << position << std::endl;
	std::cout << "Zarobki: " << earnings << std::endl;
	
}