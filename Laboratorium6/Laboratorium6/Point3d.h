#pragma once
#include "Point2d.h"


class Point3d :
	private Point2d
{
public:
	explicit Point3d(double x = 0, double y = 0., double z = 0.);
	Point3d(const Point3d& point3D);
	~Point3d() override;

	void swap(Point3d&) throw();


	void show() override;
	void show(int) override;


	Point3d& operator=(const Point3d point3D);
	Point3d& operator+=(const Point3d point3D);
	Point3d& operator-=(const Point3d point3D);
	Point3d operator+(const Point3d point3D) const;
	Point3d operator-(const Point3d point3D) const;


	double getX() const
	{
		return xy[0];
	}

	double getY() const
	{
		return xy[1];
	}

	double getZ() const
	{
		return xy[2];
	}

	void set(double x, double y, double z);
};
