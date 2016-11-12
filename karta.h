#ifndef _KARTA_H_
#define _KARTA_H_

enum k{trefl, karo, kier, pik};
enum figura{walet=11,dama,krol,as};

class Karta
{
public:	
	k kolor;
	figura f;
	int numer;
	
	Karta(figura,k); //konstruktor(figura,kolor)
	Karta(int,k); //konstruktor(numer,kolor)
	
	bool operator==(Karta);
	bool operator>(Karta);
	bool operator<(Karta);
};

#endif
