#include "Point3d.h"
#include <iostream>


Point3d::Point3d(double x_, double y_, double z_)
{
	xy = new double[3];
	xy[0] = x_;
	xy[1] = y_;
	xy[2] = z_;
}

Point3d::Point3d(const Point3d& point_)
{
	xy = new double[3];
	xy[0] = point_.xy[0];
	xy[1] = point_.xy[1];
	xy[2] = point_.xy[2];
}
Point3d::~Point3d()
{
	//array is destroyed in base class destructor call
}

Point3d& Point3d::operator=(const Point3d& point_)
{
	xy = new double[3];
	xy[0] = point_.xy[0];
	xy[1] = point_.xy[1];
	xy[2] = point_.xy[2];
	return *this;
}

void Point3d::show()
{
	std::cout << "(" << xy[0] << "," << xy[1] << "," << xy[2] << ")" << std::endl;
}

void Point3d::show(int choice)
{
	switch (choice)
	{
	case 1:
		std::cout << "{" << xy[0] << "," << xy[1] << "," << xy[2] << "}" << std::endl;
		break;
	case 2:
		std::cout << "[" << xy[0] << "," << xy[1] << "," << xy[2] << "]" << std::endl;
		break;
	default:
		show();
	}
}

void Point3d::set(double x_, double y_, double z_)
{
	xy[0] = x_;
	xy[1] = y_;
	xy[2] = z_;
}
