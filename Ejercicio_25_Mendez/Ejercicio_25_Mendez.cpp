//============================================================================
// Name        : Ejercicio_25_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
   int i = 0,num = 0,m = 0,n = 0,nAnt,cont0 = 0,contNum = 0,numMax = 0,
         contAlter = 0,contN = 0,contNDocena = 0,alterMax = 0,nDocenaMax = 0;
   bool a = false;
   char color,colorAnt;
   cout<<"Cuantos pares va a ingresar? ";
   cin>>m;
   cout<<"Ingresar el color ('r','n','v') y el numero"<<endl;
   cin>>color>>n;
   colorAnt = color;
   nAnt = n;

   if( n==0 )
      cont0++;

   if( n<12||n>23 )
   {
      contNDocena++;
      a = true;
   }
   else a = false;

   for( i = 1; i<m; i++ )
   {
      cin>>color>>n;
      if( n==0 )
      {
         cont0++;
         cout<<"Numero anterior al cero: "<<nAnt<<endl;
         cout<<"Siga ingresando "<<endl;
      }

      if( color!=colorAnt&&colorAnt!='v' )
      {
         contAlter++;
         if( contAlter>alterMax )
            alterMax = contAlter;
      }
      else contAlter = 0;

      if( color=='n'&&colorAnt=='n' )
         contN++;

      if( n==nAnt )
      {
         contNum++;
         if( contNum>numMax )
         {
            numMax = contNum;
            num = n;
         }

      }
      else contNum = 0;

      if( (n<12 or n>23)&&a )
      {
         contNDocena++;
         if( contNDocena>nDocenaMax )
            nDocenaMax = contNDocena;
      }
      else contNDocena = 0;

      if( n<12||n>23 )
      {
         contNDocena++;
         a = true;
      }
      else a = false;

      colorAnt = color;
      nAnt = n;
   }
   if( cont0==1 )
      cout<<"El cero salio "<<cont0<<" vez"<<endl;
   else cout<<"El cero salio "<<cont0<<" veces"<<endl;

   if( contN==1 )
      cout<<"El color negro se repitio "<<contN<<" vez"<<endl;
   else cout<<"El color negro se repitio "<<contN<<" veces"<<endl;

   if( numMax>0 )
      cout<<"El mismo numero "<<num<<" se repitio "<<numMax<<" veces"<<endl;
   else cout<<"No se repitio ningun numero"<<endl;

   cout
         <<"El mayor numero de veces seguidas que salieron alternados los colores rojo y negro fue "
         <<alterMax<<"\n";
   cout<<"El mayor numero de veces seguidas que se nego la segunda docena fue "
         <<nDocenaMax<<endl;
   return 0;
}

