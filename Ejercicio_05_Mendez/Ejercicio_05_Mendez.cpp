//============================================================================
// Name        : Ejercicio_05_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

               cout<<"Ingrese dos numeros enteros : ";
               int a,b;
               cin>>a;
               cin>>b;
               if(a==b)
                  cout<<"Son iguales ";
               else
               {
                  if(a>b)
                  {
                     cout<<"El mayor es: "<<a<<endl;
                     cout<<"El menor es: "<<b;
                  }
                  else
                  {
                     cout<<"El mayor es: "<<b<<endl;
                     cout<<"El menor es: "<<a;}
               }


      return 0;

}
