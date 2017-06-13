//============================================================================
// Name        : Ejercicio_51_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main() {
	int h,b,x1,x2,y1,y2,cont;
	
   cout << "Ingrese x1,y1,x2,y2: " << endl;
   for(int i=0;i<20;i++)
   {
      cin>>x1>>y1>>x2>>y2;
      b=abs(x2-x1);
      h=abs(y2-y1);
      if(b==h)
         cout<<"Perimetro "<<b*4;
      else
         cont++;
   }
   cout<<"La cantidad de rectangulos es: "<<cont;
	return 0;
}
