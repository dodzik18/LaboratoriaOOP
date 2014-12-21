#include "globals.h"




void show(Person &p1)
{
	cout << p1.name << " " << p1.surname << endl;
}

ostream & operator<<(ostream& out, Person& p)
{
	out << p.getName() << " " << p.getSurname() << endl;
	return out;
}
ostream & operator<<(ostream& out, Date& d)
{
	int day_ = 0, month_ = 0, year_ = 0;

	day_ = d.getDay();
	month_ = d.getMonth();
	year_ = d.getYear();

	cout << day_ << "." << month_ << "." << year_ << endl;

	return out;
}