#pragma once
#include "Worker.h"
#include <string>
class ScientificWorker :
	public Worker
{
public:
	short int getNumberOfCollectedAwards(void) { return numberOfCollectedAwards; }
	std::string getScientificTitle(void) { return scientificTitle; }


	void show(void);


	ScientificWorker(std::string name_ = "", std::string surname_ = "", int postalcode_ = 0, int idCardNumber_ = 0, std::string position_ = "", int earnings_ = 0, short int numberOfCollectedAwards_ = 0, std::string scientificTitle_ = "")
		:Worker(name_, surname_, postalcode_, idCardNumber_, position_, earnings_), numberOfCollectedAwards(numberOfCollectedAwards_), scientificTitle(scientificTitle_) {};
	ScientificWorker(const Worker& worker_, short int numberOfCollectedAwards_ = 0, std::string scientificTitle_ = "")
		:Worker(worker_), numberOfCollectedAwards(numberOfCollectedAwards_), scientificTitle(scientificTitle_) {};
	ScientificWorker(const ScientificWorker&);

private:
	short int numberOfCollectedAwards;
	std::string scientificTitle;
};

