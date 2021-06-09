#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>   // Textos em geral

using namespace std;

void menu();
int ciclo();
int a;

//int main(){
	
	cout<< "Digite quantas vezes deseja que o programa se repita: \n";
	cin>> a;
	ciclo();
	
	
return 0;
}

int ciclo(){
	for (int i=0;i < a; i++){
		menu();
	}
}
void menu(){
	
	int i;
		cout<<"\nMenu\n";
  		cout<<"\n1-Pilha";
  		cout<<"\n2-Fila";
  		cout<<"\n3-Lista";  
  		cout<<"\n4-Arvore";
  		cout<<"\n5-Grafo";  
  		cout<<"\n6-Sair";
  		cout<<"\nOpcao: ";
  		cin>>i;    
	
}


/*
void imprimir();
int u;

int main (){
	
    setlocale (LC_ALL,"Portuguese");
    void imprimir();

    int Coordenadas [3];
    int i;
    
    for( int i; i < 3; ++i){
    	cout << "Digite o " <<i+1<< "  numero do vetor" << endl;
    	cin >> Coordenadas[i];
    }
    u = Coordenadas[0];
    
	imprimir();
}

	
	
void imprimir(){
	
	cout << "As coordenadas sao " << u;

}
*/


