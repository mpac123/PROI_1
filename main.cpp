#include "karta.h"
#include "zestaw.h"
#include <iostream>
main()
{
	Zestaw Pierwszy;
	Pierwszy.DodajKarte(Karta(krol,kier));
	Pierwszy.DodajKarte(Karta(3,trefl));
	Pierwszy.DodajKarte(Karta(as,kier));
	std::cout << "Pierwszy:\n " << Pierwszy;
	
	Zestaw Drugi;
	Drugi.DodajKarte(Karta(dama, pik));
	Drugi.DodajKarte(5,karo);
	Drugi.DodajKarte(as,kier);
	Drugi.DodajKarte(walet,trefl);
	std::cout << "Drugi:\n" << Drugi;
	
	Zestaw Trzeci;
	Trzeci=Drugi+Pierwszy;
	Zestaw Czwarty;
	Czwarty.DodajKarte(10,trefl);
	Czwarty.DodajKarte(krol,pik);
	Czwarty.DodajKarte(5,karo);
	Trzeci+=Czwarty;
	std::cout << "Trzeci:\n" << Trzeci;
	
	std::cout << "Najstarsza: " << Drugi.ZwrocNajstarsza() << std::endl;
	std::cout << "Najmlodsza: " << Drugi.ZwrocNajmlodsza() << std::endl;
}
