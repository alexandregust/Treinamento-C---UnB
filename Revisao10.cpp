#include <iostream>
#include <cmath>
using namespace std;

int main() { // Calcular o modulo de um vetor
	int n, i; 
	float aux = 0, aux2, aux3 = 0 ;
	float x[n];
	
	cout << "Qual a dimensao dos vetores?"<< endl;
	cin >> n;
	aux3 = n - 1;
	for(i = 0; i <= aux3; i++){
		aux2 = i + 1;
		cout<< " Coordenada "<<aux2<< " : "<< endl;
		cin>> x[i];
	}
	
	for(i = 0; i<= n; i++){
		aux2 = x[i];
		aux3 = pow(aux2,2);
		aux = aux + aux3;
	}
	
	aux2 = sqrt(aux);
	
	cout<< "  O modulo eh de  "<< aux2;
	
	

	return 0;
}
