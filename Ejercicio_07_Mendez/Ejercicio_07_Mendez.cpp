#include <iostream>
using namespace std;

int main()
{
   int a,m,d,AMD;
   cout<<"Ingrese día: ";
   cin>>d;
   cout<<"Ingrese mes: ";
   cin>>m;
   cout<<"Ingrese año: ";
   cin>>a;
   AMD = (a*10000)+(m*100)+d;
   cout<<"El Año/Mes/Dia es: " << AMD;
   return 0;
}
