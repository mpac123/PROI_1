#include "karta.h"
#include <iostream>

//konstruktor dla waleta, damy, krola, pika
Karta::Karta(figura F,k K)
	: f(F), kolor(K)
	{
		numer=(int)F;
	}
//konstruktor dla numerow
Karta::Karta(int N, k K)
	: numer(N), kolor(K) {}
	
//konstruktor kopiujacy
Karta::Karta(const Karta& nowa)
{
	numer=nowa.numer;
	kolor=nowa.kolor;
}
	
bool Karta::operator==(Karta nowa)
{
	if(numer==nowa.numer and kolor==nowa.kolor)
		return true;
	else
		return false;
}

bool Karta::operator!=(Karta nowa)
{
	if(numer==nowa.numer and kolor==nowa.kolor)
		return false;
	else
		return true;
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
//operator przypisania
Karta& Karta::operator=(const Karta& nowa)
{
	//sprawdzam, czy nie kopiuje samego siebie
	if(&nowa==this)
		return *this;
	
	numer=nowa.numer;
	kolor=nowa.kolor;
	return *this;
}

