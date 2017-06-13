#include <iostream>
using namespace std;

int main()
{
   int n,i = 0,c = 0;
   cout<<"Ingrese un numero: ";
   cin>>n;
   while( true )
   {
      i++;
      if( i%3==0&&i%5!=0 )
      {
         cout<<i<<endl;
         c++;
      }
      if( c==n )
         return 0;
   }
}
