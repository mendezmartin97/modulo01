//============================================================================
// Name        : Ejercicio_41_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool esMultiplo(int a, int b)
{
  if((b%a)==0)
     return true;
  else
     return false;
}
int main() {
	cout<<"ingrese dos numeros: ";
	int a,b;
	cin>>a>>b;

	if(esMultiplo(a,b))
	   cout<<"Son multiplos";
	else
	   cout<<"No son multiplos";


	return 0;
}
