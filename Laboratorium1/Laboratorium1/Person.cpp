#include "Person.h"
using namespace std;


void Person::set()
{
	cout << "Enter the name, then surname: ";
	cin >> name;
	cout << " ";
	cin >> surname;
}
void Person::show()
{
	cout << name << " " << surname << endl;
	d1.show();
}
