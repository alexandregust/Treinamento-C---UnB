#include <iostream>
#include <cmath>
using namespace std;

int main() { // calcula a n primeiras potencias do numero.
	
	int x, y, i;
	
	cout << "Ate "; cin >> x ; cout << "elevado a "; cin >> y; cout << endl;
	
	for(i = 1; i <= y; i++)
		cout << x << " elevado a " << i << " igual a " << pow(x,i) << endl; 

	return 0;
}
