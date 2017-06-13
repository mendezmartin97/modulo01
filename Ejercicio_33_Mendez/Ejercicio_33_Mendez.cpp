#include <iostream>
using namespace std;

int main()
{
   int n = 0,fibo = 0,ant = 1, anta=0;
   cout<<"Ingrese el numero hasta donde quiere que se muestre la serie: ";
   cin>>n;
   cout<<"0";
   for( int i = 1; i<n; i++ )
      {
         cout<<", ";
         fibo=ant+anta;
         anta=ant;
         ant=fibo;
         cout<<fibo;
      }
   return 0;
}
