#include "Point3d.h"
#include "Globals.h"
#include "Vector.h"

void Vector::swap(Vector& vector)
{
	std::swap(d1, vector.d1);
	std::swap(d2, vector.d2);
	std::swap(d3, vector.d3);
	std::swap(p1, vector.p1);
	std::swap(p2, vector.p2);
	std::swap(name, vector.name);
}

Vector& Vector::operator=(const Vector& vector)
{
	Vector temp(vector);
	temp.swap(*this);
	return *this;
}

Vector& Vector::operator+=(const Vector vector)
{
	p1 += vector.getP1();
	p2 += vector.getP2();
	d1 += vector.getD1();
	d2 += vector.getD2();
	d3 += vector.getD3();
	name = vector.name;
	return *this;
}

Vector& Vector::operator-=(const Vector vector)
{
	p1 -= vector.getP1();
	p2 -= vector.getP2();
	d1 -= vector.getD1();
	d2 -= vector.getD2();
	d3 -= vector.getD3();
	name = vector.name;
	return *this;
}

Vector Vector::operator+(const Vector vector)
{
	Vector temp(vector);
	temp.d1 = d1 + vector.d1;
	temp.d2 = d2 + vector.d2;
	temp.d3 = d3 + vector.d3;
	return temp;
}

Vector Vector::operator-(const Vector vector)
{
	/* copying whole vector to temp, and then setting d1, d2, d3 to do not lose points */
	Vector temp(vector);
	temp.d1 = d1 - vector.d1;
	temp.d2 = d2 - vector.d2;
	temp.d3 = d3 - vector.d3;
	return temp;
}

Vector Vector::operator*(float multiplier)
{
	Vector temp(*this);
	temp.d1 = d1 * multiplier;
	temp.d2 = d2 * multiplier;
	temp.d3 = d3 * multiplier;
	return temp;
}

double Vector::operator%(Vector& vector)
{
	return p2.getX() * vector.getP2_X() + p2.getY() * vector.getP2_Y() + p2.getZ() * vector.getP2_Z();
}

void Vector::show()
{
	std::cout << p1 << p2 << " [" << d1 << "," << d2 << "," << d3 << "] " << name << std::endl;
}

void Vector::show(int) /* overloading just with random int, to distinguish show() and show(int)*/
{
	std::cout << p1 << " " << p2 << std::endl;
}

void Vector::showPoint()
{
	p2.show();
}

void Vector::showAttributes()
{
	std::cout << "[ " << d1 << "," << d2 << "," << d3 << " ]" << std::endl;
}
