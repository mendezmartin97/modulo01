#include <iostream>
using namespace std;

int main()
{
   int m,n,max = -1,min = 101,posmax,posmin;
   cout<<"Ingrese cantidad de numeros: ";
   cin>>m;
   for( int i = 0; i<m; i++ )
   {
      cout<<"Ingrese un numero: ";
      cin>>n;
      if( n>max )
      {
         max=n;
         posmax=i+1;
      }
      if(n<min){
         min=n;
         posmin=i+1;
      }
   }
   cout<<"El maximo fue el "<<max<<" en la posicion "<<posmax<<'.'<<endl;
   cout<<"El minimo fue el "<<min<<" en la posicion "<<posmin<<'.';
   return 0;
}
