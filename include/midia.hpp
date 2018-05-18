#ifndef _midia_
#define _midia_

#include <iostream>

using namespace std;

#include <string>

class Midia
{

	protected:
		char Tipo;
		int Ano_l;

	public:
		char getTipo();
		int getAno_l();
		void setTipo(char tipo);
		void setAno_l(int ano_l);
};

#endif