//============================================================================
// Name        : Ejercicio_28_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   char c,ant;
   int a = 0,e = 0,i = 0,o = 0,u = 0,max = 0,maxa = 0,cant = 0,x = 0;
   cout<<"Ingrese caracteres y finalice con un punto: "<<endl;
   cin>>c;
   ant = c;
   while( c!='.' )
   {
      if( x>0 )
      {
         if( c=='_' )
         {
            cant++;
         }

      }
      else
      {
         if( c!='_' )
            x = 1;
      }
      if( c=='A'||c=='a' )
         a++;
      if( c=='E'||c=='e' )
         e++;
      if( c=='I'||c=='i' )
         i++;
      if( c=='O'||c=='o' )
         o++;
      if( c=='U'||c=='u' )
         u++;
      if( ant!='_' )
      {
         max++;
         if( max>maxa )
            maxa = max;
      }
      else max = 0;
      ant=c;
      cin>>c;
   }
   cant++;
   cout<<"Se repitio la a "<<a<<" veces."<<endl;
   cout<<"Se repitio la e "<<e<<" veces."<<endl;
   cout<<"Se repitio la i "<<i<<" veces."<<endl;
   cout<<"Se repitio la o "<<o<<" veces."<<endl;
   cout<<"Se repitio la u "<<u<<" veces."<<endl;
   cout<<"La oracion contiene "<<cant<<" palabras."<<endl;
   cout<<"La palabra mas larga tiene "<<maxa<<" letras."<<endl;
   return 0;
}
