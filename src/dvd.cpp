#include "dvd.hpp" 

	Dvd::Dvd(){
		Tipo = 'd';
		Titulo = "As tranças do rei careca";
		Diretor = "João do Bafo";
		Duracao = 240;
		Classificacao = 10;
		Ano_l = 1999;
	}

	Dvd::Dvd(string diretor){
		Tipo = 'd';
		Titulo = "Star Wars";
		Diretor = diretor;
		Duracao = 240;
		Classificacao = 10;
		Ano_l = 1996;
	}

	string Dvd::getTitulo(){
		return Titulo;
	}
	
	string Dvd::getDiretor(){
		return Diretor;
	}
	
	int Dvd::getDuracao(){
		return Duracao;
	}
	
	int Dvd::getClassificacao(){
		return Classificacao;
	}		

	void Dvd::setTitulo(string titulo){
		this->Titulo = titulo;
	}
	
	void Dvd::setDiretor(string diretor){
		this->Diretor = diretor;
	}
	
	void Dvd::setDuracao(int duracao){
		this->Duracao = duracao;
	}
	
	void Dvd::setClassificacao(int classificacao){
		this->Classificacao = classificacao;
	}