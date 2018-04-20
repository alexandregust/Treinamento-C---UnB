#include <iostream>
using namespace std ; 

int main (){
	float nota, media, soma;
	int n;
	
	cout << "Notas dos alunos (-1 para parar) "<< endl;
	
	for (n = 0; nota != -1 ; n++) {
		
		cout << "Nota : ";
		cin >> nota;
		
		soma = soma + nota;}
	
	media = (soma + 1) / (n - 1) ;
	
	cout << "Media dos alunos : " << media; 
	
	return 0;
}
