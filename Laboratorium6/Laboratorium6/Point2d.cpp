#include "Point2d.h"
#include <iostream>

Point2d::Point2d(double x, double y)
{
	xy = new double[2];
	xy[0] = x;
	xy[1] = y;
}
Point2d::Point2d(const Point2d& point2D)
{
	xy = new double[2];
	xy[0] = point2D.xy[0];
	xy[1] = point2D.xy[1];
}

Point2d::~Point2d()
{	
	delete[] xy;
}

Point2d& Point2d::operator+=(const Point2d point2D)
{
	xy[0] += point2D.getX();
	xy[1] += point2D.getY();
	return *this;
}

Point2d& Point2d::operator=(const Point2d point2D)
{
	xy[0] = point2D.xy[0];
	xy[1] = point2D.xy[1];
	return *this;
}

Point2d& Point2d::operator-=(const Point2d point2D)
{
	xy[0] -= point2D.getX();
	xy[1] -= point2D.getY();
	return *this;
}

Point2d Point2d::operator+(const Point2d point2D) const
{
	Point2d temp;
	temp.xy[0] = xy[0] + point2D.xy[0];
	temp.xy[1] = xy[1] + point2D.xy[1];
	return temp;
}

Point2d Point2d::operator-(const Point2d point2D) const
{
	Point2d temp;
	temp.xy[0] = xy[0] - point2D.xy[0];
	temp.xy[1] = xy[1] - point2D.xy[1];
	return temp;
}

void Point2d::swap(Point2d& point2D) 
{
	std::swap(xy, point2D.xy);
}

void Point2d::show()
{
	if (!xy)
	{
		std::cout << "(0,0)";
		return;
	}
	std::cout << "(" << xy[0] << "," << xy[1] << ")" ;
}

void Point2d::show(int choice)
{
	switch (choice)
	{
		case 1:
			std::cout << "{" << xy[0] << "," << xy[1] << "}" ;
			break;
		case 2:
			std::cout << "[" << xy[0] << "," << xy[1] << "]" ;
			break;
		default:
			show();
	}
}

void Point2d::set(double x, double y)
{
	xy[0] = x;
	xy[1] = y;
}
