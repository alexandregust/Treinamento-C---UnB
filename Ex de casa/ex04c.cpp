#include <iostream>

using namespace std;

int main () {
	
	int divisores = 0, n , i ;
	  
	while(n >= 0){  // Calcula se � primo ou n�o at� digitar numero negativo
		
		cin >> n;
		
	
		
			for(i = 1; n >= i; ++i) { // Faz a divis�o por todos os numeros menores ou igual ao digitado
			
				if(n % i == 0)
					divisores++;	} // Sempre que um n�mero � divisor, � somado +1 na variavel 
				
				
			if(n >= 0){ // Para n�o calcular o numero de saida
				
				if(divisores == 2 )   // Numeros Primos s� tem 2 divisores que tem resto  = 0
				cout << "primo" << endl;
			
				if(divisores != 2) // Numeros n�o primos
				cout << "nao primo"	<< endl;			
				}
					
			divisores = 0;	}  // Zera a variavel para o proximo n digitado

		// Os operadores de saida est�o dentro dooperador while para resposta ser ao digitar.
		
  return 0;
}
