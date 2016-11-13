#include "zestaw.h"
#include "karta.h"
#include <vector>
#include <iostream>

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
		std::cout << "Ta karta juz jest w tym zestawie!\n";
	else
		Set.push_back(nowa);
}
std::ostream& operator<<(std::ostream &ekran, Karta &z)
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
std::ostream& operator<<(std::ostream &ekran, Zestaw &z)
{
	for (int i=0; i<z.Set.size(); i++)
	{
		ekran << i+1 << ": ";
		ekran << z.Set[i];
		ekran << std::endl;
	}
	return ekran;
}
