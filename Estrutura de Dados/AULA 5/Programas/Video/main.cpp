#include <iostream>
#include <locale.h> //setlocale
#include <stdlib.h> // system
#include <string> // Textos em geral

using namespace std;

void insere(int matric[],int m, int& t, int tamanho);
void exibe(int matric[],int t);
int buscaSequencial(int matric[], int m, int t);
void remove(int matric[], int m, int& t);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int tam, matricula[5], mat, posicao, op;
	
	//inicializacao
	tam = 0;
		
		do
		{
			//mostra a opcao
			system("cls");
			cout << "\nMenu - Lista\n";
			cout <<"\n0 - Reiniciar a lista";
			cout <<"\n1 - inserir matricula na lista";
			cout <<"\n2 - Exibir a lista";
			cout <<"\n3 - Procurar matricula na lista";
			cout <<"\n4 - Remover matricula da lista";
			cout <<"\n5 - Sair";
			
			// obtem a opcao
			
			cout << "\n\nDigite a opcao: \t";
			cin >> op;
		
			system("cls");
			switch(op){
				
				case 0: // reinicializacao
					tam = 0;
					break;
				case 1:
					cout << "\n Digite a matricula a ser inserida ";
					cin >> mat;
					insere(matricula,mat,tam,5);
					break;
				case 2:
					exibe(matricula,tam);
					break;
				case 3:
					cout<< "\nQual matricula a ser procurada? ";
					cin >> mat;
						posicao = buscaSequencial(matricula,mat,tam);
							if(posicao == -1){
								cout << "\nAtencao!Lista vazia";
							}else if (posicao == -1){
								cout << "\nAtencao! Matricula nao encontrada\n";
							}else{
								cout << "\nMatricula encontrada na posicao: " << posicao +1 << "\n";
							}
					break;
				case 4:
					cout << "\nQual matricula a ser removida?";
					cin >> mat;
						remove(matricula,mat,tam);
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
		
}

void insere(int matric[],int m, int& t,int tamanho){
	
	if(tamanho== t){
		cout << "\nAtencao! \nLista cheia\n";
	}else{
		matric[t]=m;
		t++;
	}
}

void exibe(int matric[],int t){
	int x;
	if(t==0){
		cout << "\n atencao! \nLista vazia\n";
	}else{
		cout<< "\nRelacao das Matriculas\n";
		for(x=0; x<t;x++){
			cout << "\n"<< matric[x];
		}
	}
}

int buscaSequencial(int matric[],int m,int t){
	int x;
		if (t==0){
			return -1; //testa lista vazia
		}
		for(x=0;x<t;x++){
			if(matric[x]==m){
				return x; // retorna o deslocamento do endereco base
			}
		}
	return -2; // percorre toda a lista e nao acha
}

void remove(int matric[],int m, int& t){
	int pos,x;
	pos = buscaSequencial(matric,m,t);
	
	if(pos==-1){// testando se a lista esta vazia
		cout << "\nAtencao \n Lista vazia\n";
	}else if(pos == -2){
		cout << "\nAtencao! \n matricula nao encontrada";
	}else{
		// desloca todos os elementos da lista, SE NECESSARIO, deixando vazios no final
		for(x=pos;x<t-1;x++){
			matric[x]=matric[x+1];
			}
		t--; //Atualiza o tamanho da lista
		cout << "\nMatricula Removida\n";
	}
}

*/


