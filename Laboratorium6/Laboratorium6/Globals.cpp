#include "Point2d.h"
#include "Point3d.h"
#include "Vector.h"
#include "Globals.h"


std::ostream& operator << (std::ostream& out, const Point2d& point)
{
	out << "(" << point.getX() << "," << point.getY() << ")" ;
	return out;
}

std::ostream& operator<<(std::ostream& out, const Point3d& point)
{
	out << "(" << point.getX() << "," << point.getY() << "," << point.getZ() << ")" ;
	return out;
}

std::ostream& operator<<(std::ostream& out, const Vector& vector)
{
	Vector tempVector(vector);
	tempVector.showDattributes();
	return out;
}
/* http://en.cppreference.com/w/cpp/language/operators -> Binary arithmetic operators */
Point2d& operator+(Point2d& lPoint, const Point2d& rPoint)
{
	return lPoint += rPoint;
}

Point3d& operator+(Point3d& lPoint, const Point3d& rPoint)
{
	return lPoint += rPoint;
}

Vector& operator+(Vector& lVector, const Vector& rVector)
{
	return lVector += rVector;
}
Vector& operator-(Vector& lVector, const Vector& rVector)
{
	return lVector -= rVector;
}


double operator!(const Vector& vector_)
{
	/* sqrt(x*x+y*y+z*z) */
	return  sqrt(vector_.getP1_X()*vector_.getP1_X() + vector_.getP1_Y()*vector_.getP1_Y() + vector_.getP1_Z()*vector_.getP1_Z());
}

Vector operator*(float multiplier, Vector& vector_)
{
	return vector_*multiplier;
}