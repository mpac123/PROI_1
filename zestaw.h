#ifndef _ZESTAW_H_
#define _ZESTAW_H_

#include <iostream>
#include <vector>
#include "karta.h"

class Zestaw
{
	public:
		~Zestaw(); //denstruktor

		Karta ZwrocNajstarsza();
		Karta ZwrocNajmlodsza();
		
		void DodajKarte(Karta);
		void DodajKarte(int,k);
		void DodajKarte(figura,k);
		
		Zestaw& operator=(const Zestaw&);
		Zestaw operator+(const Zestaw&);
		Zestaw& operator+=(const Zestaw&);
		Karta operator[](int);
		
	private:
		std::vector<Karta> Set;	
		bool operator==(const Zestaw&);
		
		
		
		
		
		friend std::ostream& operator<<(std::ostream &ekran, const Zestaw &z);
		//friend std::ostream& operator<<(std::ostream &ekran, const Karta &z);
		
		
	
};

#endif
