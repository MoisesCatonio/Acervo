#ifndef _dvd_
#define _dvd_

#include "midia.hpp"

class Dvd : public Midia {

	protected:
		string Titulo;
		string Diretor;
		int Duracao;
		int Classificacao;

	public:
		Dvd();
		Dvd(string diretor);
		string getTitulo();
		string getDiretor();
		int getDuracao();
		int getClassificacao();		

		void setTitulo(string titulo);
		void setDiretor(string diretor);
		void setDuracao(int duracao);
		void setClassificacao(int classificacao);		
};

#endif