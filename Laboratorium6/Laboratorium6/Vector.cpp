#include "Point3d.h"
#include "Vector.h"
#include "Globals.h"
#include <iostream>


Vector::Vector(double x_, double y_, double z_, std::string name_)
{
	p1.set(0., 0., 0.);
	p2.set(x_, y_, z_);
	name = name_;

	d1 = x_;
	d2 = y_;
	d3 = z_;
}


Vector::Vector(Point3d&, Point3d&, std::string name_)
{
	d1 = p2.getX() - p1.getX();
	d2 = p2.getY() - p1.getY();
	d3 = p2.getZ() - p1.getZ();
	name = name_;
}

Vector::Vector(const Vector& vector_)
{
	p1 = vector_.p1;
	p2 = vector_.p2;
	d1 = vector_.d1;
	d2 = vector_.d2;
	d3 = vector_.d3;
	name = vector_.name;
}

void Vector::show()
{
	std::cout << "Wektor " << name << " " << p2 << " " << d1 << "," << d2 << "," << d3 << "," << std::endl;
}

void Vector::show(int)
{
	std::cout << p1 << " " << p2 << std::endl;
}