//============================================================================
// Name        : Ejercicio_52_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int dia,mes,ano,octubre = 0,julio = 0,primavera = 0,amd,i = 0,eviejo;
   char sexo,viejo = '-';
   cout<<"Ingrese dia: ";
   cin>>dia;
   while( dia!=0 )
   {
      i++;
      cout<<"Ingrese mes: ";
      cin>>mes;
      cout<<"Ingrese año: ";
      cin>>ano;
      cout<<"Ingrese sexo(M/F)";
      cin>>sexo;
      amd = (ano*10000)+(mes*100)+dia;
      if( i==1 )
      {
         eviejo = amd;
         viejo = sexo;
      }
      if( mes==10 )
         octubre++;
      if( amd<19900709 )
         julio++;
      if( (sexo = 'F'||'f')
            &&((dia>=21&&mes>=9&&mes<=11)||(dia<21&&mes<=12&&mes>=10))
            &&ano==1982 )
         primavera++;
      if( amd<eviejo )
      {
         eviejo = amd;
         viejo = sexo;
      }
      cout<<"Ingrese dia: ";
      cin>>dia;
   }
   if( octubre>1 )
      cout<<"Hubo "<<octubre<<" nacimientos en el mes de Octubre."<<endl;
   else
      if( octubre>0 )
         cout<<"Hubo "<<octubre<<" nacimiento en el mes de Octubre."<<endl;//Esto es para que no diga 1 nacimientos
   
   if( julio>1 )
      cout<<"Hubo "<<julio<<" nacimientos antes del 9 de Julio de 1990."<<endl;
   else
      if( julio>0 )
         cout<<"Hubo "<<julio<<" nacimiento antes del 9 de Julio de 1990."
               <<endl;
   
   if( primavera>1 )
      cout<<"Hubo "<<primavera
            <<" nacimientos de mujeres en la primavera de 1982."<<endl;
   else
      if( primavera>0 )
         cout<<"Hubo "<<primavera
               <<" nacimiento de mujeres en la primavera de 1982."<<endl;
   
   if( viejo!='-' )
   {
      if( viejo=='m'||'M' )
      {
         cout<<"El sexo de la persona mas vieja fue masculino.";
      }
      else cout<<"El sexo de la persona mas vieja fue femenino.";
   }
   return 0;
}
