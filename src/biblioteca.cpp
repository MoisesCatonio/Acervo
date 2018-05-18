#include "biblioteca.hpp"

	Biblioteca::Biblioteca(){
		Livro * a = new Livro;
		Livro * b = new Livro("J.K Rowling");
		Cd * c = new Cd;
		Cd * d = new Cd("Rise Against");
		Dvd * e = new Dvd;
		Dvd * f = new Dvd("George Lucas");

		Acervo.push_back(a);
		Acervo.push_back(b);
		Acervo.push_back(c);
		Acervo.push_back(d);
		Acervo.push_back(e);
		Acervo.push_back(f);
	}

	void Biblioteca::InserirMidia(Midia * obj){
		int count = 0;

		for(int i = 0; i < (int) Acervo.size(); i++){
			
			if(obj->getTipo() == 'l'){
				Livro * generico = (Livro *)(obj);
				Livro * generico2 = (Livro *)(Acervo[i]);

				if(generico->getTitulo() == generico2->getTitulo()){
					count = count + 1;
				}
			
			}
			
			if(obj->getTipo() == 'c'){
				
				Cd * generico3 = (Cd *)(obj);
				Cd * generico4 = (Cd *)(Acervo[i]);

				if(generico3->getNome() == generico4->getNome()){
					count = count + 1;
				}
			
			}
			
			if(obj->getTipo() == 'd'){
			
				Dvd * generico5 = (Dvd *)(obj);
				Dvd * generico6 = (Dvd *)(Acervo[i]);
				
				if(generico5->getTitulo() == generico6->getTitulo()){
					count = count + 1;
				}
			}

		}
		if(count == 0){

			Acervo.push_back(obj);
			
		}
	}

	void Biblioteca::RemoverMidia(string nome){
		
		for(int i = 0; i < (int) Acervo.size(); i++){
			
			if(Acervo[i]->getTipo() == 'l'){
				Livro * generico = (Livro *)(Acervo[i]);

				if(nome == generico->getTitulo()){
					Acervo.erase(Acervo.begin()+i);
				}
			
			}
			
			if(Acervo[i]->getTipo() == 'c'){
				
				Cd * generico2 = (Cd *)(Acervo[i]);

				if(nome == generico2->getNome()){
					Acervo.erase(Acervo.begin()+i);
				}
			
			}
			
			if(Acervo[i]->getTipo() == 'd'){
			
				Dvd * generico3 = (Dvd *)(Acervo[i]);
				
				if(nome == generico3->getTitulo()){
					Acervo.erase(Acervo.begin()+i);
				}
			}

		}
		
	}
	
	void Biblioteca::EditarMidia(string nome, int atrib){
		string x = "";
		int y = 0;
		double z = 0;


		for(int i = 0; i < (int) Acervo.size(); i++){
			
			if(Acervo[i]->getTipo() == 'l'){
				Livro * generico = (Livro *)(Acervo[i]);

				if(nome == generico->getTitulo()){
					if(atrib == 1){
						cout << "Digite o novo Titulo:";
						getline (cin, x);
						generico->setTitulo(x);
					}
					if(atrib == 2){
						cout << "Digite o novo Autor:";
						getline (cin, x);
						generico->setAutor(x);
					}
					if(atrib == 3){
						cout << "Digite a nova Editora:";
						getline (cin, x);
						generico->setEditora(x);
					}
					if(atrib == 4){
						cout << "Digite o novo ISBN:";
						cin>>z;
						getchar();
						generico->setISBN(z);
					}
					if(atrib == 5){
						cout << "Digite o novo Ano de lançamento:";
						cin>>y;
						getchar();
						generico->setAno_l(y);
					}	
				}
			
			}
			
			if(Acervo[i]->getTipo() == 'c'){
				
				Cd * generico2 = (Cd *)(Acervo[i]);

				if(nome == generico2->getNome()){
					if(atrib == 1){
						cout << "Digite o novo Nome:";
						getline (cin, x);
						generico2->setNome(x);
					}
					if(atrib == 2){
						cout << "Digite o novo Compositor:";
						getline (cin, x);
						generico2->setCompositor(x);
					}
					if(atrib == 3){
						cout << "Digite a nova Quantidade de faixas:";
						cin>>y;
						getchar();
						generico2->setQtd_f(y);
					}
					if(atrib == 4){
						cout << "Digite a nova Gravadora:";
						getline(cin,x);
						generico2->setGravadora(x);
					}
					if(atrib == 5){
						cout << "Digite o novo Ano de lançamento:";
						cin>>y;
						getchar();
						generico2->setAno_l(y);
					}
				}
			
			}
			
			if(Acervo[i]->getTipo() == 'd'){
			
				Dvd * generico3 = (Dvd *)(Acervo[i]);
				
				if(nome == generico3->getTitulo()){
					if(atrib == 1){
						cout << "Digite o novo Titulo:";
						getline (cin, x);
						generico3->setTitulo(x);
					}
					if(atrib == 2){
						cout << "Digite o novo Diretor:";
						getline (cin, x);
						generico3->setDiretor(x);
					}
					if(atrib == 3){
						cout << "Digite a nova Duração:";
						cin>>y;
						getchar();
						generico3->setDuracao(y);
					}
					if(atrib == 4){
						cout << "Digite a nova Classificação:";
						cin>>y;
						getchar();
						generico3->setClassificacao(y);
					}
					if(atrib == 5){
						cout << "Digite o novo Ano de lançamento:";
						cin>>y;
						getchar();
						generico3->setAno_l(y);
					}
				}
			}

		}
	}
	
	void Biblioteca::VerAcervo(){
		for(int i = 0; i < (int) Acervo.size(); i++){
			cout << "Item " << i + 1 << ": ";
			
			if(Acervo[i]->getTipo() == 'l'){
				Livro * generico = (Livro *)(Acervo[i]);

				cout << generico->getTitulo() <<endl; 
			
			}
			
			if(Acervo[i]->getTipo() == 'c'){
				
				Cd * generico2 = (Cd *)(Acervo[i]);

				cout << generico2->getNome()<<endl;
			
			}
			
			if(Acervo[i]->getTipo() == 'd'){
			
				Dvd * generico3 = (Dvd *)(Acervo[i]);
				
				cout << generico3->getTitulo()<<endl;
			}

		}
	}
	
	void Biblioteca::VerEstatisticas(){
		
		int count_l = 0, count_c = 0, count_d = 0;
		
		int count_g = (int) Acervo.size();

		for (int i = 0; i < count_g; i++){
			Midia * item = Acervo[i];  
			char tipo = item->getTipo();

			if(tipo == 'l'){
				count_l = count_l + 1;
			}
				
			if(tipo == 'c'){
				count_c = count_c + 1;
			}	
			
			if(tipo == 'd'){
				count_d = count_d + 1;
			}
		}

		cout << "A quantidade total de Mídias no acervo é: " << count_g << "." << endl;
		cout << "A quantidade total de Livros no acervo é: " << count_l << "." << endl;
		cout << "A quantidade total de Cds no acervo é: " << count_c << "." << endl;
		cout << "A quantidade total de DVDs no acervo é: " << count_d << "." << endl;
	}