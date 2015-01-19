#pragma once

class Point2d
{
public:
	explicit Point2d(double x_=0., double y_=0.);
	Point2d(const Point2d&);
	~Point2d();

	void show();
	void show(int choice);

	void set(double x_, double y_);

	Point2d& operator=(const Point2d&);

	double getX() { return xy[0]; }
	double getY() { return xy[1]; }


protected:
	double *xy;
};

