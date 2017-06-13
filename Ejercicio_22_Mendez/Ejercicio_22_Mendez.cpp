#include <iostream>
using namespace std;
bool esMayor(int mayor, int AMD)
{
   if( AMD<mayor )
   {
      return true;
   }
   else
   {
      return false;
   }
}
bool esMenor(int menor, int AMD)
{
   if( AMD>menor )
   {
      return true;
   }
   else
   {
      return false;
   }
}
int invertirFecha(int fecha)
{
   int ano,mes,dia,AMD;
   ano = fecha%10000;
   dia = fecha/1000000;
   mes = fecha%1000000;
   mes = mes/10000;
   AMD = (ano*10000)+(mes*100)+dia;
   return AMD;
}
int main()
{
   int fecha,mayor,menor;
   string nombre,nmayor,nmenor;
   cout<<"Ingrese nombre: ";
   cin>>nombre;
   if( nombre!="fin"&&nombre!="Fin" )
   {
      cout<<"Ingrese fecha(DDMMAAAA): ";
      cin>>fecha;
      mayor = invertirFecha(fecha);
      nmayor=nombre;
      nmenor=nombre;
      menor = invertirFecha(fecha);
      while( nombre!="fin"&&nombre!="Fin" )
      {
         cout<<"Ingrese nombre: ";
         cin>>nombre;
         if( nombre!="fin"&&nombre!="Fin" )
         {
            cout<<"Ingrese fecha(DDMMAAAA): ";
            cin>>fecha;
            fecha = invertirFecha(fecha);
         }
         if( esMenor(menor,fecha) )
         {
            menor = fecha;
            nmenor = nombre;
         }
         else
         {
            if( esMayor(mayor,fecha) )
            {
               mayor = fecha;
               nmayor = nombre;
            }
         }
      }
      cout<<"El mayor es: "<<nmayor<<endl;
      cout<<"El menor es: "<<nmenor;
      return 0;
   }
}
