#include "Person.h"
#include "Date.h"
#include "globals.h"

using namespace std;



int main()
{
	Person p1("Adam", "Nowak", 30, 23, 04, 1967), p2;
	p1.show();
	p2.show();
	show(p1);
	show(p2);
	cout << p1;
	return 0;
}