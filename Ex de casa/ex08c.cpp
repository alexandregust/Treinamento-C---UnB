#include <iostream>
#include <iomanip>

/*Programa que faz algumasoperações matematicas, retornando valores de 8 casas decimais*/

using namespace std;

double potencia(double a, int b); // retorna o valor de A elevado a B
double raiz_quadrada(double x); // retorna o valor da raiz quadrada de x
double pi(int n);// retorna o valor aproximado de Pi apos n iteracoes
double fatorial(int n); // retorna o valor do fatorial de n
double euler(int n); // retorna o valor aproximado do número de Euler apos n iteracoes

int main (){
	int tipo, inteiro; // inteiro serve para facilitar que o numero eh um tipo int
	double resultado, decimal; // decimal serve para facilitar que eh um numero double
	
	cin >> tipo; // Permite o usuario escolher qual operacao
	
	while(tipo != 5){ // tipo 5 para sair do programa
	
		switch(tipo){
			case 0: // caso queira potencia
				cin >> decimal >> inteiro;
				resultado = potencia(decimal,inteiro);
				break;
		
			case 1 : // caso queira tirar raiz quadrada de um numero a partir do metodo de newton
				cin >> decimal;
				resultado = raiz_quadrada(decimal);
				break;
		
			case 2 : // caso queria descobrir o valor de pi apartir de quantas repeticoes
				cin >> inteiro;
				resultado = pi(inteiro);
				break;
		
			case 3 : // caso queria descobrir o fatorial desse numero
				cin >> inteiro;
				resultado = fatorial(inteiro);
				break;
			
			case 4 : // caso queria descobrir o numero de euler a partir de quantas repetiçoes 
				cin >> inteiro;
				resultado = euler(inteiro);
				break;
			}
	
		cout << resultado << endl; // varivael comum aos resultados
		cin >> tipo; // mantem o laço de repeticao
		}


	return 0;}
	
double potencia(double a, int b){
	int i;
	double resultado = 1.0; // resultado igual a 1 já que eh o elemento neutro da multiplicacao
	
	if(b > 0){ // so aceita numero positivos
		for(i = 1; i <= b; i++)
			resultado = resultado * a;
	}
	cout << setprecision(8) << fixed; // criterio do Susy de 8 casas decimais
	return resultado;
	}

double raiz_quadrada(double x){
    double palpite = 1 ,media ,quociente , erro = 1.0; // palpite = 1, ja que a raiz quadrada nunca pode ser maior que o numero
	while(erro > 0.0001){ // criterio do susy para parar o laço de repeticao
   		quociente = x / palpite ;
		media = (quociente + palpite)/2.0; // metodo de newton
		erro = media - quociente;
		palpite = media;
		if(erro < 0) // modulariza a funcao
			erro = erro * -1.0;
		}
        
	cout << setprecision(8) << fixed; // criterio do Susy de 8 casas decimais
    return palpite; 
}

double pi(int n){
	int i;
	double resultado = 0.0; // para evitar erros 
	for(i = 0; i < n; i++){ // i<= a 0 já que o somatorio inicia em 1 e vai ate o numero digitado pelo usuario 
		resultado = resultado + (1.0 / potencia(16.0,i)) * (4.0/(8.0 * i + 1.0) - 2.0/(8.0 * i + 4.0) 
		- 1.0/(8.0 * i + 5.0) - 1.0/(8.0 * i + 6.0) );
	}
	cout << setprecision(8) << fixed; // criterio do Susy de 8 casas decimais
	return resultado;
	}
	
double fatorial(int n){
	int i;
	double resultado = 1.0; // elemento neutro da multiplicacao
	if(n > 0){ // sopermite numeros positivos essa operacao
		for(i = 1; i <= n; i++)
			resultado = resultado * i;
	}
	cout << setprecision(0) << fixed; // numero inteiro
	return resultado;
	
}

double euler(int n){
	int i;
	double resultado = 0; // para evitar erros
	
	for(i = 0; i < n; i++){
		resultado = resultado + (1 / fatorial(i));
	 }
	cout << setprecision(8) << fixed; // criterio do Susy de 8 casas decimais
	return resultado;
	}
