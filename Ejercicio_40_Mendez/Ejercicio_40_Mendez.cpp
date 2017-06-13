//============================================================================
// Name        : Ejercicio_40_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void separarFecha(int amd,int &dia,int &mes,int &agno)
{
   agno=amd/10000;
   dia=amd%100;
   mes=amd%10000;
   mes=mes/100;
}
int main() {
	cout << "Ingrese una fecha con el formato aaaammdd: ";
	int amd,dia,mes,agno;
	cin>>amd;
	separarFecha(amd,dia,mes,agno);
	cout<<dia<<endl;
	cout<<mes<<endl;
	cout<<agno;
	return 0;
}
