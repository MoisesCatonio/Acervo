#include "midia.hpp"

char Midia::getTipo(){
	return Tipo;
}

int Midia::getAno_l(){
	return Ano_l;
}

void Midia::setTipo(char tipo){
	this->Tipo = tipo;
}

void Midia::setAno_l(int ano_l){
	this->Ano_l = ano_l;
}