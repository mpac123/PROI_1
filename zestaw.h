#ifndef _ZESTAW_H_
#define _ZESTAW_H_

#include <iostream>
#include <vector>
#include "karta.h"

class Zestaw
{
	public:
		//Zestaw(); //konstruktor

		Karta ZwrocNajstarsza();
		Karta ZwrocNajmlodsza();
		void DodajKarte(Karta);
		Zestaw operator+(Zestaw);
		Zestaw operator+=(Zestaw);
		Zestaw& operator=(Zestaw&);
		
		friend std::ostream& operator<<(std::ostream &ekran, Zestaw &z);
		friend std::ostream& operator<<(std::ostream &ekran, Karta &z);
		
	//private:
		std::vector<Karta> Set;	
		//~Zestaw(); //destruktor
	
};

#endif
