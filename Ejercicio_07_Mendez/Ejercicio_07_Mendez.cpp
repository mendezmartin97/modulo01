#include <iostream>
using namespace std;

int main()
{
   int a,m,d,AMD;
   cout<<"Ingrese d�a: ";
   cin>>d;
   cout<<"Ingrese mes: ";
   cin>>m;
   cout<<"Ingrese a�o: ";
   cin>>a;
   AMD = (a*10000)+(m*100)+d;
   cout<<"El A�o/Mes/Dia es: " << AMD;
   return 0;
}
