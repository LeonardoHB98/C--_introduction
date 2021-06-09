#include <iostream>
#include <locale.h>//setlocale
#include <stdlib.h>//system
#include <string>// Textos em gerral
#include <cstdlib>


#define TAM 5

using namespace std;


//variavel global
struct queue{ 

	float f[TAM];
	int inicio,fim;
};

void enfileira(queue& fill);
void desenfileira(queue& fill);
void elemPrimeiro(queue& fill);
void situacaoFila(queue& fill);


int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	char resp[10]; int 	op;
	queue fila;
	
	//inicializa a fila
	
	fila.inicio=0;
	fila.fim = -1;
	
	
	do{
		system("cls");
		system("color 2f");
			
			cout << "\nFILA (FIRST IN FIRST OUT)\n\n";
			cout << "\n1 - Inserir uma valor na fila";
			cout << "\n2 - remover um valor da fila";
			cout << "\n3 - Mostrar o elemento do inicio";
			cout << "\n4 - Mostrar a situacao da fila";
			cout << "\n5 - Sai";
			
			cout << "\n\nOpcao: ";
			cin >> resp;
			
			op = atoi(resp);
			
			system("cls");
			
			
				switch (op){
					case 1 :
						enfileira(fila);
						break;
										 	
					case 2:
						desenfileira(fila)	;
						break;
					case 3:
						elemPrimeiro(fila);
						break;
						
					case 4:
						situacaoFila(fila);
						break;
						
					case 5:
						cout << "\nPrograma basico da Fila.\n";
						break;
						
					default:
						cout << "\nOpcao Invalida";
						
				}
		cout << "\n\n";
		system("pause");
	}while(op !=5);
	
	return 0;
}

void enfileira(queue& fil){
	
	float valor;
	if (fil.fim == TAM -1){//testando se a fila esta cheia
		cout << "\nAtencao - A fila esta cheia";
	}else{
		cout << "digite o valor a ser enfileirado: "	;
		cin >> valor;
		fil.fim++;
		fil.f[fil.fim] = valor;
		}
}

void desenfileira(queue& fil){
	if(fil.inicio > fil.fim){ // testando se a fila esta vazia
		cout << "\nAtencao a fila esta cheia\n";
		}else{
			cout<< "\Valor removido: " << fil.f[fil.inicio]; // exibe valor "removido" 0
			fil.inicio++; // Atualiza o inicio da fila
			}
}

void elemPrimeiro(queue& fil){
	
	if(fil.inicio > fil.fim){
		cout << "\nAtencao fila vazia";
		}else{
			cout << "\nElemento do inicio da fila: " << fil.f[fil.inicio];
		}
}

void situacaoFila(queue& fil){
	
	if(fil.inicio >fil.fim){
		cout << "\nATencao fila vazia\n";
		}else{
			cout << "\n\nTotal de elementos da fila:   \n" << fil.fim - fil.inicio +1 << "\n";
			cout << "\n\nEspaco disponivel na fila:   \n" << TAM - (fil.fim +1) << "\n";
			cout << "\n\nPosicao do primeiro elemento da fila:  \n" << fil.inicio << "\n";
			cout << "\n\nPosicao do ultimo elemento da fila:   \n" <<fil.fim << "\n";
		
			cout << "\nValor\tPosicao no vetor\n ";
			
			for(int x = fil.inicio; x <= fil.fim; x++){
				cout << "\n" << fil.f[x] << "\t" << x;
			}
		}
	}

