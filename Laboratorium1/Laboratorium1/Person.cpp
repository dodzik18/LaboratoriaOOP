#include "Person.h"
using namespace std;


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
void Person::logon(Date &d1)
{
	int x, y, z;
	d1.set(x, y, z);
	cout << name << " " << surname << " ";

}