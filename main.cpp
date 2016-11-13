#include "karta.h"
#include "zestaw.h"
#include <iostream>
main()
{
	Zestaw Pierwszy;
	Pierwszy.DodajKarte(Karta(krol,kier));
	Pierwszy.DodajKarte(Karta(3,trefl));
	std::cout << Pierwszy;
	Pierwszy.DodajKarte(Karta(3,trefl));
	Pierwszy.DodajKarte(Karta(as,kier));
	std::cout << Pierwszy;
	
	if (Pierwszy.ZwrocNajstarsza()==Karta(as,kier))
		std::cout << "dziala\n";
		
	//std::cout << Karta(as,kier);
}
