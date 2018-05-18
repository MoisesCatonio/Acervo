#include "menu.hpp"
#include <cstdio>

void op1(Biblioteca * x){
	
	int op;

	int ro, thau, fi;

	string alpha, betha, gama;

	double theta;

	cout << "Que tipo de Mídia deseja adicionar? 1 - Livro, 2 - Cd, 3 - Dvd: ";
	cin>>op;
	getchar();

	if(op == 1){
		Livro * a = new Livro;
		a->setTipo('l');

		cout << "Informe o Título: ";
		getline(cin, alpha);
		cout << endl;
		cout << "Autor: ";
		getline(cin,betha);
		cout << endl;
		cout<< "Editora: ";
		getline(cin,gama); 
		cout<<"ISBN do livro: ";
		cin>>theta;
		getchar();
		cout<<endl;
		cout<<"Ano de lançamento: ";
		cin>>ro;
		getchar();
		cout<<endl;

		a->setTitulo(alpha);
		a->setAutor(betha);
		a->setEditora(gama);
		a->setISBN(theta);
		a->setAno_l(ro);
		x->InserirMidia(a);
		delete a;
	}

	if(op == 2){
		Cd * b = new Cd;
		b->setTipo('c');

		cout << "Informe o Nome: ";
		getline(cin,alpha);
		cout << endl;
		cout << "Compositor: ";
		getline(cin,betha);
		cout << endl;
		cout<< "Quantidade de faixas: ";
		cin>>ro;
		getchar(); 
		cout<<"Gravadora: ";
		getline(cin,gama);
		cout<<"Ano de lançamento: ";
		cin>>thau;
		getchar();
		cout<<endl;

		b->setNome(alpha);
		b->setCompositor(betha);
		b->setQtd_f(ro);
		b->setGravadora(gama);
		b->setAno_l(thau);
		x->InserirMidia(b);
		delete b;
	}

	if(op == 3){
		Dvd * c = new Dvd;
		c->setTipo('d');

		cout << "Informe o Titulo: ";
		getline(cin,alpha);
		cout << endl;
		cout << "Diretor: ";
		getline(cin,betha);
		cout << endl;
		cout<< "Duracao: ";
		cin>>ro; 
		getchar();
		cout<<"Classificacao: ";
		cin>>thau;
		getchar();
		cout<<"Ano de lançamento: ";
		cin>>fi;
		getchar();
		cout<<endl;

		c->setTitulo(alpha);
		c->setDiretor(betha);
		c->setDuracao(ro);
		c->setClassificacao(thau);
		c->setAno_l(fi);
		x->InserirMidia(c);
		delete c;
	}
}

void op2(Biblioteca * x){
	string nome = "";
	cout << "Diga o nome ou o título da obra a ser apagada (Veja o nome correto na lista!):";
	getline(cin,nome);
	x->RemoverMidia(nome);
}

void op3(Biblioteca * x){
	int op = 0, op2 = 0;
	string nome = "";
	cout << "Que tipo de Mídia deseja modificar? 1 - Livro, 2 - Cd, 3 - Dvd: ";
	cin>>op;
	getchar();

	if(op == 1){
		cout << "Digite o Título da obra:";
		getline(cin,nome);
		cout << endl;
		cout <<"Digite o atributo a ser alterado: 1 - Título, 2 - Autor, 3 - Editora, 4 - ISBN, 5 - Ano de Lançamento";
		cin >> op2;
		getchar();
	}

	if(op == 2){
	 	cout << "Digite o Nome do Cd:";
		getline(cin,nome);
		cout << endl;
		cout <<"Digite o atributo a ser alterado: 1 - Nome, 2 - Compositor, 3 - Quantidade de faixas, 4 - Gravadora, 5 - Ano de Lançamento";
		cin >> op2;
		getchar();
	}

	if(op == 3){
		cout << "Digite o Título do Dvd:";
		getline(cin,nome);
		cout << endl;
		cout <<"Digite o atributo a ser alterado: 1 - Título, 2 - Diretor, 3 - Duração, 4 - Classificação, 5 - Ano de Lançamento";
		cin >> op2;
		getchar();
	}	
	x->EditarMidia(nome,op2);
}

void op4(Biblioteca * x){
	x->VerAcervo();
}

void op5(Biblioteca * x){
	x->VerEstatisticas();
}

void menu(Biblioteca * x){
	int op = 0;
	
	cout<<"Selecione uma opção: "<<endl;
	cout<<"1 - Adicionar Mídia."<<endl;
	cout<<"2 - Remover Mídia."<<endl;
	cout<<"3 - Editar Mídia."<<endl;
	cout<<"4 - Ver acervo."<<endl;
	cout<<"5 - Ver estatísticas."<<endl;
	cout<<"0 - Sair do programa."<<endl;

	cout<<"Escolha: ";
	cin>>op;
	getchar();
	while(op != 0){

		switch(op){
			case 1:
				op1(x);
				op = 0;
				break;
			case 2:
				op2(x);
				op = 0;
				break;
			case 3:
				op3(x);
				op = 0;
				break;
			case 4:
				op4(x);
				op = 0;
				break;
			case 5:
				op5(x);
				op = 0;
				break;
			case 0:
				op = 0;
				break;
			}
		cout<<"Deseja realizar outra operação? 1 = sim, 2 = não: ";
		cin>>op;
		getchar();

		if (op == 1)
		{
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			menu(x);
		} else {
			op = 0;
		}
	}

		
}