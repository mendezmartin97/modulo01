//============================================================================
// Name        : Ejercicio_14_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout<<"Ingrese dos valores numericos enteros: ";
	int a,b;
	cin>>a>>b;
	int cont=0;
	int sum=0;
	while (cont<a)
	{
	   sum=sum+b;
	   cont++;
	}
	cout<<"El producto es: "<<sum;

	return 0;
}
