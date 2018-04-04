#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main (){
	
	float p1, p2, t1, t2, t3;//as provas valem 75% da nota, trabalhos 25%
	float media;
	string nome;
	
	cout << setprecision(1) << fixed;
	
	cin>>nome;
	cin>> p1>>p2>>t1>>t2>>t3;
	media = 0.75*((2.0*p1 + 3*p2)/5.0)/*P1 tem peso 2 e P2 tem peso 3*/ +
	 0.25*((t1+t2+t2)/3);
	 
	
	cout<<nome<<": "<< media;
	
	return 0;}




	
	
	
	
	
	
	
	
	

