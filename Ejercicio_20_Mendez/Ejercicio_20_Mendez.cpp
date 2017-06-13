#include <iostream>
using namespace std;

int main()
{
   int n,max;
   cout<<"Ingrese un numero: ";
   cin>>n;
   max = n;
   for( int i = 0; i<9; i++ )
   {
      cout<<"Ingrese un numero: ";
      cin>>n;
      if( n>max )
         max = n;
   }
   cout << "El mayor fue: "<<max;
   return 0;
}
