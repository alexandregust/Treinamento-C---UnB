#include <iostream>

using namespace std;

int main (){ // Programa que ordena 3 numeros em forma crescente

	int a , b, c, aux;
	
	cin >> a >> b >> c;
	
	if(a > c){
		aux = a;
		a = c;
		c = aux;
	}

	if(a > b){
		aux = a;
		a = b;
		b = aux;
	}
	
	if(b > c){
		aux = b;
		b = c;
		c = aux;
	}
		
	cout << " A ordem crescente eh " << a << ", "<< b << ", "<< c; 
	
	return 0;
}
