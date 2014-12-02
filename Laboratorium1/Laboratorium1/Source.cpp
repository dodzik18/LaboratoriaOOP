#include "Person.h"
#include "Date.h"
#include <string>

using namespace std;

void log_person(Person &p1)
{
	cout << p1.name << " " << p1.surname << endl;
}

int main()
{
	Person p1("Jan", "Kowalski");
	Date d1(1, 1, 1950);
	p1.log();
	d1.log();
	p1.logon(d1);

	return 0;
}