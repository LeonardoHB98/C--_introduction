#include <iostream>
using namespace std;
int descobreIdade(int anoAtual, int anoNascimento);
int main(){
	int anoA , anoN;
	cout<<"\nDigite ano atual: ";
	cin>>anoA;
	cout<< "\nDigite ano de nascimento: ";
	cin>>anoN;
	cout<< "\nvoce tera ate 31 de dezembro de "<<anoA<<" "<<descobreIdade(anoA, anoN)<< "anos";
	cout<<"\n\n";
	system ("pause");
	return 0;
	
}
int descobreIdade(int anoA,int anoN){
	return anoA - anoN;
}
