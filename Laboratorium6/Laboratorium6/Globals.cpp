#include "Point2d.h"
#include "Point3d.h"
#include "Vector.h"
#include "Globals.h"


std::ostream& operator << (std::ostream& out, Point2d& point_)
{
	out << "(" << point_.getX() << "," << point_.getY() << ")" ;
	return out;
}

std::ostream& operator<<(std::ostream& out, Point3d& point_)
{
	out << "(" << point_.getX() << "," << point_.getY() << "," << point_.getZ() << ")" ;
	return out;
}

std::ostream& operator<<(std::ostream& out, Vector& vector_)
{
	Point3d p1_, p2_;
	p1_ = vector_.getP1();
	p2_ = vector_.getP2();
	out << "(" << p1_ << "," << p2_ << ") " << "<" << vector_.getD1() << "," << vector_.getD2() << "," << vector_.getD3() << ">" ;
	return out;
}