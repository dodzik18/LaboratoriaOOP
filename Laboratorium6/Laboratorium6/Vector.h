#pragma once
#include <string>
class Vector
{
public:
	explicit Vector(double x_ = 0., double y_ = 0., double z_ = 0., std::string name_ = "");
	Vector(Point3d&, Point3d&, std::string="");
	Vector(const Vector&);

	void show();
	void show(int);

	Vector& operator=(const Vector&);


	double getD1(){ return d1; } 
	double getD2(){ return d2; }
	double getD3(){ return d3; }

private:
	double d1, d2, d3;
	Point3d p1, p2;
	std::string name;
};

