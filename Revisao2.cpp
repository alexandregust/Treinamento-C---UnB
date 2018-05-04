#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main (){ // programa que calcula tempo de queda de queda, dado a altura , onde velocidade inicial é 0.
	
	float h, g ,t , aux;
	
	g = 9.8;
	
	cin >> h;
	
	aux = (2 * h )/ g;
	
	t = sqrt(aux);
	
	cout << " O tempo de queda de uma altura de " << h << " eh de "<<setprecision(3) << fixed << t << " segundos." ;
	
	return 0; 
}
