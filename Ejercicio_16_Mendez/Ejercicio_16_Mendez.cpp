//============================================================================
// Name        : Ejercicio_16_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
   int cont1=0;
   int cont2=0;
   int acu=0;
   int suma=0;
   int a;
	while (cont2<50)
	{
	   cout<<"Ingrese un numero entero: ";
	   cin>>a;
	   if(a>100)
	   {
	      acu+=a;
	      cont1++;
	   }
	   else
	   {
	      if(a< -10)
	         suma+=a;
	   }
	   cont2++;
	}
	double prom=0;
	prom= double(acu)/cont1;
	cout<<"El promedio de los mayores a 100 es: "<<prom<<endl;
	cout<<"La suma de los menores que -10 es: "<<suma;

	return 0;
}
