//============================================================================
// Name        : Ejercicio_26_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
bool Mayor(int peso, int mayor)
{
   if(peso>mayor)
      return true;
   else
      return false;
}

int main() {
   int idCont,peso,idPuerto,cont1,cont2,cont3,acu,mayor,idMayor;
   cont1 = cont2 = cont3 = acu = mayor = 0;
   cout<<"Ingresar el id del contenedor, el peso y el ide del puerto que sera trasladado"<<endl;

   for(int i=0;i<5;i++)
   {
      cin>>idCont>>peso>>idPuerto;// por ejemplo '1 200 3'
      acu+=peso;
      if(Mayor(peso,mayor))
      {
         mayor=peso;
         idMayor=idCont;
      }
      if(idPuerto==1)
         cont1++;
      if(idPuerto==2)
               cont2++;
      if(idPuerto==3)
               cont3++;

   }
	cout<<"El peso total que el buque debe trasladar es de "<<acu<<" kilos."<<endl;
	cout<<"El contenedor de mayor peso es el "<<idMayor<<" y pesa "<<mayor<<" kilos."<<endl;
	cout<<"Se trasladan "<<cont1<<" contenedores al puerto 1"<<endl;
	cout<<"Se trasladan "<<cont2<<" contenedores al puerto 2"<<endl;
	cout<<"Se trasladan "<<cont3<<" contenedores al puerto 3"<<endl;



	return 0;
}
