#include "karta.h"
#include "zestaw.h"
#include <iostream>
main()
{
	Zestaw Pierwszy;
	Pierwszy.DodajKarte(Karta(krol,kier));
	Pierwszy.DodajKarte(Karta(3,trefl));
	Pierwszy.DodajKarte(Karta(as,kier));
	std::cout << "\nPierwszy:\n" << Pierwszy;
	
	Zestaw Drugi;
	Drugi.DodajKarte(Karta(dama, pik));
	Drugi.DodajKarte(5,karo);
	Drugi.DodajKarte(as,kier);
	Drugi.DodajKarte(walet,trefl);
	std::cout << "\nDrugi:\n" << Drugi;
	
	Zestaw Trzeci;
	std::cout << "\nTeraz sumuje zestaw Drugi i Pierwszy (Trzeci=Drugi+Pierwszy):\n";
	Trzeci=Drugi+Pierwszy;
	std::cout << "\nPo zsumowaniu Trzeci:\n" << Trzeci;
	
	Zestaw Czwarty;
	Czwarty.DodajKarte(10,trefl);
	Czwarty.DodajKarte(krol,pik);
	Czwarty.DodajKarte(5,karo);
	std::cout << "\nCzwarty:\n" << Czwarty;
	std::cout << "\nTeraz do zestawu Trzeciego dodaje Czwarty (Trzeci+=Czwarty)\n";
	Trzeci+=Czwarty;
	std::cout << "\nPo zsumowaniu Trzeci:\n" << Trzeci;
	
	std::cout << "Najstarsza z Trzeciego: " << Trzeci.ZwrocNajstarsza() << std::endl;
	std::cout << "Najmlodsza z Trzeciego: " << Trzeci.ZwrocNajmlodsza() << std::endl;
}
