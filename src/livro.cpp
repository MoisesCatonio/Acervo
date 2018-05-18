#include "livro.hpp"

	Livro::Livro(){
		Tipo = 'l';
		Titulo = "1001 noites de cansaço";
		Autor = "Eu mesmo";
		Editora = "Mundo do Código";
		ISBN = 1234567890123;
		Ano_l = 1999;
	}

	Livro::Livro(string autor){
		Tipo = 'l';
		Titulo = "Harry Potter";
		Autor = autor;
		Editora = "Intrinseca";
		ISBN = 1234567890987;
		Ano_l = 2011;	
	}

	string Livro::getTitulo(){
		return Titulo;
	}

	string Livro::getAutor(){
		return Autor;
	}
	
	string Livro::getEditora(){
		return Editora;
	}
	
	double Livro::getISBN(){
		return ISBN;
	}		

	void Livro::setTitulo(string titulo){
		this->Titulo = titulo;
	}
	
	void Livro::setAutor(string autor){
		this->Autor = autor;
	}
	
	void Livro::setEditora(string editora){
		this->Editora = editora;
	}
	
	void Livro::setISBN(int isbn){
		this->ISBN = isbn;
	}