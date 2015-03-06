#include "Point3d.h"
#include <iostream>


Point3d::Point3d(double x, double y, double z)
{
	xy = new double[3];
	xy[0] = x;
	xy[1] = y;
	xy[2] = z;
}

Point3d::Point3d(const Point3d& point3D)
{
	xy = new double[3];
	xy[0] = point3D.xy[0];
	xy[1] = point3D.xy[1];
	xy[2] = point3D.xy[2];
}

Point3d::~Point3d()
{
	//array is destroyed in base class destructor call
}

Point3d& Point3d::operator=(const Point3d point3D)
{
	xy[0] = point3D.xy[0];
	xy[1] = point3D.xy[1];
	xy[2] = point3D.xy[2];
	return *this;
}

Point3d& Point3d::operator+=(const Point3d point3D)
{
	xy[0] += point3D.getX();
	xy[1] += point3D.getY();
	xy[2] += point3D.getZ();
	return *this;
}

Point3d& Point3d::operator-=(const Point3d point3D)
{
	xy[0] -= point3D.getX();
	xy[1] -= point3D.getY();
	xy[2] -= point3D.getZ();
	return *this;
}

Point3d Point3d::operator+(const Point3d point3D) const
{
	Point3d temp;
	temp.xy[0] = xy[0] + point3D.xy[0];
	temp.xy[1] = xy[1] + point3D.xy[1];
	temp.xy[2] = xy[2] + point3D.xy[2];
	return temp;
}

Point3d Point3d::operator-(const Point3d point3D) const
{
	Point3d temp;
	temp.xy[0] = xy[0] - point3D.xy[0];
	temp.xy[1] = xy[1] - point3D.xy[1];
	temp.xy[2] = xy[2] - point3D.xy[2];
	return temp;
}

void Point3d::swap(Point3d& point3D)
{
	std::swap(xy, point3D.xy);
}

void Point3d::show()
{
	if (!xy)
	{
		std::cout << "(0, 0, 0)" << std::endl;
		return;
	}
	std::cout << "(" << xy[0] << "," << xy[1] << "," << xy[2] << ")" ;
}

void Point3d::show(int choice) /* TODO: http://coderemarks.com/review/dlVmvGzSIiURDkH1 */
{
	if (!xy)
	{
		std::cout << "{0,0,0}" << std::endl;
		return;
	}
	switch (choice)
	{
		case 1:
			std::cout << "{" << xy[0] << "," << xy[1] << "," << xy[2] << "}" ;
			break;
		case 2:
			std::cout << "[" << xy[0] << "," << xy[1] << "," << xy[2] << "]" ;
			break;
		default:
			show();
	}
}

void Point3d::set(double x, double y, double z)
{
	xy[0] = x;
	xy[1] = y;
	xy[2] = z;
}
