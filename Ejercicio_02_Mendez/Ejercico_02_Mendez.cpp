//============================================================================
// Name        : Ejercico_02_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

   cout<<"Ingrese dos numeros: ";
      int a,b,c;
      cin>>a;
      cin>>b;
      if(b==0)
      {
         cout<<"No se puede dividir por 0 - 404 not found";
      }
      else
      {
         c=a/b;
         cout<<"El resultado entero es: "<<c;

      }


	return 0;
}
