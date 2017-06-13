//============================================================================
// Name        : Ejercicio_24_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
bool minimo(int m,int min)
{
   if(m<min)
      return true;
   else
      return false;
}
bool maximo(int m, int max)
{
   if(m>max)
         return true;
      else
         return false;
}
int main() {
   int n;
	cout << "Ingrese un numero: "<<endl;
	cin>>n;
	int acu,cont1=0,cont2=0,min,max=n,posr,poscon;
	double prom;

	while (n>=0)
	{
	   cont2=0;
	   acu=0;
	   while(n>0)
	   {
	      acu+=n;
	      if (cont2==0)
	         min=n;

	      if(minimo(n,min))
	         min=n;

	      if(maximo(n,max))
	      {  max=n;
	         posr=(cont2+1);
	         poscon=(cont1+1);
	      }

	      cont2++;
	      cout << "Ingrese un numero: "<<endl;
	      cin>>n;
	   }
	   prom=double(acu)/cont2;
	   cout<<"PROMEDIO: "<<prom<<endl;
	   cout<<"MINIMO: "<<min<<endl;

	   cont1++;
	   cout << "Ingrese un numero: "<<endl;
	   cin>>n;

	}

   cout<<"MAXIMO DEL CONJUNTO "<<max<<" SUBCONJUNTO: "<<poscon<<" POSICION RELATIVA: "<<posr<<endl;


	return 0;
}

