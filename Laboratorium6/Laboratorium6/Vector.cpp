#include "Point3d.h"
#include "Globals.h"
#include "Vector.h"
#include <iostream>
#include <cmath>


Vector::Vector(double x_, double y_, double z_, std::string name_)
{
	p1.set(0., 0., 0.);
	p2.set(x_, y_, z_);
	name = name_;

	d1 = x_;
	d2 = y_;
	d3 = z_;
}

Vector::Vector(Point3d& p1_, Point3d& p2_, std::string name_)
{
	d1 = p2_.getX() - p1_.getX();
	d2 = p2_.getY() - p1_.getY();
	d3 = p2_.getZ() - p1_.getZ();
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

void Vector::swap(Vector& vector_) throw()
{
	std::swap(d1, vector_.d1);
	std::swap(d2, vector_.d2);
	std::swap(d3, vector_.d3);

	std::swap(p1, vector_.p1);
	std::swap(p2, vector_.p2);
}

Vector& Vector::operator=(const Vector& vector_)
{
	Vector temp(vector_);
	temp.swap(*this);
	return *this;
}

Vector& Vector::operator+(const Vector& vector_) 
{
	Vector temp;
	temp.d1 = d1 + vector_.d1;
	temp.d2 = d2 + vector_.d2;
	temp.d3 = d3 + vector_.d3; 
	return temp;
}
Vector& Vector::operator-(const Vector& vector_)
{
	Vector temp;
	temp.d1 = d1 - vector_.d1;
	temp.d2 = d2 - vector_.d2;
	temp.d3 = d3 - vector_.d3;
	return temp;
}

Vector& Vector::operator*(double multiplier)
{
	Vector temp;
	temp.d1 = d1*multiplier;
	temp.d2 = d2*multiplier;
	temp.d3 = d3*multiplier;
	return temp;
}

double Vector::operator!()
{
	return  sqrt(p1.getX()*p1.getX() + p1.getY()*p1.getY() + p1.getZ()*p1.getZ());
}

float Vector::operator%(Vector& vector_) 
{
	return p1.getX() * vector_.getP1().getX() + p1.getY()* vector_.getP1().getY() + p1.getZ() * vector_.getP1().getZ();
}

void Vector::show()
{
	std::cout  << p2 << " [" << d1 << "," << d2 << "," << d3 << "] "<< name << std::endl;
}

void Vector::show(int)
{
	std::cout << p1 << " " << p2 << std::endl;
}

void Vector::showPoint()
{
	p2.show();
}