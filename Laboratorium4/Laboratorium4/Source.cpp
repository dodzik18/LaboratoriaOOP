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
	Student s1("", "", 0, 0, "AGH", 27227), s2(p1, "Oxford", 3232), s3(s2);
	Worker w1("", "", 0, 0, "Wykladowca", 3500), w2(p1, "Wozny", 2000), w3(w2);
	AdministrationWorker a1, a2("Jan", "Kowalski", 34567, 21, "senator", 9500, true, Opel), a3(a2); 
	ScientificWorker sc1("Jan", "Dlugosz", 11500, 23, "Rektor", 10000, 2, "mgr."), sc2(sc1), sc3(w2, 0, "inz");

	p1.show();
	std::cout << "-------------------------------------" << std::endl;
	p2.show();
	std::cout << "-------------------------------------" << std::endl;
	s1.show();
	std::cout << "-------------------------------------" << std::endl;
	s2.show();
	std::cout << "-------------------------------------" << std::endl;
	s3.show();
	std::cout << "-------------------------------------" << std::endl;
	w1.show();
	std::cout << "-------------------------------------" << std::endl;
	w2.show();
	std::cout << "-------------------------------------" << std::endl;
	w3.show();
	std::cout << "-------------------------------------" << std::endl;
	a1.show();
	std::cout << "-------------------------------------" << std::endl;
	a2.show();
	std::cout << "-------------------------------------" << std::endl;
	a3.show();
	std::cout << "-------------------------------------" << std::endl;
	sc1.show();
	std::cout << "-------------------------------------" << std::endl;
	sc2.show(); 
	std::cout << "-------------------------------------" << std::endl;
	sc3.show();
	std::cout << "-------------------------------------" << std::endl;
	
	return 0;
}