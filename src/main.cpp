#include <iostream>

using namespace std; 

#include "biblioteca.hpp"
#include "midia.hpp"
#include "livro.hpp"
#include "cd.hpp"
#include "dvd.hpp"
#include "menu.hpp"


int main(){

	Biblioteca * x = new Biblioteca;
	menu(x);
	return 0;
}