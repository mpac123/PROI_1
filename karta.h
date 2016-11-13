#ifndef _KARTA_H_
#define _KARTA_H_
#include <iostream>

enum k{trefl, karo, kier, pik};
enum figura{walet=11,dama,krol,as};
class Zestaw;
class Karta
{
public:
	friend class Zestaw;
	friend std::ostream& operator<<(std::ostream &ekran, const Karta &z);
	
	Karta(figura,k); //konstruktor(figura,kolor)
	Karta(int,k); //konstruktor(numer,kolor)
	Karta(const Karta&); //konstruktor kopiujacy
	Karta& operator=(const Karta&);
		
private:	
	k kolor;
	figura f;
	int numer;

	bool operator==(Karta);
	bool operator!=(Karta);
	bool operator>(Karta);
	bool operator<(Karta);
	
};

#endif
