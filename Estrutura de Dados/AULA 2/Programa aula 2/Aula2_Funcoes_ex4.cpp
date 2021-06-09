#include <iostream>
using namespace std;
void troca(float&,float&);
int main(){
	float n1,n2;
	cout<<"\nDigite o primeiro numero: ";
	cin>>n1;
	cout<<"\nDiigite o segundo numero: ";
	cin>>n2;
	troca(n1,n2);
	cout<<"\nApos a troca : "<<n1<<"\t"<<n2;
	cout<<"\n\n";
	system("pause");
	return 0;
}
void troca(float& a,float& b){
	float aux;
	aux=a;
	a=b;
	b=aux;
}
