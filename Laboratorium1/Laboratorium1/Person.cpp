#include "Person.h"
#include "Date.h"

using namespace std;

Person::Person(string n, string s)
{
	name = n;  surname = s;
}

void Person::set()
{
	cout << "Enter the name, then surname: ";
	cin >> name;
	cout << " ";
	cin >> surname;
}
void Person::log()
{
	cout << name << " " << surname << endl;
}
void Person::logon(Person &p1, Date &d1)
{
	cout << p1.name << " " << p1.surname << " ";
	d1.log();
}