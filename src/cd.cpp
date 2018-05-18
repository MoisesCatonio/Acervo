#include "cd.hpp"

	Cd::Cd(){
		Tipo = 'c';
		Nome = "Pagode do suvaco";
		Compositor = "Tá roxeda do cavaco";
		Qtd_f = 20;
		Gravadora = "Sony Music";
		Ano_l = 1999;
	}

	Cd::Cd(string compositor){
		Tipo = 'c';
		Nome = "Wolves";
		Compositor = compositor;
		Qtd_f = 21;
		Gravadora = "Sony Music";
		Ano_l = 2010;	
	}

	string Cd::getNome(){
		return Nome;
	}

	string Cd::getCompositor(){
		return Compositor;
	}
	
	int Cd::getQtd_f(){
		return Qtd_f;
	}
	
	string Cd::getGravadora(){
		return Gravadora;
	}		

	void Cd::setNome(string nome){
		this->Nome = nome;
	}
	
	void Cd::setCompositor(string compositor){
		this->Compositor = compositor;
	}
	
	void Cd::setQtd_f(int qtd_f){
		this->Qtd_f = qtd_f;
	}
	
	void Cd::setGravadora(string gravadora){
		this->Gravadora = gravadora;
	}