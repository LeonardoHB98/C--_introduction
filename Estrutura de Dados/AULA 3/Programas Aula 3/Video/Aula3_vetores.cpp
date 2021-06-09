#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>   // Textos em geral

using namespace std;

struct Coordenadas{int x,y,z;};


void imprimirDadosA(Coordenadas a);
void imprimirDadosB(Coordenadas b);
void imprimirDadosC(Coordenadas c);


//int main (){
    setlocale (LC_ALL,"Portuguese");
    
    // declarando as estruturas
    
    Coordenadas pontoA;
    Coordenadas pontoB;
    Coordenadas pontoC;

	/*
	pontoA.x = 10;
    pontoA.y = 20;
    pontoA.z = 30;
	*/
	
    // entrada de dados
    
	    // PONTO A
	    	cout <<"digite o valor x do ponto A: ";
	    	cin >> pontoA.x;
	        
			cout <<"digite o valor y do ponto A: ";
	    	cin >> pontoA.y;
	    
	    	cout <<"digite o valor z do ponto A: ";
	    	cin >> pontoA.z;
	    	cout << endl;
	    	
	    // PONTO B
	    
			cout <<"digite o valor x do ponto B: ";
	    	cin >> pontoB.x;
	    
			cout <<"digite o valor y do ponto B: ";
	    	cin >> pontoB.y;
	    
	    	cout <<"digite o valor z do ponto B: ";
	    	cin >> pontoB.z;
	    	cout << endl;
	    
	    // PONTO C
	    
			cout <<"digite o valor x do ponto C: ";
			cin >> pontoC.x;
	    
	    	cout <<"digite o valor y do ponto C: ";
	    	cin >> pontoC.y;
	    
	    	cout <<"digite o valor z do ponto C: ";
	    	cin >> pontoC.z;
	    	cout << endl;
    
    // DECLARANDO  FUNCOES
    
    imprimirDadosA(pontoA);
    imprimirDadosB(pontoB);
    imprimirDadosC(pontoC);
    
    system("pause");
    return 0;
}

void imprimirDadosA(Coordenadas a){
	
	cout<< endl;
	cout<< "ponto A - x: "<<a.x <<endl;
    cout<< "ponto A - y: "<<a.y <<endl;
    cout<< "ponto A - z: "<<a.z <<endl<<endl;
    
}
void imprimirDadosB(Coordenadas b){
	
	cout<< "ponto B - x: "<<b.x <<endl;
    cout<< "ponto B - y: "<<b.y <<endl;
    cout<< "ponto B - z: "<<b.z <<endl<<endl;
}

void imprimirDadosC(Coordenadas c){
	
	cout<< "ponto C - x: "<<c.x <<endl;
    cout<< "ponto C - y: "<<c.y <<endl;
    cout<< "ponto C - z: "<<c.z <<endl<<endl;
}

//
