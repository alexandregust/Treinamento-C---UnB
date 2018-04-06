#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    int x100, x50, x20, x10, x5, x2;
    int x1, x50c, x25c, x10c, x05c, x1c;
    int a, b;
    double x;
	   
	
	cin >> x ;
	
 	int z = x; // parte inteira
    int y = (x - z) * 1000; // transformar parte decimal para inteira
	b = y;	// comparar erros de arredondamento
	
    // 200,15  ---> 200
    // 200,15 - 200 = 0,15 *100 = 15
    
    // notas
	x100 = z/100;z = z % 100;
	x50 = z/50;z = z%50;
	x20 = z/20;z = z%20;
	x10 = z/10;z = z%10;
	x5 = z/5;z = z%5;
	x2 = z/2;z = z%2;
	// moedas
	x1 = z;
	x50c = y/500;y = y%500;
	x25c = y/250;y = y%250;
	x10c = y/100;y = y%100;
	x05c = y/50;a = y%50;
	
	if((b%1000) != 0)
		x1c =( a + 1 )/10;  // corrige arredondamento
	else 
		x1c = a/10;
		
		
    cout << x100 << " nota(s) de R$100" << endl;
	cout << x50 << " nota(s) de R$50" << endl;
	cout << x20 << " nota(s) de R$20" << endl;
	cout << x10 << " nota(s) de R$10" << endl;
	cout << x5 << " nota(s) de R$5" << endl;
	cout << x2 << " nota(s) de R$2" << endl;
    
    cout << x1 <<" moeda(s) de R$1" << endl;
    cout << x50c <<" moeda(s) de R$0,50" << endl;
    cout << x25c <<" moeda(s) de R$0,25" << endl;
    cout << x10c <<" moeda(s) de R$0,10" << endl;
    cout << x05c <<" moeda(s) de R$0,05" << endl;
    cout << x1c <<" moeda(s) de R$0,01" << endl;

    return 0;}

