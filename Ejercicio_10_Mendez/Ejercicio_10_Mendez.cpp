#include <iostream>
using namespace std;

int main()
{
   double a,b,c;
   cout<<"Ingrese lado 1: ";
   cin>>a;
   cout<<"Ingrese lado 2: ";
   cin>>b;
   cout<<"Ingrese lado 3:";
   cin>>c;
   if( a==b&&b==c )
   {
      cout<<"Equilatero.";
   }
   else
   {
      if( a==c||b==a||c==b )
      {
         cout<<"Isosceles.";
      }
      else
      {
         cout<<"Escaleno.";
      }
   }
   return 0;
}
