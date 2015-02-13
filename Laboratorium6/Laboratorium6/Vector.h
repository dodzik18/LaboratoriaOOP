#pragma once
#include <string>

class Vector
{
public:
	explicit Vector(double x_ = 0., double y_ = 0., double z_ = 0., std::string name_ = "vv");
	Vector(Point3d&, Point3d&, std::string = "vv");
	Vector(const Vector&);

	void swap(Vector&) throw(); /* waiting for VS2015, to support noexcept()*/

	void show();
	void show(int);
	void showPoint();

	Vector& operator=(const Vector&);
	Vector& operator+(const Vector&);
	Vector& operator-(const Vector&);
	Vector& operator*(double);
	float operator%(Vector&);


	double getD1() const { return d1; }
	double getD2() const { return d2; }
	double getD3() const { return d3; }
	Point3d getP1() const { return p1; }
	Point3d getP2() const { return p2; }
	double getP1_X() const { return p1.getX(); }
	double getP1_Y() const { return p1.getY(); }
	double getP1_Z() const { return p1.getZ(); }
	double getP2_X() const { return p2.getX(); }
	double getP2_Y() const { return p2.getY(); }
	double getP2_Z() const { return p2.getZ(); }

	void setD1(const double value) { d1 = value; }
	void setD2(const double value) { d2 = value; }
	void setD3(const double value) { d3 = value; }


private:
	double d1, d2, d3;
	Point3d p1, p2;
	std::string name;
};

