#pragma once
#include <string>
class Vector
{
public:
	explicit Vector(double x_ = 0., double y_ = 0., double z_ = 0., std::string name_ = "vv");
	Vector(Point3d&, Point3d&, std::string = "vv");
	Vector(const Vector&);

	void swap(Vector&);

	void show();
	void show(int);
	void showPoint();

	Vector& operator=(const Vector&);
	Vector& operator+(const Vector&);
	Vector& operator-(const Vector&);
	Vector& operator*(double);
	double operator!();
	float operator%(Vector&);


	double getD1(){ return d1; }
	double getD2(){ return d2; }
	double getD3(){ return d3; }
	Point3d getP1() { return p1; }
	Point3d getP2() { return p2; }


private:
	double d1, d2, d3;
	Point3d p1, p2;
	std::string name;
};

