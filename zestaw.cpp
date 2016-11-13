#include "zestaw.h"
#include "karta.h"
#include <vector>
#include <iostream>


Zestaw::~Zestaw()
{
	Set.clear();
}
Karta Zestaw::ZwrocNajstarsza()
{
	if(!Set.size())
	{
		std::cout << "Zestaw jest pusty\n";
		return Karta(0,pik);
	}
	
	Karta Najstarsza(0,trefl);
	for (int i=0; i<Set.size(); i++)
		if (Set[i]>Najstarsza)
			Najstarsza=Set[i];
			
	return Najstarsza;
}

Karta Zestaw::ZwrocNajmlodsza()
{
	if(!Set.size())
	{
		std::cout << "Zestaw jest pusty\n";
		return Karta(0,pik);
	}
	
	Karta Najmlodsza(13,pik);
	for (int i=0; i<Set.size(); i++)
		if (Set[i]<Najmlodsza)
			Najmlodsza=Set[i];

	return Najmlodsza;
}

void Zestaw::DodajKarte(Karta nowa)
{
	int czy_powtorka=0;
	for (int i=0; i<Set.size(); i++)
		if (nowa==Set[i])
			czy_powtorka++;
	if(czy_powtorka)
		std::cout << "Ta karta (" << nowa << ") juz jest w tym zestawie!\n";
	else
		Set.push_back(nowa);
}

void Zestaw::DodajKarte(int numer, k kolor)
{
	Karta nowa(numer,kolor);
	int czy_powtorka=0;
	for (int i=0; i<Set.size(); i++)
		if (nowa==Set[i])
			czy_powtorka++;
	if(czy_powtorka)
		std::cout << "Ta karta juz jest w tym zestawie!\n";
	else
		Set.push_back(nowa);
}

void Zestaw::DodajKarte(figura f, k kolor)
{
	Karta nowa(f,kolor);
	int czy_powtorka=0;
	for (int i=0; i<Set.size(); i++)
		if (nowa==Set[i])
			czy_powtorka++;
	if(czy_powtorka)
		std::cout << "Ta karta juz jest w tym zestawie!\n";
	else
		Set.push_back(nowa);
}

bool Zestaw::operator==(const Zestaw& z)
{
	if (Set.size()!=z.Set.size())
		return false;
		
	for (int i=0; i<z.Set.size(); i++)
		if (Set[i]!=z.Set[i])
			return false;
	return true;
}

Zestaw& Zestaw::operator=(const Zestaw& z)
{
	if(&z==this)
		return *this;
	
	Set.clear();
	for (int i=0; i<z.Set.size(); i++)
		DodajKarte(z.Set[i]);
	return *this;
}

Karta Zestaw::operator[](int i)
{
	return Set[i];
}

Zestaw Zestaw::operator+(const Zestaw& z)
{
	Zestaw nowy=*this;
	for (int i=0; i<z.Set.size(); i++)
		nowy.DodajKarte(z.Set[i]);
	return nowy;
}

Zestaw& Zestaw::operator+=(const Zestaw& z)
{
	for (int i=0; i<z.Set.size(); i++)
		DodajKarte(z.Set[i]);
	return *this;
}

std::ostream& operator<<(std::ostream &ekran, const Karta &z)
{
		if (z.numer==11)
			ekran << "walet ";
		else if (z.numer==12)
			ekran << "dama ";
		else if (z.numer==13)
			ekran << "krol ";
		else if (z.numer==14)
			ekran << "as ";
		else
			ekran << z.numer << " ";
		
		if (z.kolor==0)
			ekran << "trefl";
		else if (z.kolor==1)
			ekran << "karo";
		else if (z.kolor==2)
			ekran << "kier";
		else if (z.kolor==3)
			ekran << "pik";
		
	return ekran;
}
std::ostream& operator<<(std::ostream &ekran, const Zestaw &z)
{
	for (int i=0; i<z.Set.size(); i++)
	{
		ekran << i+1 << ": ";
		ekran << z.Set[i];
		ekran << std::endl;
	}
	return ekran;
}
