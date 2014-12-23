#include "Student.h"


Student::Student(const Student & stud)
	:Person(stud.studentPersonalDetails) 
{
	universityName = stud.universityName;
	indexNumber = stud.indexNumber;
}

void Student::show()
{
	studentPersonalDetails.show();
	std::cout << "Studiuje na: " << universityName << std::endl;
	std::cout << "Numer indeksu: " << indexNumber << std::endl;
}