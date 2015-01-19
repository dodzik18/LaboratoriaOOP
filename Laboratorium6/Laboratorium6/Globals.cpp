#include "Point2d.h"
#include "Point3d.h"
#include "Globals.h"


std::ostream& operator << (std::ostream& out, Point2d& point_)
{
	out << "(" << point_.getX() << "," << point_.getY() << ")" << std::endl;
	return out;
}

std::ostream& operator<<(std::ostream& out, Point3d& point_)
{
	out << "(" << point_.getX() << "," << point_.getY() << "," << point_.getZ() << ")" << std::endl;
	return out;
}