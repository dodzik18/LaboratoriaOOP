#include "ContactDetails.h"
#include "Person.h"
#include "Student.h"
#include "Worker.h"
#include "AdministrationWorker.h"
#include "ScientificWorker.h"
#include <iostream>


int main()
{
	Person p1("Adam", "Nowak", 12123, 270434), p2("Jan","Rusin", 23234, 23456);
	Student s1("", "", 0, 0, "AGH", 27227), s2(s1), s3(p1, "Oxford", 3232);
	Worker w1("", "", 0, 0, "Wykladowca", 3500), w2(p1, "Wozny", 2000);

	p1.show();
	std::cout << "-------------------------------------" << std::endl;
	p2.show(); 
	std::cout << "-------------------------------------" << std::endl;
	w2.show();
	std::cout << "-------------------------------------" << std::endl;

	return 0;
}