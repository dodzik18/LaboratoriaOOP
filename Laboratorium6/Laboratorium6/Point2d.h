#pragma once

class Point2d
{
public:
	explicit Point2d(double x_=0., double y_=0.);
	Point2d(const Point2d&);
	virtual ~Point2d();

	virtual void show();
	virtual void show(int choice);

	void set(double x_, double y_);

	Point2d& operator=(const Point2d&);

	virtual double getX() { return xy[0]; }
	virtual double getY() { return xy[1]; }

	void swap(Point2d&);

protected:
	double *xy;
};

