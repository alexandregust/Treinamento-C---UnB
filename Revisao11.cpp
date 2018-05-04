#include <iostream>

using namespace std;

int main() { // mostra a quantidade de elementos pares no vetor
	
	int n, x[100],i , aux = 0;
	
	cout<< "Qual a dimensao? ";cin >> n; 
	
	for(i = 0; i < n; i++){
		
		cout<< " Vetor "<< i + 1 << " : "; cin >> x[i];
		if(x[i] % 2 == 0)
			aux++;
	}
	
	
	
	cout << " Possui " << aux << " pares no vetor";
	
	
	return 0;
}
