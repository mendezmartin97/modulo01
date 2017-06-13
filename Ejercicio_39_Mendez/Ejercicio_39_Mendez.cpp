//============================================================================
// Name        : Ejercicio_39_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int unificarFecha(int dia, int mes, int agno)
{
   int amd;
   amd=(agno*10000)+mes*100+dia;
   return amd;

}

int main() {
	cout<<"Ingrese el dia, mes y año: ";
	int dia,mes,agno,amd;
	cin>>dia>>mes>>agno;
	amd=unificarFecha(dia,mes,agno);
	cout<<amd;
	return 0;
}
