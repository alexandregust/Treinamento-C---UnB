#include <iostream>

using namespace std;

int main(){ // Programa que analisa velocidade baseada no CBT.
	
	float v, vmax;
	
	cout << " Digite velocidade medida igual a 0 para parar" << endl;
	v = 1;
	while(v != 0){
	
		cout << endl << "Velocidade medida : "; cin >> v;
		cout << "Velocidade da via : "; cin >> vmax; 
	
		v = v / vmax;
		
		if(v <= 1.0)
			cout << "Nenhuma punicao" << endl;
		if(v > 1.0 && v <= 1.2)
			cout << " O infrator cometeu uma infracao grave - Deve ser punido com 5 pontos na carteira e multa." << endl;
		if(v > 1.2)
			cout << "O infrator cometeu uma infracao gravissima - Deve ser punido com 7 pontos na carteira e multa" << endl;		
	}	
	return 0;
}
