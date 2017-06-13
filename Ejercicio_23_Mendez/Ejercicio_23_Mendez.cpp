#include <iostream>
using namespace std;

int main()
{
   int n = 1;
   int a = 0;
   int i = 0;
   int min = 0;
   int max = 0;
   int min2 = 27;
   while( n!=0 )
   {
      cout<<"Ingrese un numero. (Cero para finalizar): ";
      cin>>n;
      if( n!=0 )
      {
         if( n<0 )
         {
            if( max==0 )
            {
               max = n;
            }
            else
            {
               if( n>max )
               {
                  max = n;
               }
            }

         }
         else
         {
            if( min==0 )
            {
               min = n;
            }
            else
            {
               if( n<min )
               {
                  min = n;
               }
            }
         }
         if( n>17&&n<26 )
         {
            if( n<min2 )
            {
               min2 = n;
            }
         }
         i++;
         a = a+n;
      }
   }
   float prom;
   prom = float(a)/i;
   cout<<"El maximo valor negativo es: "<<max<<endl;
   cout<<"El minimo valor positivo es: "<<min<<endl;
   if( min2!=27 )
   {
      cout<<"El valor minimo entre -17 y 26 es: "<<min2<<endl;
   }
   else{
      cout<<"No hubo valores comprendidos entre -17 y 26."<<endl;
   }
   cout<<"El promedio de los datos ingresados es: "<<prom<<endl;
   return 0;
}
