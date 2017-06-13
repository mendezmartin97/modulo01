#include <iostream>
using namespace std;

int main()
{
   int m,n,max,min,posmax=1,posmin=1;
   cout<<"Ingrese cantidad de numeros: ";
   cin>>m;
   cout<<"Ingrese un numero: ";
   cin>>n;
   max = n;
   min = n;
   for(int i=1;i<m;i++){
      cout<<"Ingrese un numero: ";
      cin>>n;
      if( n>max )
      {
         max = n;
         posmax = i+1;
      }
      else
      {
         if( n<min )
         {
            min = n;
            posmin = i+1;
         }
      }

   }
   cout<<"El maximo fue el "<<max<<" en la posicion "<<posmax<<'.'<<endl;
   cout<<"El minimo fue el "<<min<<" en la posicion "<<posmin<<'.';
   return 0;
}
