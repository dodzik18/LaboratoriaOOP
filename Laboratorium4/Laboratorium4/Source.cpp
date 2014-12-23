#include "ContactDetails.h"
#include "Person.h"
#include "Student.h"
#include "Worker.h"
#include "AdministrationWorker.h"
#include "ScientificWorker.h"
#include <iostream>


int main()
{
	Person p1("Adam", "Nowak", 12123, 270434);
	Student s1("", "", 0, 0, "AGH", 27227);

	p1.show();
	std::cout << "-------------------------------------" << std::endl;
	s1.show(); 
	std::cout << "-------------------------------------" << std::endl;

	return 0;
}