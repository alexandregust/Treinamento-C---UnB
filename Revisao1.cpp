#include <iostream>

using namespace std;

int main (){ // programa que converte segundos em dias, horas , minutos e segundos.
	
	int entrada, h, m, s, d;

	cin >> entrada; 
	
	s = entrada % 60;
	m = entrada / 60;
	h = m / 60;
	m = m % 60;
	d = h / 24;
	h = h % 24;
	
	cout << entrada << " segundos, correspondem a " << d << " dias, " << 
	h << " horas, " << m << " minutos e  " << s << " segundos."; 
	
	return 0;
	
}
