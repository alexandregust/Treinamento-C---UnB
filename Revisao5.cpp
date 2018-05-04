#include <iostream>

using namespace std;

int main(){ // Programa que se se a data digita e valida ou nao entre os anos 1600 e 3000.
	
	int d, m , a;
	bool x;
	
	while(d != 0){
	
		cout << endl << "Digite a data(dia 0 para parar)" << endl << " Dia : ";
		cin >> d;
		cout <<" Mes : ";
		cin >> m;
		cout << " Ano : ";
		cin >> a;
		
		x = false;
		
		if(a <= 3000 && a >= 1600 && m > 0 && m <= 12 && d > 0){
			if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 )
				if(d <= 31)
					x = true; 
			
			if(m == 4 || m == 6 || m == 9 || m == 11)
				if(d <= 30)
					x = true; 
		
			if(m == 2){
				if(d <= 28)
					x = true;
				
				if(a % 4 == 0 && a % 100 != 0)
					if(d <= 29)
						x = true;
				
				if(a % 400 == 0 && a % 100 == 0)
					if(d <= 29)
						x = true;		
			}
		}
		
		if(x == false)
			cout << "Data invalida" << endl;
		if(x == true)
			cout << "Data valida" << endl;	
			
}
	
	
	return 0;
}
