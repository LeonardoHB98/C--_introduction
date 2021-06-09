#include <iostream>
#include <locale.h>//setlocale
#include <stdlib.h>//system
#include <string>// Textos em gerral
#include <cstdlib>

using namespace std;

int main(void) {
	
	
	   int i=10,*p;
    p=&i;
    
    cout << *p << " " << i + *p<< " " << *p**p << " " << i+**&p;
    system("pause");
    
    
//	
//	int *ptr, *qtr, *r;      
//	
//	int a = 10, b = 20;  
//	 
//	ptr = &a;          
//	
//	qtr = &b;          
//	 
//	*ptr = *ptr + *qtr;   
//	
//	++(*qtr);         
//	
//	r = qtr;            
//	
//	qtr = ptr;   
//	
//	cout << *ptr<<*qtr<<*r<<a<<b;
//	
	
//	int deciframe(int v[ ], int tam, int e);
//
//	int v[10] = {0, 2, 4, 6, 8, 10, 20, 100};
//	int tam = 8;
//	int e = -6;
//	
//	cout << deciframe(v,tam,e);
	
//	bool busca(int vetor[ ], int n, int tam);
//	
//	int vetor[] = {1,2,3,4,5,6,7,8};
//	
//	 busca(vetor, 4, 7);
//
//	 busca(vetor, 2, 7);
//
//	 busca(vetor, 0, 7);
//	
//	
//		
	return 0;
}
//int deciframe(int v[ ], int tam, int e){
//	int i = 0, f = tam -1, m;
//	while ( i <= f ){
//	m = ( i + f ) / 2;
//	
//		if ( v[m] == e ) { 
//		return m; 
//		}
//		if ( e < v[m] ) { 
//		f = m - 1;
//		}else{
//			 i = m + 1;
//			 }
//	
//	return -1;
//}
//}

//bool busca(int vetor[ ], int n, int tam)
//{
//    int ini=0, mid;
//    while (ini <= tam)
//    {
//         cout << " x ";
//         mid = (ini + tam)/2;
//         if (vetor[mid] == n)
//             return true;
//         else if (n > vetor[mid])
//             ini = mid+1;
//         else
//             tam = mid-1;
//    }
//    return false;
//}
