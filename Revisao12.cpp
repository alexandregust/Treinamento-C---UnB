#include <iostream>

using namespace std;

int main() { // mostra o localdo  maior numero do vetor e do menor
	
	int n, y[100],i , aux2 = 0 , aux3 = 0;
	
	cout<< "Qual a dimensao? ";
	cin >> n; 

	for(i = 0; i < n; i++){
		cout << "Vetor "<< i<< " : ";
		cin >> y[i];
		if(y[i] > y[aux2])
			aux2 = i;	
		if(y[i] < y[aux3])
			aux3 = i;}


	cout<< " O valor maximo esta no vetor "<< aux2;
	cout<< " e O valor minimo esta no vetor "<< aux3;

	return 0;
}
