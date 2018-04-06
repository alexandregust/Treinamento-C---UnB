#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	float raio, volume, area;
	
	cin >> raio;
	volume = (4.00 * 3.14 * raio * raio* raio )/3.00;
	area = 4.00 * 3.14 * raio * raio;

	cout <<setprecision(0)<< "area = "<<fixed <<area<<", "<<setprecision(3)<<area<<fixed<<endl;
	cout <<setprecision(0)<< "volume = "<<fixed<<volume<<", "<<setprecision(3)<<volume<<fixed<<endl;

return 0;}
