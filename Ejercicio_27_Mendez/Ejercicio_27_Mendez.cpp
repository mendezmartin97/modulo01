//============================================================================
// Name        : Ejercicio_27_Mendez.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
bool Clausurar(int tipo,char g)
{
   if(tipo==3||tipo==4)
   {
      if(g=='g'||g=='G')
         return true;
      else
         return false;
   }
   else
      return false;
}
void Total(char g, int valor, int &acuL,int &acuM,int &acuG)
{
   if(g=='L'||g=='l')
      acuL+=valor;
   else
   {
      if(g=='M'||g=='m')
         acuM+=valor;
      else
         acuG+=valor;
   }
}
bool Menor(int valor, int menor)
{
   if(valor<menor)
      return true;
   else
      return false;
}
int main() {
	char gravedad,gravedadMenor;
	string motivo, motivoMenor;
	int tInf,valor,acuL,acuM,acuG,menor,cont=0,contC=0,tipoMenor;

	cout<<"Ingrese tipo de infraccion (1,2,3 o 4)"<<endl;
	cin>>tInf;
	tipoMenor=tInf;

	motivoMenor='';
	gravedadMenor='z';
	while(tInf!=0)
	   {
	      cout<<"Ingrese motivo,valor,gravedad"<<endl;
	      cin>>motivo,valor,gravedad;
	      if(cont==0)
	         menor=valor;

	      if(Menor(valor,menor))
	      {
	         menor=valor;
	         motivoMenor=motivo;
	         gravedadMenor=gravedad;
	         tipoMenor=tInf;
	      }

	      if(Clausurar(tInf,gravedad))
	            contC++;

	      Total(gravedad,valor,acuL,acuM,acuG);
	      cont++;
	   }
	cout<<"por gravedad leve debe pagar: "<<acuL<<endl;
	cout<<"por gravedad moderada debe pagar: "<<acuM<<endl;
	cout<<"por gravedad grave debe pagar: "<<acuG<<endl;
	if(contC>3)
	   cout<<"Clausurado"<<endl;

	cout<<"El motivo de la menor infraccion es: "<<motivoMenor<<endl;







	return 0;
}
