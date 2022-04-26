#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float silnia (float liczba)
{
  if (liczba < 1)
    return 1;
  else
    return liczba * silnia (liczba - 1);
}


float suma (float A, int v)
{
  float wynik = 0;
  for (int i = 0; i <= v; i++)
    {
      wynik += (pow(A, i) / silnia (i));
    }
  return wynik;
}

float szukaj(float E, float A){
	float  V = 1, pom, E2;
	bool szuk = false;
   
    while(szuk == false){
        E2 = ((pow (A, V) / silnia (V)) / suma (A, V));
        pom = abs(E2-E);
       
	    if (pom < (0.15*E)){
            return V;
            szuk = true;
            break;
        }
       
	    else{
            
			V++;
        }
    }
}



int main() {
   	float E, A;
    
    cout << "podaj E: ";
    cin >> E;
    cout << "podaj A: ";
    cin >> A;
   
   	cout <<"V = " << szukaj(E,A);
    return 0;
}
