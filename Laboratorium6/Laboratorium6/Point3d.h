#pragma once
#include "Point2d.h"
class Point3d :
	private Point2d
{
public:
	explicit Point3d(double x_ = 0, double y_ = 0., double z_ = 0.);
	Point3d(const Point3d&);
	~Point3d(); 

	void swap(Point3d&);

	void show() override;
	void show(int) override; 

	void set(double x_, double y_, double z_);

	Point3d& operator=(const Point3d&);


	// x and y coordinates are inherited from base class

	double getX() const override
	{ return xy[0]; }	
	double getY() const override
	{ return xy[1]; }
	double getZ() const 
	{ return xy[2]; }


};

