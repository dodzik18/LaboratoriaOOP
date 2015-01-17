#include "point.h"
#include "straight.h"
#include <iostream>
using namespace std;

//this block should be in external file...
bool operator !=(straight& pr1, straight& pr2)
{
	if (pr1.a == pr2.a)
		return true;
	else
		return false;
}
bool operator ==(straight& pr1, straight& pr2)
{
	if (pr1.a == (-1 / pr2.a))
		return true;
	else
		return false;
}

ostream& operator<<(ostream& o, point& p)
{
	o << "Wspolrzedne punktu: (" << p.getX() << ") (" << p.getY() << ")" << std::endl;
	return o;
}
ostream& operator<<(ostream& o, straight& s)
{
	o  << "Prosta przechodzi przez punkty: ";
	s.show(1);

	std::cout << "Rownanie y=" << s.getA() << "x+" << s.getB() << std::endl;

	return o;
}
//

int main()
{
	point p1, p2(2, 5), p3(3, 7), p4(p3);
	straight pr1, pr2(p2, p3), pr3(pr2);
	p1.show();
	p2.show(); // wspolrzedne punktu (2,5)
	p3.show();
	p4.show();
	pr1.show();
	pr2.show(); // prosta przechodzi przez punkty (2,5) (3,7) i ma równanie y = 2x + 1
	pr3.show();
	if (pr1 != pr2) // tu ma byæ informacja czy proste s¹ równoleg³e
	{
		cout <<"Proste nie s¹ równoleg³e\n";
	}
	else{
		cout << "Proste sa rownolegle\n";
	}
	if (pr2 == pr3) // tu ma byæ informacja czy proste s¹ prostopad³e
	{
		cout << "Proste s¹ prostopadle\n";
	}
	else{
		cout << "Proste NIE s¹ prostopadle\n";
	}
//	p1 = p2 + p3; // dodawanie dwoch punktów
	cout << p1;
//	p2 = p1 - p3; // odejmowanie dwoch punktow
	cout << p2;
	cout << pr1;  
	return 0;
}