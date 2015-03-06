#pragma once
#include <iostream>
class Vector;

std::ostream& operator<<(std::ostream& out, const Point2d point2D);
std::ostream& operator<<(std::ostream& out, const Point3d point3D);
std::ostream& operator<<(std::ostream& out, const Vector vector);

double operator!(const Vector vector);
Vector operator*(float multiplier, const Vector vector);