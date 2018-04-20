#include <iostream>
using namespace std;

int main (){
	float a,b,c;
	
	cin >> a >> b >> c;
	
	if(a <= b && a < c ){
		cout << a << " ";
		if(b <= c)
		cout << b << " "<< c;
		else 
		cout << c <<" "<< b;}
	if(b <= a && b < c ){
		cout << b << " ";
		if(a <= c)
		cout << a << " "<< c;
		else 
		cout << c <<" "<< a;}
	if(c <= b && c < a ){
		cout << c << " ";
		if(b <= a)
		cout << b << " "<< a;
		else 
		cout << a <<" "<< b;}
	if(a == b && b == c)
		cout<< a <<" "<< b <<" "<< c ;
		
			
	return 0;
}
