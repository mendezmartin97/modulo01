#include <iostream>
using namespace std;

int main()
{
   int a,m,d,AMD,aux;
   cout<<"Ingrese AñoDiaMes: ";
   cin>>AMD;
   a = AMD/10000;
   aux = AMD - (a*10000);
   m=aux/100;
   d=aux-(m*100);
   cout<<"El dia es el "<<d<< " del mes "<<m<<" del año "<< a;
   return 0;
}
