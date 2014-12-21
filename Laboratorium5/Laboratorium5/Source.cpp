#include "Figure.h"
#include "Circle.h"
#include "Quadrangle.h"
#include "Triangle.h"

void polymorphism(Figure *f)
{
	f->show();
}

int main()
{
	Circle c1(35), c2, c3(c1), c4(345);
	Quadrangle q1(100,23), q2(4, 64), q3(23, 1132);
	Triangle t1(3, 5), t2(t1), t3(324, 3);


	polymorphism(&c1);

	polymorphism(&t3);

	polymorphism(&q3);

	polymorphism(&c4);

	polymorphism(&q1);
	

	return 0;
}