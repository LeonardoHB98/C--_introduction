#include <iostream>
#include <locale.h> //setlocale
#include <stdlib.h> // system
#include <string> // Textos em geral

using namespace std;

void insere(int codigo[],int& t, int tamanho);
void exibe(int codigo[], int t);
void elemento(int codigo[],int t);

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	int codigoProduto[5];
	int tam,op;
	
	//inicializacao
	
		tam = 0;
	
		do
		{
			//mostra a opcao
			system("cls");
			cout << "\nMenu - Lista\n";
			cout <<"\n0 - Reiniciar a lista";
			cout <<"\n1 - inserir codigo do produto na lista";
			cout <<"\n2 - Exibir a lista";
			cout <<"\n3 - Exibir o tamanho da lista";
			cout <<"\n4 - Exibir um elemento da lista";
			cout <<"\n5 - Sair";
			
			// obtem a opcao
			
			cout << "\n\nDigite a opcao: \t";
			cin >> op;
		
			system("cls");
		
			// Executa a acao escolhida
			switch(op){
				case 0: // reinicializacao
					tam = 0;
					break;
				case 1:
					insere(codigoProduto,tam,5);
					break;
				case 2:
					exibe(codigoProduto,tam);
					break;
				case 3:
					cout<< "\nTamanho da Lista: "<< tam;
					break;
				case 4:
					elemento(codigoProduto,tam);
					break;
				case 5:
					cout << "\nFinalizando o programa da lista.\n";
					break;
				default:
					cout <<"Opcao invalida. \n";
			}
			cout << "\n\n";
			system("pause");
		}
		while (op !=5);
	
	return 0;
}
void insere(int codigo[],int& t, int tamanho){
	int prod;
	
	//verifica se a lista esta cehia
	if(tamanho ==t){
		cout << "\nAtencao! \nLista cheia\n";
	}else{
		cout << "\nDigite o codigo do produto a ser inserido: ";
		cin >> prod;
		
		codigo[t]=prod;
		
		t++;
	}
}
void exibe(int codigo[],int t){
	int x;
	
	// Verifica se tem algum elemento na lista
	if (t==0){
		cout << "\nAtencao! \nLista vazia\n";
	}else{
		cout << "Relacao dos codigos\n";
		
		for (x=0;x<t;x++){
			cout << "\n" << codigo[x];
		}
	}
}
void elemento(int codigo[], int t){
	
	int prod,posicao;
	if(t==0){
		cout << "\nAtencao! \nLista vazia\n";
	}else{
		cout << "\nqual a posicao que deseja?";
		cin>> posicao;
		posicao --;
		if (posicao >= t){
			cout << "\n atencao! \n nenhum codigo armazenado ou posicao inexistente\n";
		}else{
			cout << "\n Codigo: " << codigo[posicao] << "\n";
		}
	}
}

