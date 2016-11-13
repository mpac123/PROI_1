#ifndef _KARTA_H_
#define _KARTA_H_
#include <iostream>

enum k{trefl, karo, kier, pik};
enum figura{walet=11,dama,krol,as};

class Karta
{
	friend class Zestaw;
	friend std::ostream& operator<<(std::ostream &ekran, const Karta &z);
	
public:	
	k kolor;
	figura f;
	int numer;
	
	Karta(figura,k); //konstruktor(figura,kolor)
	Karta(int,k); //konstruktor(numer,kolor)
	Karta(const Karta&); //konstruktor kopiujacy
	

	bool operator==(Karta);
	bool operator!=(Karta);
	bool operator>(Karta);
	bool operator<(Karta);
	Karta& operator=(const Karta&);
};

#endif
