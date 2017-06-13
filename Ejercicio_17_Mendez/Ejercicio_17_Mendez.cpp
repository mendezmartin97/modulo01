//============================================================================
// Name        : Ejercicio_17_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
   int k;
   int g=0,e=0,p=0;
   cout << "Ingrese la cantidad de equipos: ";
   cin>>k;
   int i=0;
   while(i<k)
   {
      char CodEquipo,CodResultado;
      int PuntajeEquipo=0;
      int j=0;
      while(j<(k-1))
      {
         cout<<"Ingrese codigo de equipo: ";
         cin>>CodEquipo;
         cout<<"Ingrese codigo de resultado: ";
         cin>>CodResultado;
         if(CodResultado=='g')
         {
            g++;
            PuntajeEquipo+=3;
          }
         else
         {
            if(CodResultado=='p')
            p++;
            else
            {
               e++;
               PuntajeEquipo++;
            }
         }
         j++;

      }
      cout<<"El equipo "<<CodEquipo<<" tiene "<<PuntajeEquipo<<" puntos"<<endl;
      i++;



   }
   //En realidad la cantidad de partidos ganados empatados
   //y perdidos son la mitad de lo que se muestra
   //ya que cada equipo juega una sola vez contra el otro.
   cout<<"La cantidad de partidos ganados: "<<g<<endl;
   cout<<"La cantidad de partidos empatados: "<<e<<endl;
   cout<<"La cantidad de partidos perdidos: "<<p<<endl;

   if(g==p)
   {
      if(((2*p)+e)==(k*(k-1)))
      {
         cout<<"Datos validos";

      }
      else
         cout<<"Datos invalidos";
   }
   else
      cout<<"Datos invalidos";



	return 0;
}
