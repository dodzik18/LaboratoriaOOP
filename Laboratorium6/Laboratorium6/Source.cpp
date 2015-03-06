#include "Point2d.h"
#include "Point3d.h"
#include "Vector.h"
#include "Globals.h"
#include <iostream>


/* 
main() is copy paste, from task given by my lecturer. I had to write code to handle it.
Pointers to double array and other evil here is his job.
*/

int main()
{
	Point2d p1, p2(1, 1), p3(p2);
	Point3d p31, p32(1, 3, 4), p33(1, 3), p34(p32);
	Vector w1(2, 3, 2), w2(2, 5, 3), w3(p33, p32, "w3"), w4(w3);

	p1.show();
	std::cout << std::endl;
	p2.show(1);
	std::cout << std::endl;
	p3.show(2);
	std::cout << std::endl;
	p31.show(); // (0;0)
	std::cout << std::endl;
	p32.show(1); // {1;1}
	std::cout << std::endl;
	p33.show(2); // [1;1]
	std::cout << std::endl;
	p34.show();
	std::cout << std::endl;
	w1.show(1); // (0;0)[d1,d2]
	w2.show(); // (1;1)(2;5)
	w3.show();
	w4.show();
	p31.set(3, 4, 0);
	p32.set(6, 7, 16);
	std::cout << p31 << std::endl;
	std::cout << p32 << std::endl;
	double a = !w3; // norma wektora
	double b = w2 % w3; // iloczyn skalarny dwoch wektorow
	std::cout << "a: " << a << " b: " << b << std::endl;
	w1 = w2 + w3; // dodawanie dwoch wektorow
	w1.show();
	w2 = 2 * w3; // mno¿enie liczby 2 przez wektor
	std::cout << "w2: " << w2 << std::endl; // (x;y)<d1,d2>
	w3 = w2 * 2; // mno¿enie wektora przez liczbe 2
	std::cout << "w3: " << w3 << std::endl;

	return 0;
}
