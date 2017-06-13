//============================================================================
// Name        : Ejercicio_50_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int calcularBilletes(int&monto, int denom)
{
   int cant = monto/denom;
   monto = monto%denom;
   return cant;
}
void imprimir(int n, int x)
{
   if( x>1 )
   {
      cout<<"Se necesitan "<<x<<" billetes de $"<<n<<'.'<<endl;
   }
   else if(x>0)
      cout<<"Se necesita "<<x<<" billete de $"<<n<<'.'<<endl;
}
int main()
{
   int monto,cien = 0,cincuenta = 0,veinte = 0,diez = 0,cinco = 0,dos = 0,uno =
         0;
   cout<<"Ingrese cantidad de dinero: ";
   cin>>monto;
   cien=calcularBilletes(monto,100);
   cincuenta=calcularBilletes(monto,50);
   veinte=calcularBilletes(monto,20);
   diez=calcularBilletes(monto,10);
   cinco=calcularBilletes(monto,5);
   dos=calcularBilletes(monto,2);
   uno=calcularBilletes(monto,1);
   imprimir(100,cien);
   imprimir(50,cincuenta);
   imprimir(20,veinte);
   imprimir(10,diez);
   imprimir(5,cinco);
   imprimir(2,dos);
   imprimir(1,uno);
}
