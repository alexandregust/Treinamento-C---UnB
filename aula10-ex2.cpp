#include <iostream>
#include <string>
using namespace std;

int main (){
	
	string frase;
	int letras, i, iguais = 0;
	char igual;
	
	cout <<"Digite o texto : " <<endl; 
	
	getline(cin, frase);
	letras = frase.size();
	
	cout << "Qual a letra que vc quer saber ? " << endl;
	cin >> igual;
	
	for(i = 0; i<= letras; i++){
		
		if(frase[i] == igual)
			iguais++;}
			
	cout << "A letra aparece "	<< iguais << " vezes.";
		
	
		
		
			
		
	return 0;
}
