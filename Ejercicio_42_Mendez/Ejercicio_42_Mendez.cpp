//============================================================================
// Name        : Ejercicio_42_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
bool esMultiplo(int a, int b)
{
  if((b%a)==0)
     return true;
  else
     return false;
}
long double factorial(int a)
{
   long double cont=1;
   long double f=1;

         while (cont<=a)
         {
            f=f*cont;
            cont++;
         }
    return f;
}
int main() {
	cout<<"Cuantos numeros va a ingresar? ";
	int m,a,cont3,cont5,cont7,cont35;
	double long f;
	cont3=cont5=cont7=cont35=0;
	cin>>m;
	cout<<"Ingrese los "<<m<<" numeros"<<endl;

	   for(int i=0;i<m;i++)
	   {
	      cin>>a;
	      if(esMultiplo(3,a))
	         cont3++;

	      if(esMultiplo(5,a))
	               cont5++;
	      if(esMultiplo(7,a))
	               cont7++;
	      if(esMultiplo(3,a)&& esMultiplo(5,a))
	               cont35++;

	      f=factorial(a);
	      cout<<"Su factorial es: "<<f<<endl;

	   }
	cout<<cont3<<" numeros son multiplos de 3"<<endl;
	cout<<cont5<<" numeros son multiplos de 5"<<endl;
	cout<<cont7<<" numeros son multiplos de 7"<<endl;
	cout<<cont35<<" numeros son multiplos de 3 y de 5"<<endl;


	return 0;
}
