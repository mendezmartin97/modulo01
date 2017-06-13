//============================================================================
// Name        : Ejercicio_36_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void Porcentajes(int contAsientos, int cantA, double &pALibres, double &pAOcupados)
{
   pAOcupados=double((contAsientos-1)*100)/cantA;
   pALibres=100-pAOcupados;
}
void Mayor(int &mayor, int &recaudo, int &nroMayor, int &nroVuelo)
{
   if(recaudo>mayor)
   {
      mayor=recaudo;
      nroMayor=nroVuelo;
   }
}

int main() {
	bool b=false;
	string des;
	int contAsientos, total=0, contVC, mayor, m, nv, cantA, pas, recaudoVuelo, nroMayor=0, vuelosC=0,vuelosCMax=0;
	double pALibres, pAOcupados, imp;
	cout<<"Cuantos vuelos va a ingresar?: ";
	cin>>m;
	for(int i=0;i<m;i++)
	{
	   contAsientos=1;
	   recaudoVuelo=pALibres=pAOcupados=0;
	   cout<<"Ingrese el numero de vuelo, el destino y la cantidad de asientos: "<<endl;
	   cin>>nv>>des>>cantA;
	   cout<<"Ingrese el numero de pasaporte y el importe que abono: "<<endl;
	   cin>>pas>>imp;

	   while(pas>0) //Para que salga del while tiene que ingresarse pas 0 e imp 0. es decir 0 0
	   {
	      recaudoVuelo+=imp;
	      contAsientos++;
	      cin>>pas>>imp;

	   }
	   Porcentajes(contAsientos,cantA,pALibres,pAOcupados);

	   if(pALibres==0 && b)
	   {
	      vuelosC++;
	      if(vuelosC>vuelosCMax)
	         vuelosCMax=vuelosC;
	   }
	   else
	      vuelosC=0;

	   if(pALibres==0)
	   {
	      b=true;
	      vuelosC++;
	   }
	   else
	      b=false;

	   cout<<"Total recaudado de vuelo: "<<recaudoVuelo<<endl;
	   cout<<"% de asientos libres del vuelo: "<<pALibres<<endl;
	   cout<<"% de asientos ocupados del vuelo "<<pAOcupados<<endl;

	   Mayor(mayor,recaudoVuelo,nroMayor,nv);
	   total+=recaudoVuelo;

	}
	cout<<"Total recaudado en el mes: "<<total<<endl;
	cout<<"Cantidad de veces seguidas que se dieran vuelos completos: "<<vuelosCMax<<endl;
	cout<<"El numero de vuelo que mas recaudo: "<<nroMayor<<endl;

	return 0;
}
