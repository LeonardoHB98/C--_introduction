#include <iostream>
using namespace std;

float areaRetangulo(float base, float altura);
int main(){
	float b, a;
	cout<< "escreva a base do retangulo\n";
	cin>>b;
	cout<<"escreva a altura do retangulo\n";
	cin>>a;
	cout<<"\na area desse retangulo eh de " <<areaRetangulo(b,a)<<" m2\n";
	system("pause");
	return 0;
	
}
float areaRetangulo(float b, float a){
	return b*a;
}
