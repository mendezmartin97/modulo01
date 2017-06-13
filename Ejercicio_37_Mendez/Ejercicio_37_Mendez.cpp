//============================================================================
// Name        : Ejercicio_37_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int mcd(int a, int b)
{
   int r;
   r=a%b;
   while(r!=0)
   {
      //swap(a,b,r);
      a=b;
      b=r;
      r=a%b;

   }
   return b;
}

int main() {
	cout<<"Ingrese dos numeros: ";
	int a,b,m;
	cin>>a>>b;

	m=mcd(a,b);
	cout<<"El mcd es: "<<m;
   return 0;
}
