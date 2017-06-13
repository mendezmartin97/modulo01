//============================================================================
// Name        : Ejercicio_38_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
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
      cout << "Ingrese un numero entero: ";
      long double a,r;
      cin>>a;
      r=factorial(a);
      cout<<"El factorial es: "<<r;

	return 0;
}
