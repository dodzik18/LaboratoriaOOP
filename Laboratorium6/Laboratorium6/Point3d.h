#pragma once
#include "Point2d.h"
class Point3d :
	private Point2d
{
public:
	explicit Point3d(double x_ = 0, double y_ = 0., double z_ = 0.);
	Point3d(const Point3d&);
	~Point3d(); 

	void show();
	void show(int); 

	void set(double x_, double y_, double z_);

	Point3d& operator=(const Point3d&);

	double getX() { return xy[0]; }
	double getY() { return xy[1]; }
	double getZ() { return xy[2]; }

	void swap(Point3d&);

	//coordinates are inherited from base class
};

