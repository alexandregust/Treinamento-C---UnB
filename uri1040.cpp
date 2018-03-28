#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	
	float n1, n2, n3, n4;
	float media, exame, final;
	cout << setprecision(1) << fixed;
	cin>> n1>>n2>>n3>>n4;


	media = ((2 * n1 )+ (3 * n2 )+ (4 * n3) + n4)/10;

	
	
	if (media >= 7){

		cout<< "Media: " << media << endl << "Aluno aprovado" << endl;
		return 0;}
		

		
	if (media >= 5 && media < 7){
		
	
		cin >> exame;
		cout << "Media: " << media << endl << "Aluno em exame."<< endl;
		cout << "Nota do exame: "<< exame << endl;
		final = (media + exame)/2;
		
		
			if (final >= 5)
			
			cout << "Aluno aprovado."<< endl<< "Media final: "<< final<< endl;
			
			if(final < 5)
			cout << "Aluno reprovado."<< endl<< "Media final: "<< final<< endl;
		return 0;}
			
	if (media < 5){
		cout<<"Media: " << media << endl;cout << "Aluno reprovado" << endl;}
		
		return 0;}
		

	
	
	
	
	
	
	
	
	

