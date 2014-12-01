#ifndef OKRAG_H
#define OKRAG_H

#include<iostream>
#include"pkt.h"

const float PI = 3.14159;

class okrag
{
	pkt srodek;
	float promien;
	long l_punktow;
	pkt *ppo;

public:
	
	okrag(pkt srodek, float promien, long l_punktow);
	okrag();
	~okrag();
			
	void zmien_sr(float &a, float &b);
	
	void zmien_promien(float war);
	
	void zmien_l_punktow(long wart);

	void wypisz_okrag();
};
	
#endif