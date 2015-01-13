#include "Person.h"


Person::Person(const Person& person_)
{
	name = person_.name;
	surname = person_.surname;
	personContactDetails = person_.personContactDetails;
}


void Person::show(void)
{
	std::cout << "Imie: " << name << std::endl;
	std::cout << "Nazwisko: " << surname << std::endl;
	personContactDetails.show();
}

void Person::showContactDetails(void)
{
	personContactDetails.show();
}