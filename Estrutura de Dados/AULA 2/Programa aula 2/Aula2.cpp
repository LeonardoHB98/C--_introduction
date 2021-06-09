#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>   // Textos em geral

using namespace std;

void imprimirMsg();
float calculaImposto();
int soma(int vlr1, int vlr2);
void alteraDado(int& vlr1);

int main (){
    setlocale (LC_ALL,"Portuguese");
    
    //float resultado;
    
    //imprimirMsg();
    
    //resultado = calculaImposto();
    
    //cout << "Resultado Calculo: "<< resultado<< endl<<endl;
    
    int resultado;
    int v1,v2;
    v1 = 10;
    v2 = 20;
    
     
    resultado = soma(v1, v2);
    
    cout << "Resultado Calculo: " << resultado << endl << endl;
    
    /*int vlr1;
	
    vlr1= 20;
    
    alteraDado(vlr1);
    
    cout << "valor alterado:" << vlr1;*/
    
    system ("pause");
    return 0;
    
	
    
}

void imprimirMsg(){
	cout << "Alo Mundo!\n\n";
}

float calculaImposto(){
	float sal;
	float vlrImposto;
	
	
	sal= 2000;
	
	vlrImposto = sal * 0.1;
	
	return vlrImposto;
}

int soma(int vlr1, int vlr2){
	
	int total;
	total = vlr1 + vlr2;
	
	return total;
}
/*void alteraDado(int& vlr1){
	vlr1=100;
}*/
