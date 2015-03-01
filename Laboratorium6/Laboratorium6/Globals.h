#pragma once
#include <iostream>
class Vector;

std::ostream& operator<<(std::ostream&, const Point2d& point);
std::ostream& operator<<(std::ostream&, const Point3d& point);
std::ostream& operator<<(std::ostream&, const Vector& point);

double operator!(const Vector& vector);
Vector operator*(float multiplier, Vector& vector );