#include <iostream>
using namespace std;

int main () {
	int dia1,mes1,ano1;
	int dia2,mes2,ano2;
	
	cin >> dia1 >> mes1 >> ano1 ;
	cin >> dia2 >> mes2 >> ano2 ;
	
	if(ano1 < ano2) 
		cout << dia1 <<"/"<< mes1 <<"/"<<ano1<<" ocorreu antes." ;
		
	if(ano1 > ano2) 
		cout << dia2 <<"/"<< mes2 <<"/"<<ano2<<" ocorreu antes.";
		
	if(ano1 == ano2 && mes1 < mes2) 
		cout << dia1 <<"/"<< mes1 <<"/"<<ano1<<" ocorreu antes." ; 
		
	if(ano1 == ano2 && mes1 > mes2) 
		cout << dia2 <<"/"<< mes2 <<"/"<<ano2<<" ocorreu antes." ; 
		
	if(ano1 == ano2 && mes1 == mes2 && dia1 < dia2) 
		cout << dia1 <<"/"<< mes1 <<"/"<<ano1<<" ocorreu antes." ; 
		
	if(ano1 == ano2 && mes1 == mes2 && dia1 > dia2) 
		cout << dia2 <<"/"<< mes2 <<"/"<<ano2<<" ocorreu antes." ;
		
	
	return 0;
}


