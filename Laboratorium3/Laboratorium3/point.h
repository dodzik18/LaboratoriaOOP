#pragma once
class point
{
public:
	point(float x_ = 0., float y_ = 0.);
	point(const point&);

	void show();

	float getX() { return coords[0]; }
	float getY() { return coords[1]; }

	point operator=(const point&);
	point operator+(const point&);
	point operator-(const point&);
		
private:
	float coords[2];
};

