#pragma once

class Point2d
{
public:	
	Point2d() {};
	explicit Point2d(double x_, double y_);
	Point2d(const Point2d&);
	virtual ~Point2d();

	void swap(Point2d&) throw();

	virtual void show();
	virtual void show(int choice);



	Point2d& operator+=(const Point2d&);
	Point2d& operator=(const Point2d&);
	friend Point2d& operator+(const Point2d&, const Point2d&); 

	virtual double getX() const { return xy[0]; }
	virtual double getY() const { return xy[1]; }

	void set(double x_, double y_);

protected:
	double *xy;
};

