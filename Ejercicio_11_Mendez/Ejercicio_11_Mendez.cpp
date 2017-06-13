#include <iostream>
using namespace std;

int main()
{
   int mes,ano;
   cout<<"Ingrese mes: ";
   cin>>mes;
   cout<<"Ingrese año: ";
   cin>>ano;
   if( mes==2 )
   {
      if( ano%4==0 )
         cout<<"29 dias.";
      else cout<<"28 dias ";
   }
   else
      if( mes==4 or 5 or 9 or 11 )
      {
         cout<<"30 dias";
      }
      else cout<<"31 dias";
   return 0;
}
