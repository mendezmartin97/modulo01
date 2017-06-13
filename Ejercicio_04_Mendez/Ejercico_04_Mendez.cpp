//============================================================================
// Name        : Ejercico_04_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
   cout<<"Ingrese dos numeros distintos: ";
            int a,b,m;
            cin>>a;
            cin>>b;
            if(a>b)
               m=a;
            else
               m=b;

            cout<<"El mayor es: "<<m;
	return 0;
}
