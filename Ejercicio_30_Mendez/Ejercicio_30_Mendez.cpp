//============================================================================
// Name        : Ejercicio_30_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n=0,cont=0;
	cout<<"Ingrese un numero: ";
	cin>>n;

	for(int i=1;i<n;i++)
	{
	   if((n%i)==0)
	      cont++;
	}

	if(cont<=1)
	   cout<<"Primo";
	else
	   cout<<"No primo";


	return 0;
}
