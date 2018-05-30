#include <iostream>
using namespace std;

/* Programa que da o numero da sequecia de Fibonnacci desejada
  	inicio na posição 0 sendo igual a 0 */
  	
int numerofib (int n); /* Programa que gera a sequecia de fibonnacci
							ate o numero escrito */

int main(){
	
    int fib ,n = 0; // N = 0 para evitar erro no laço do while
    
    while(n >= 0){ // Da a sequencia de fibonnacci ate digitar negativo
		
		cin >> n;
		if(n >= 0){ // Corrige erro de resposta ao numero encerrador, e outros possiveis erros
			fib = numerofib(n);
			cout << "F(" << n << ") = " << fib << endl; // Descreve no formato aceito no Susy
			
			}}
    
    return 0;
}
int numerofib (int n)
{
    int ultima=1,penultima=1,fib = 1,i; /* ultima refere a posição 3 de fib,
										   penultima refere a posição 2,
										   fib inicia em 1 já que 1 e segunda 
										   são fixas*/
	for(i=3;i <= n; i++){ //Laço de repetição para encontrar a posição desejada
		fib= ultima + penultima;
		penultima = ultima;
		ultima = fib;}
	
	if(n == 0) // Primera posição é fixa, assim como 2 e 3.
		fib = 0;
    
    return fib; // Retorna o valor da posiçao
}
