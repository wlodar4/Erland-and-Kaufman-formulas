#include <iostream>
#include <math.h>
#include<fstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double Erlang(double A, double V){
	double pom = A/V+A;
	if( V == 0)
		return 1;
	else return A*Erlang(A, V-1)/(V + A*Erlang(A, V-1));
}


void liczE(double amin, double amax, double astep, double V ){
	double A;
	ofstream wyniki("wyniki.txt");
	wyniki << "A	E" <<endl;
	while(amin <= amax){
		A = amin * V;
		wyniki << A << "	" <<Erlang(A, V)<<endl;	
		
		amin = amin + astep;
	}
	wyniki.close();
}


int main(int argc, char** argv) {
	
liczE(0.2, 1.3, 0.1, 20);
	
	
	return 0;
}
