#ifndef PROSTA_H
#define PROSTA_H

#include<iostream>
#include"pkt.h"
#include<string>
#include<cmath>
using namespace std;

class prosta
{
	float a;
	float b;
	pkt P1;
	pkt P2;
	string nazwa;

public:
	
	bool SprwawdzRownoleglosc(prosta &A);

	void wypisz();

	void pobierz_info(float &w_a, float &w_b, pkt &pk1, pkt &pk2, string nazwa = "Prosta");
	
	prosta(pkt &A, pkt &B);

	prosta();

	prosta(prosta &PR);
};

#endif