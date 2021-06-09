#include <iostream>
#include <locale.h> //setlocale
#include <stdlib.h> // system
#include <string> // Textos em geral

#define TAM 5

using namespace std;

void empilha(int p[],int& t, int v);
int desempilha(int p[], int& t, int& v);
void acessoTopo(int p[], int& t);
void situacaoPilha(int p[],int& t);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	 
	int op,val,topo = -1, pilha[TAM],resp;
	
	do{
		system("cls");
		system("color f0");
		
		cout<< "\nPilha *lifo - last in first out)\n\n";
		cout << "\n1 - Pilha "
	}
	
	system("pause");
	return 0;
}
