#include "Point2d.h"
#include "Point3d.h"
#include "Vector.h"
#include "Globals.h"
#include <iostream>

using namespace std;


int main() 
{
	Point2d p1, p2(1, 1), p3(p2);
	Point3d p31, p32(1, 3, 4), p33(1, 3), p34(p32);
	p1.show();
	cout << endl;
	p2.show(1);
	cout << endl;
	p3.show(2);  
	cout << endl;
	p31.show(); // (0;0)
	cout << endl;
	p32.show(1); // {1;1}
	cout << endl;
	p33.show(2); // [1;1]
	cout << endl;
	p34.show();
	cout << endl;
	Vector w1, w2(2, 5), w3(p33, p32, "w3"), w4(w3);
	w1.show(); // (0;0)[d1,d2]
	w2.show(1); // (1;1)(2;5)
	w3.show();
	w4.show(); 
	p31.set(3, 4, 0);
	p32.set(6, 7, 16);
	cout << p31 << endl;
	cout << p32 << endl;
	float a = !w2; // norma wektora
	float b = w2%w3; // iloczyn skalarny dwoch wektorow
	cout << a << " " << b << endl;
	w1 = w2 + w3; // dodawanie dwoch wektorow
	w1.show();
//	w2 = 2 * w3; // mno¿enie liczby 2 przez wektor
	cout << w2; // (x;y)<d1,d2>
	w3 = w2 * 2; // mno¿enie wektora przez liczbe 2
	cout << w3; 
	return 0;
}