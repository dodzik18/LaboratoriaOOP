#include "Student.h"


Student::Student(const Student & stud)
	:Person(stud.studentPersonalDetails) 
{
	universityName = stud.universityName;
	indexNumber = stud.indexNumber;
}

Student::Student(const Person& person, std::string universityName_, int indexNumber_)
{
	universityName = universityName_;
	indexNumber = indexNumber_;
	studentPersonalDetails = person;
}

void Student::show()
{
	studentPersonalDetails.show();
	std::cout << "Studiuje na: " << universityName << std::endl;
	std::cout << "Numer indeksu: " << indexNumber << std::endl;
}