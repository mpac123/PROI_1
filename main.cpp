#include "karta.h"
#include <iostream>
main()
{
	Karta pierwsza(krol, kier);
	Karta druga(3, trefl);
	if(druga==pierwsza)
		std::cout << "3 trefl wieksze od krol kier!" << std::endl;
	else
		std::cout <<"Krol kier nie rowne 3 trefl!" << std::endl;
}
