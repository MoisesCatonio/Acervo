#ifndef _biblioteca_
#define _biblioteca_
#include "midia.hpp"
#include "livro.hpp"
#include "dvd.hpp"
#include "cd.hpp"

#include <vector>

class Biblioteca{

	private:
		vector<Midia *> Acervo;

	public:
		Biblioteca();
		void InserirMidia(Midia * obj);
		void RemoverMidia(string nome);
		void EditarMidia(string nome, int atrib);
		void VerAcervo();
		void VerEstatisticas(); 
};

#endif