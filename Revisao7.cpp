#include <iostream>

using namespace std;

int main() { // Programa que usa operadores como entrada.
	
	int x, z;
	char y;
	cin >> x >> y >> z;
	
	switch(y){
		case '+':
			cout << x + z;
			break;
		case '-':
			cout << x - z;
			break;
		case '/':
			cout << x / z;
			break;
		case '*':
			cout << x * z;
			break;		}
	
	
	return 0;
}
