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
		cout << "Punkt " << nazwa << " ma wspolrzedne (" << X << ", " << Y << ")" << endl;
	}

	void ustaw(string name, float w_x, float w_y);

	void pobierz_info(float &w_x, float &w_y);

	float odl_od_sr();
};

#endif