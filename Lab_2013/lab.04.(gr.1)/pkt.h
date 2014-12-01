#ifndef PKT_H
#define PKT_H

#include<iostream>
#include<string>
#include<cmath>
using namespace std;


class pkt
{
	float X;
	float Y;
	string nazwa;
public:

	void wypisz()
	{
		cout << " " << nazwa << "(" << X << ", " << Y << ")";
	}

	void ustaw(string name, float w_x, float w_y);

	void pobierz_info(float &w_x, float &w_y);

	float odl_od_sr();
	
	pkt(float x = 0, float y = 0, string nazwa = "punkt");

	pkt(pkt &P);

	pkt operator+ (pkt p)
	{
		pkt p3;
		float x1, y1, x2, y2;

		p.pobierz_info(x1, y1);

		x2 = X;
		y2 = Y;

		p3.ustaw("punkt", (x1+x2), (y1+y2));
				
		return p3;
	}

	pkt operator= (pkt p)
	{
		X = p.X;
		Y = p.Y;
		return *this;
	}

	pkt operator- (pkt p)
	{
		float x1, y1, x2, y2;

		p.pobierz_info(x1, y1);

		x2 = X;
		y2 = Y;
				
		this->ustaw("punkt", (x1-x2), (y1-y2));
				
		return *this;
	}
};

#endif