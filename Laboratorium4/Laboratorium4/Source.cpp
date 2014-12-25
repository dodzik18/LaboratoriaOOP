#include "ContactDetails.h"
#include "Person.h"
#include "Student.h"
#include "Worker.h"
#include "AdministrationWorker.h"
#include "ScientificWorker.h"
#include <iostream>


/*
	TODO:
	operator overloading for all kinds of objects
	AdministrationWorker
	ScientificWorker
*/
int main()
{
	Person p1("Adam", "Nowak", 12123, 270434), p2("Jan","Rusin", 23234, 23456);
	Student s1("", "", 0, 0, "AGH", 27227), s2(s1), s3(p1, "Oxford", 3232);
	Worker w1("", "", 0, 0, "Wykladowca", 3500), w2(p1, "Wozny", 2000);
	AdministrationWorker a1, a2("Jan", "Kowalski", 34567, 21, "senator", 9500, true, Opel), a3(a2);

	a1.show();
	std::cout << "-------------------------------------" << std::endl;
	a2.show(); 
	std::cout << "-------------------------------------" << std::endl;
	a3.show();
	std::cout << "-------------------------------------" << std::endl;

	return 0;
}