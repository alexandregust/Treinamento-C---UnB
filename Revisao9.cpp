#include <iostream>

using namespace std;

int main() { // inverte a ordem digitada de 100 numeros
	
	int a[100], i, x = 1, b;
	
	for(i=0; x > 0 ; i++)
		{cin >> x;
		if(x>0)	
			a[i] = x;}
		
		b = i - 2;
	for(i=b; i>=0; i--)
		cout << a[i] << endl; 
	
	return 0;
}
