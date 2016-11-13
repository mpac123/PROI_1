#include "karta.h"
#include <iostream>

Karta::Karta(figura F,k K)
	: f(F), kolor(K)
	{
		numer=(int)F;
	}

Karta::Karta(int N, k K)
	: numer(N), kolor(K) {}
	
bool Karta::operator==(Karta nowa)
{
	if(numer==nowa.numer and kolor==nowa.kolor)
		return true;
	else
		return false;
}

bool Karta::operator>(Karta nowa)
{
	if(numer>nowa.numer)
		return true;
	else if (numer==nowa.numer)
		if (kolor>nowa.kolor)
			return true;
	return false;

}

bool Karta::operator<(Karta nowa)
{
	if(numer<nowa.numer)
		return true;
	else if (numer==nowa.numer)
		if (kolor<nowa.kolor)
			return true;
	return false;
}

