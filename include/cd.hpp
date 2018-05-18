#ifndef _cd_
#define _cd_

#include "midia.hpp"

class Cd : public Midia {

	protected:
		string Nome;
		string Compositor;
		int Qtd_f;
		string Gravadora;

	public:
		Cd();
		Cd(string compositor);
		string getNome();
		string getCompositor();
		int getQtd_f();
		string getGravadora();		

		void setNome(string nome);
		void setCompositor(string compositor);
		void setQtd_f(int qtd_f);
		void setGravadora(string gravadora);
};

#endif