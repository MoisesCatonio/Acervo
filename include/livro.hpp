#ifndef _livro_
#define _livro_

#include "midia.hpp"

class Livro : public Midia {

	protected:
		string Titulo;
		string Autor;
		string Editora;
		double ISBN;

	public:
		Livro();
		Livro(string autor);
		string getTitulo();
		string getAutor();
		string getEditora();
		double getISBN();		

		void setTitulo(string titulo);
		void setAutor(string autor);
		void setEditora(string editora);
		void setISBN(int isbn);
};

#endif