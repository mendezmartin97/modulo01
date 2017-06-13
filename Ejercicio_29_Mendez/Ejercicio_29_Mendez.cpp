#include <iostream>
using namespace std;
void pasarARomano(int&numero, string&romano, string min, string medio, string max)
{
   if( numero%10>0 )
   {
      if( numero%10<4 )
      {
         for( int i = 0; i<numero%10; i++ )
         {
            romano = min+romano;
         }
      }
      if( numero%10==4 )
         romano = min+medio+romano;
      if( numero%10==5 )
         romano = medio+romano;
      if( numero%10>5&&numero%10<9 )
      {
         for( int i = 0; i<(numero%10)-5; i++ )
         {
            romano = min+romano;
         }
         romano = medio+romano;
      }
      if( numero%10==9 )
         romano = min+max+romano;
   }

}
int main()
{
   string romano;
   int numero;
   cout<<"Ingrese numero a convertir: ";
   cin>>numero;
   pasarARomano(numero,romano,"I","V","X");
   numero=numero/10;
   pasarARomano(numero,romano,"X","L","C");
   numero=numero/10;
   pasarARomano(numero,romano,"C","D","M");
   numero=numero/10;
   pasarARomano(numero,romano,"M","","");
   numero=numero/10;
   cout<<romano;
   return 0;
}
