#include <iostream>
using namespace std;

int main()
{
   int edad;
   cout<<"Ingrese edad del socio: ";
   cin>>edad;
   if( edad<=12 )
      cout<<"Menor";
   else
      if( edad<=18 )
         cout<<"Cadete";
      else
         if( edad<=26 )
            cout<<"Juvenil";
         else cout<<"Mayor";
   return 0;
}
