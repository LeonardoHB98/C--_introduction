#include <iostream>
using namespace std;
void linha(char c, int n);
int main (){
	cout << "\n		ESTACIO\n";
	linha('=', 20);
	cout<<"\n		Estruturas de Dados\n";
	linha('*', 20);
	cout<<"\n		Ensino a Distancia\n";
	linha('@',20);
	cout<<"\n\n";
	system ("pause");
	return 0;
}

void linha(char c, int n){
	for(int x=1; x<=n; x++)
	cout <<c;
}
