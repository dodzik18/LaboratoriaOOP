#pragma once

class Point2d
{
public:	
	Point2d() = default;
	explicit Point2d(double x, double y);
	Point2d(const Point2d& point2D);
	virtual ~Point2d();


	void swap(Point2d& point2D) throw();


	virtual void show();
	virtual void show(int choice);


	Point2d& operator+=(const Point2d point2D);
	Point2d& operator=(const Point2d point2D);
	Point2d& operator-=(const Point2d point2D);
	Point2d operator+(const Point2d point2D) const;
	Point2d operator-(const Point2d point2D) const;


	double getX() const { return xy[0]; }
	double getY() const { return xy[1]; }

	void set(double x, double y);

protected:
	double *xy;
};

