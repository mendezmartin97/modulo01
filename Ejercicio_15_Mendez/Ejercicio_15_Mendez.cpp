//============================================================================
// Name        : Ejercicio_15_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Ingrese un numero entero: ";
	int a;
	cin>>a;
	int cont=1;
	double f=1;

	while (cont<=a)
	{
	   f=f*cont;
	   cont++;
	}
	cout<<"El factorial es: "<<f;

	return 0;
}
