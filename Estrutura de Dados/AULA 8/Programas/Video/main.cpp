#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <cstdlib>

using namespace std;
//////////////// LISTA ENCADEADA
//No ou nodo

struct nodo{
	int info;
	nodo *prox;
	
};

nodo *insereFrente(nodo *ptr, int valor);
nodo *insereFim(nodo *ptr, int valor);

void exibe(nodo *ptr);
nodo *removeFrente(nodo *ptr);
nodo *removeFim(nodo *ptr);

void substituiNo(nodo *ptr, int posicao, int noValor);
int buscaSequencial(nodo *ptr, int valor);
int contaNos(nodo *ptr);

void libera(nodo *ptr);

int main(void) {
	
	setlocale(LC_ALL, "Portugues");
	
	int c,op,valor,pos,nvalor,resp;
	
	nodo *lista = NULL;
	
	do{
		system("cls");
		system("color 1f");
		
		cout << " <<Alocacao Dinamica << \n\n";
		cout << "1 - insere na frente da lista\n";
		cout <<"2 - Insere no dim da lista\n";
		cout <<"3 - Remove na frente da lista\n";
		cout <<"4 - remove no fim da lista\n";
		cout <<"5 - exibe lista\n";
		cout <<"6 - substitui no na lista\n";
		cout <<"7 - conta nos da lista\n";
		cout <<"8 - busca na lista\n";
		cout <<"9 - libera na lista\n";
		cout <<"10 sai";
		
		cout <<"\n\nOpcao: ";
		cin >> op;
		
		system("cls");
		system("color 1f");
		
		switch(op){
			case 1:
				cout << "\n Inserir na frente:";
				cin >> valor;
				lista = insereFrente(lista,valor);
				break;
			case 2:
				cout <<"\n INserir no final: ";
				cin >> valor;
				lista = insereFim(lista,valor);
				break;
				
		}
	
	
	
	
	
}while

return 0;
}
