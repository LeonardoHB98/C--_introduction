#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string>   // Textos em geral

using namespace std;

void selectionSort(int vet[], int tam);
void imprimirVetor(int vet[], int tam);

int main (){
    setlocale (LC_ALL,"Portuguese");
    void selectionSort(int vet[], int tam);
	
	void imprimirVetor(int vet[], int tam);


    int vetor[5]= {13,23,3,8,1};
    int i;
    
    
	//antes da troca
    
    imprimirVetor(vetor,5);
    cout << "\n\n";
    ///////////////////////
    
    // selection Sort //
    
    selectionSort(vetor,5);
    cout << "\n\n";
    
    ///////////////////////
    
    // apos troca
    
    imprimirVetor(vetor,5);
    cout << "\n\n";
    
    
    system("pause");
    return 0;
}
void selectionSort(int vet[], int tam){
	
	int indexMin,i,j;
	
	// Percorrer todos os numeros
	for(i=0; i < tam - 1; i++){
		
		// Define o elemento atual como o menor
		indexMin = i;
		
		// Encontra o menor valor apos o "i + 1 "
		for (j= i+1; j < tam; j++){
			if (vet[j] < vet[indexMin]){
				indexMin = j;
				
			}
		}
	cout << " Troca: " << vet[i] << " <= " <<vet[indexMin] << endl;
	
	if(indexMin != i){
		
		// troca os numeros
		int temp = vet[indexMin];
		vet[indexMin] =  vet[i];
		vet[i] = temp;
	}
	
	}
}

void imprimirVetor(int vet[],int tam){
	
	int i;
	cout << vet[0];
	
	// apos a troca
	
	for (i = 1; i <5 ; i++){
		cout << ", " << vet[i] ;
		
	}
	cout << endl;
}
