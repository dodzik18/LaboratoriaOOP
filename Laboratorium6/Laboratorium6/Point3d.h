#pragma once
#include "Point2d.h"


class Point3d :
	private Point2d
{
public:
	explicit Point3d(double x_ = 0, double y_ = 0., double z_ = 0.);
	Point3d(const Point3d&);
	~Point3d(); 

	void swap(Point3d&) throw();


	void show() override;
	void show(int) override; 


	Point3d& operator=(const Point3d&);
	Point3d& operator+=(const Point3d&);
	Point3d& operator-=(const Point3d&);
	friend Point3d& operator+(Point3d&, const Point3d&);


	double getX() const override
	{ return xy[0]; }	
	double getY() const override
	{ return xy[1]; }
	double getZ() const 
	{ return xy[2]; }

	void set(double x_, double y_, double z_);
};

