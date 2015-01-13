#include "Worker.h"


Worker::Worker(const Worker& worker_)
	:Person(worker_)
{
	position = worker_.position;
	earnings = worker_.earnings;
}

void Worker::show(void)
{
	Person::show();
	std::cout << "Zajmowane stanowisko: " << position << std::endl;
	std::cout << "Zarobki: " << earnings << std::endl;
	
}