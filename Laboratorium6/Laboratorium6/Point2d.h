#pragma once

class Point2d
{
public:	
	Point2d() {};
	explicit Point2d(double x_, double y_);
	Point2d(const Point2d&);
	virtual ~Point2d();

	virtual void show();
	virtual void show(int choice);

	void set(double x_, double y_);

	Point2d& operator=(const Point2d&);

	virtual double getX() const { return xy[0]; }
	virtual double getY() const { return xy[1]; }

	void swap(Point2d&);

protected:
	double *xy;
};

