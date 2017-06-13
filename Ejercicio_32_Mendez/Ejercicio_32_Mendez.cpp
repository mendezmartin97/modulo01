#include <iostream>
using namespace std;
int serieFibo(int n)
{
   int fibo = 0,ant = 1, anta=1;

   for( int i = 2; i<n; i++ )
   {
      fibo=ant+anta;
      anta=ant;
      ant=fibo;
   }
   return fibo;
}

int main()
{
   int n=0, fibo=0;
   cout<<"Ingrese posicion de fibonacci que quiere saber: ";
   cin>>n;
   if (n>2){
      fibo=serieFibo(n);
   }
   else {
      if (n==0){
         fibo=0;
      }
      else fibo=1;
   }
   cout<<"El resultado es: "<<fibo;
   return 0;
}
