#include <iostream>
class Vector;
std::ostream& operator<<(std::ostream&, Point2d&);
std::ostream& operator<<(std::ostream&, Point3d&);
std::ostream& operator<<(std::ostream&, Vector&);
float operator!(const Vector&);
Vector operator*(float, Vector&);