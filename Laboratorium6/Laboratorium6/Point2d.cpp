#include "Point2d.h"
#include <iostream>

Point2d::Point2d(double x_, double y_)
{
	xy = new double[2];
	xy[0] = x_;
	xy[1] = y_;
}
Point2d::Point2d(const Point2d& point_)
{
	xy = new double[2];
	xy[0] = point_.xy[0];
	xy[1] = point_.xy[1];
}
Point2d::~Point2d()
{	
	delete[] xy;
}

Point2d& Point2d::operator+=(const Point2d& point_)
{
	xy[0] += point_.getX();
	xy[1] += point_.getY();
	return *this;
}

Point2d& Point2d::operator=(const Point2d& point_)
{
	xy[0] = point_.xy[0];
	xy[1] = point_.xy[1];
	return *this;
}

void Point2d::swap(Point2d& point_) 
{
	std::swap(xy[0], point_.xy[0]);
	std::swap(xy[1], point_.xy[1]);
}

void Point2d::show()
{
	if (!xy)
	{
		std::cout << "(0,0)";
		return;
	};
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

void Point2d::set(double x_, double y_)
{
	xy[0] = x_;
	xy[1] = y_;
}
