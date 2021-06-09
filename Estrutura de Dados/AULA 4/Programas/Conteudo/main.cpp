#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string> 

using namespace std;
void bolha(int vet[],int tam);

int main() {
	int x,vet[]={13,23,3,8,1};
	system("cls");
	cout << "\nAntes da chamada da funcao - bolha\n\t";
		for(x=0;x<5; x++){
			cout <<vet[x]<<"\t"; // imprimindo o vetor
		}
		cout << "\n";
	bolha(vet,5);
	
	cout<<"\n\nDepois da chamada da funcao - bolha\n\t";
		for(x=0;x<5;x++){
			cout<<vet[x]<< "\t";
			}
		cout << "\n";	
	
	system ("pause");
	return 0;
}

void bolha(int vet[],int tam){
		
		int j,i, aux, a;
		for (i=0;i<tam - 1; i++){
				
			// ciclo que imprime a funcao antes do processo
			cout <<"\ni="<<i<<"\nAntes\t";
				for(a=0;a<5;a++){
					cout<<vet[a]<<"\t";}
			// ciclo da funcao que vai ate a ultima posicao
			for(j=tam-1;j>i;j--){
				if(vet[j]<vet[j-1]){
					
					aux = vet[j];
					vet[j] = vet[j-1];
					vet[j-1]=aux;
				}
			}		
			//ciclo que imprime depois do processo
			cout <<"\ni="<<i<<"\nDepois\t";
				for(a=0;a<5;a++){
					cout<<vet[a]<<"\t";}		
	}
}
		
	

