//============================================================================
// Name        : Ejercicio_18_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

   int men=0;
   int md=0;
   int ci=0;
   int may=0;
   int c=1;


   while(c != 0)
   {
      cout<<"Ingrese sueldo ";
            cin>>c;
      if(c<2000)
      {
         men++;
      }
      else
      {
         if(c<3000)
         {
            md++;
         }
         else
         {
            if(c<5000)
            {
               ci++;
            }
            else
               may++;
         }
      }
   }
   cout<<"El menor de 2000: "<<men<<endl<<"mayor de 2000 y menor que 3000 "<<md<<endl<<"entre 3000 y 5000: "<<ci<<endl"Mayor a 5000: "<<may;

	return 0;
}
