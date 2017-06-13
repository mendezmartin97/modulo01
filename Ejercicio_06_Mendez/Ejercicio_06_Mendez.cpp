//============================================================================
// Name        : Ejercicio_06_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

   cout<<"Ingrese 3 numeros enteros diferentes: ";
   int a,b,c;
   cin>>a>>b>>c;
   int mayor,menor,medio;
   if(a>b && a>c)
   {
      mayor=a;
      medio = max(b,c);
      menor = min(b,c);
   }
   else
   {
      if(b>a && b>c)
      {
         mayor=b;
         medio=max(a,c);
         menor=min(a,c);
      }
      else
      {
         mayor=c;
         medio=max(a,b);
         menor=min(a,b);
      }
   }
   cout<<"El mayor es: "<<mayor<<endl<<"El medio es: "<<medio<<endl<<"El menor es: "<<menor;

	return 0;
}
int max(int a,int b)
{
   int r=0;
   if(a>b)
      r=a;
   else
      r=b;
   return r;
}
int min(int a,int b)
{
   int r=0;
   if(a<b)
      r=a;
   else
      r=b;
   return r;
}
