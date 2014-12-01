#include<cmath>
#include"okrag.h"


okrag::okrag(pkt srodek, float promien, long l_punktow) :srodek(srodek), promien(promien), l_punktow(l_punktow)
{
	ppo = new pkt[l_punktow];
	float war1, war2, sr1, sr2;

	srodek.pobierz_info(sr1, sr2);

	for(int i = 0 ; i < l_punktow ; ++i)
	{
		war1 = promien * cos(2 * PI * i / l_punktow) + sr1;
		war2 = promien * sin(2 * PI * i / l_punktow) + sr2;
				
		ppo[i].pkt::ustaw("pkt", (int)war1, (int)war2);
	}
}

okrag::okrag()
{	
	srodek.ustaw("srodek", 0, 0);
	promien = 10;
	l_punktow = 10;
	ppo = new pkt[l_punktow];

	float war1, war2;
	
	for(int i = 0 ; i < l_punktow ; ++i)
	{
		war1 = promien * cos(2 * PI * i / l_punktow);
		war2 = promien * sin(2 * PI * i / l_punktow);
		
		ppo[i].pkt::ustaw("pkt", (int)war1, (int)war2);
	}
}

okrag::~okrag()
{
	delete [] ppo;
}

void okrag::zmien_sr(float &a, float &b)
{
	srodek.ustaw("srodek", a, b);
}

void okrag::zmien_promien(float war)
{
	promien = war;
}

void okrag::zmien_l_punktow(long wart)
{
	l_punktow = wart;
}

void okrag::wypisz_okrag()
{
	int i = 0;
	long a = this -> l_punktow;

	for(i ; i < a ; ++i)
		ppo[i].pkt::wypisz();
}