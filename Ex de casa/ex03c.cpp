#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
	
	double a, b, c, delta, x1r, x2r, rdelta, xi, d;
	
	cin >> a >> b >> c ; // le os coeficientes da equa��o ax� + bx +c
	
	d = 2 * a ;
	delta = (b * b) - (4 * a * c ); // delta da formula de baskara
	b = -b; // j� q na formula � menos b, para evitar erros de compila��o	
		
		if(delta >= 0) // para raizes reais
		{  	rdelta = sqrt(delta);
			x1r = (b + rdelta) / d ;
			x2r = (b - rdelta) / d ;		
			
			cout << setprecision(2) << fixed;
			cout << "x1 = " << x1r << endl
			<< "x2 = " << x2r ;			
		}
		
		else // para raizes complexas
		{ 	delta = - delta;
			rdelta = sqrt(delta);
			x1r = b / d;
			x2r = x1r;  // parte real das duas raizes ser�o iguais
			xi = rdelta / d;
			
			cout << setprecision(2) << fixed;			
			cout << "x1 = " << x1r << " + " << xi << "i" << endl
			<< "x2 = " << x2r << " - " << xi << "i";
		}	
		
	return 0;
}
