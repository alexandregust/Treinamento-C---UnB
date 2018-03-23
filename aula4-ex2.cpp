#include <iostream>
using namespace std;

int main () {
	
	int a, b;
	cout << "Digite o primeiro numero inteiro:";
	cin >> a;
	cout << "Digite o segundo numero inteiro:";
	cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;
        


	cout << "primeiro =" << a <<endl;

	cout << "segundo =" << b <<endl;


	return 0;
	
	
	
}
