#include <iostream>

using namespace std;

int main(){


	int a, b; // usado para numeros inteiro, ocupam 8 bits(1 bit pro sinal)
	unsigned// somente positivos, pois o bit do sinal é usado
	char c ;/* armazena um simbolos, ou "números" de até 1 byte(8 bits)(1 pro sinal)
	usa a tabela ASC|| */  c = 'f';/* aspas simples quando se guarda uma letra em
	uma variavel */

  float d ;// numeros de ponto flutuante(decimais), ocupam 32 bits(1 pro sinal)
	double f; // numeros de ponto flutuante(decimais), ocupam 64 bits(1 pro sinal)
	a = 20;
	b = 30;

	// 2e3 = 2 x 10^3

	a = a + b;
	cout << a << endl; // uso so cout com variaveis

	return 0;
}
