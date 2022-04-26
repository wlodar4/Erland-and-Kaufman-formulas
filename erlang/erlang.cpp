#include <iostream>
#include <math.h>
#include<fstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double silnia(double a)
{
    if(a==0)
    	return 1;
	else
		return a*silnia(a-1);
}      

double Erlang(double A, double V){
	double licznik = pow(A,V)/silnia(V);
	double mianownik = 0 ;
	for(int i = 0; i < V ; i++){
		mianownik = mianownik + pow(A,i)/silnia(i);
	}

	return licznik/mianownik;
	
	
}





int main(int argc, char** argv) {
	
	double A, V;
	cout << "Podaj A: ";
	cin >> A;
	cout << "podaj V: ";
	cin >> V;
	cout << "A	V	E" << endl;
	cout <<	A << "	" << V << "	"<<Erlang(A, V);
	
	
	
	return 0;
}
