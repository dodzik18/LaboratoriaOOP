#include "Point2d.h"
#include "Point3d.h"
#include "Vector.h"
#include "Globals.h"


std::ostream& operator <<(std::ostream& out, const Point2d point2D)
{
	out << "(" << point2D.getX() << "," << point2D.getY() << ")" ;
	return out;
}

std::ostream& operator<<(std::ostream& out, const Point3d point3D)
{
	out << "(" << point3D.getX() << "," << point3D.getY() << "," << point3D.getZ() << ")" ;
	return out;
}

std::ostream& operator<<(std::ostream& out, const Vector vector)
{
	Vector tempVector(vector);
	tempVector.showAttributes();
	return out;
}

double operator!(const Vector vector)
{
	/* sqrt(x*x+y*y+z*z) */
	return sqrt(vector.getP1_X() * vector.getP1_X() + vector.getP1_Y() * vector.getP1_Y() + vector.getP1_Z() * vector.getP1_Z());
}

Vector operator*(float multiplier, const Vector vector)
{
	Vector temp(vector);
	temp.setD1(vector.getD1() * multiplier);
	temp.setD2(vector.getD2() * multiplier);
	temp.setD3(vector.getD3() * multiplier);
	return temp;
}
