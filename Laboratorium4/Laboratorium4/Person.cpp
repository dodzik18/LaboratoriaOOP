#include "Person.h"


Person::Person(const Person& person)
{
	name = person.name;
	surname = person.surname;
	ContactDetails personDetails(person.personDetails);
}

