#include "Student.h"


Student::Student(const Student & student)
	:Person(student)
{
	universityName = student.universityName;
	indexNumber = student.indexNumber;
}

void Student::show()
{
	Person::show();
	std::cout << "Studiuje na: " << universityName << std::endl;
	std::cout << "Numer indeksu: " << indexNumber << std::endl;
}