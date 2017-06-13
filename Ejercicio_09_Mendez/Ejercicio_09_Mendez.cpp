#include <ctime>
#include <cmath>
#include <iostream>
using namespace std;

int getDia()
{
   time_t t = time(0);
   struct tm * now = localtime(&t);
   int dia;
   dia = now->tm_mday;
   return dia;
}
int getMes()
{
   time_t t = time(0);
   struct tm * now = localtime(&t);
   int mes;
   mes = (now->tm_mon+1);
   return mes;
}
int getAno()
{
   time_t t = time(0);
   struct tm * now = localtime(&t);
   int ano;
   ano = (now->tm_year+1900);
   return ano;
}
int calcularPeso(int dia, int mes, int ano)
{
   int peso = 0;
   ano = ano-1;
   peso = ((ano/4)*366)+((ano-(ano/4))*365);
   for( int i = 1; i<mes; i++ )
   {
      if( i==2 )
      {
         if( ano%4==0 )
         {
            peso = peso+29;
         }
         else
         {
            peso = peso+28;
         }
      }
      else
         if( i==4|i==6|i==9|i==11)
         {
            peso = peso+30;
         }
         else
         {
            peso = peso+31;
         }
   }
   peso = peso+dia+1;
   return peso;
}
int main()
{
   int fecha,dia,mes,ano,dia1,dia2,mes1,mes2,ano1,ano2,peso,peso1,peso2;
   dia = getDia();
   mes = getMes();
   ano = getAno();
   cout<<"Fecha 1:"<<endl<<"Dia(DD): ";
   cin>>dia1;
   cout<<"Mes(MM): ";
   cin>>mes1;
   cout<<"Año(AAAA): ";
   cin>>ano1;
   cout<<"Fecha 2:"<<endl<<"Dia(DD): ";
   cin>>dia2;
   cout<<"Mes(MM): ";
   cin>>mes2;
   cout<<"Año(AAAA): ";
   cin>>ano2;
   peso = calcularPeso(dia,mes,ano);
   peso1 = calcularPeso(dia1,mes1,ano1);
   peso2 = calcularPeso(dia2,mes2,ano2);
   if( abs(peso-peso1)==abs(peso-peso2) )
   {
      cout<<"Las fechas estan a la misma diferencia.";
   }
   else
      if( abs(peso-peso1)<abs(peso-peso2) )
      {
         cout<<"La fecha mas cercana es: "<<dia1<<'/'<<mes1<<'/'<<ano1<<endl;
      }
      else
      {
         cout<<"La fecha mas cercana es: "<<dia2<<'/'<<mes2<<'/'<<ano2<<endl;
      }
   cout<<"La fecha es: "<<dia<<'/'<<mes<<'/'<<ano;
}
