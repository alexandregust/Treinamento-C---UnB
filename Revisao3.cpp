#include <iostream>

using namespace std;

int main(){ // Jogo dos restos, ganha o jogador que acerta o resto da soma dos numeros escolhidos por cada jogador.
	
	int p, s , t, aux;
	
	cout << "Primeiro escolheu o numero : ";
	cin >> p;
	cout << "Segundo escolheu o numero : ";
	cin >> s;
	cout << "Terceiro escolheu o numero : ";
	cin >> t;
	
	aux = p + s + t;
	
	if(aux % 3 == 2)
		cout << "Quem escolheu resto 2 ganhou";
	if(aux % 3 == 1)
		cout << "Quem escolheu resto 1 ganhou";
	if(aux % 3 == 0)
		cout << "Quem escolheu resto 0 ganhou";	
	
	
	
	
	return 0;
}
