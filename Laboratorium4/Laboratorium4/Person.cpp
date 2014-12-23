#include "Person.h"


Person::Person(const Person& person)
{
	name = person.name;
	surname = person.surname;
	//copying constructor of ContactDetails
	ContactDetails personContactDetails(person.personContactDetails); 
}


void Person::show()
{
	std::cout << "Imie: " << name << std::endl;
	std::cout << "Nazwisko: " << surname << std::endl;
	personContactDetails.show();
}

void Person::showContactDetails()
{
	personContactDetails.show();
}