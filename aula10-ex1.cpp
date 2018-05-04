#include <iostream>
using namespace std;

int main (){
	
		float poli1[26], poli2[26],aux = 0;
		int grau, i;
		
		cout << "Digite um grau: "<< endl;
	 	cin >> grau;
	 	cout << "Digite os coeficientes do primeiro polinomio" << endl;
		
		for(i = grau; i >= 0; --i){
	 		cout << "x^" << i << ": "; 
	 		cin >> poli1[i];}
	 	
		 cout << "Digite os coeficientes segundo polinomio" << endl;	
	 		
	 	for(i = grau; i >= 0; --i){
	 		cout << "x^" << i << ": "; 
	 		cin >> poli2[i];}	
			
		 cout << "A soma dos polinomios : " << endl;	
		
		for(i = grau; i >= 0; --i){
			aux = poli1[i] + poli2[i];
				
			if(aux >= 0 && i >= 0 && i != grau)
				cout << " + ";
			
			if(aux < 0)
				cout << " "	;
				
			cout << aux << "x^" << i ;
			aux = 0;
		}
	
	return 0;
}
