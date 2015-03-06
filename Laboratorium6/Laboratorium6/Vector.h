#pragma once
#include <string>

class Vector
{
public:
	Vector(double x = 0., double y = 0., double z = 0., std::string name_ = "vv")
		: d1(x), d2(y), d3(z), p1(0., 0., 0.), p2(x, y, z), name(std::move(name_)) {};
	Vector(Point3d& lPoint3D, Point3d& rPoint3D, std::string name_= "vv")
		: p1(lPoint3D), p2(rPoint3D), name(std::move(name_)) {};
	Vector(const Vector& vector) = default;


	void swap(Vector&) throw(); 


	void show();
	void show(int);
	void showPoint();
	void showAttributes();


	Vector& operator=(const Vector& vector);
	Vector& operator+=(const Vector vector);
	Vector& operator-=(const Vector vector);
	Vector operator+(const Vector vector);
	Vector operator-(const Vector vector);
	Vector operator*(float multiplier);
	double operator%(Vector& vector);


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

