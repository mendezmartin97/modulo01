//============================================================================
// Name        : Ejercicio_31_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
bool esPrimo(int n)
{     int cont=0;
      for(int i=1;i<n;i++)
      {
         if((n%i)==0)
            cont++;
      }

      if(cont<=1)
         return true;
      else
         return false;
}
int main() {
	int n=1,m,cont=0;

   cout << "Ingrese un numero " << endl; // prints !!!Hello World!!!
   cin>>m;
	//cout<<"1";
	while (cont<m)
	{
	   if(esPrimo(n))
	   {


	      cout<<n<<endl;
	      cont++;
	   }
	   n++;


	}
	return 0;
}
