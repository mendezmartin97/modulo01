#include <iostream>
using namespace std;
void plan(char tipo, double &costo, double &minL, double &cargoXMin )
{
      if(tipo=='A'||tipo=='a')
      {
         costo=70;
         minL=300;
         cargoXMin=0.09;
      }
      if(tipo=='B'||'b')
      {
         costo=55;
         minL=200;
         cargoXMin=0.15;
      }
      if(tipo=='C'||tipo=='c')
      {
         costo=40;
         minL=100;
         cargoXMin=0.21;
      }
      if(tipo=='D'||tipo=='d')
      {
         costo=28;
         minL=60;
         cargoXMin=0.29;
      }
      if(tipo=='E'||tipo=='e')
      {
         costo=19;
         minL=40;
         cargoXMin=0.37;
      }
}

long toMin(long t)
{
   long hora,min;
   hora = t/100;
   min = t%100;
   return (min+hora*60);
}

void precioFinal(double costo, double minL, double cargoxmin, long minusa,double &cantexcedida, double &monto)
{

   cantexcedida=(minL-minusa)<0?minusa-minL:0;
   monto=(costo+(cantexcedida*cargoxmin))*1.21;

}

int main()
{
   double costo, minL, cargoXMin, cantExcedida,monto;
   long tiempo,minUsa;
   int cel,m=0;
   char tipo;
   string nombre,dir;

   while (m<3)
   {

      if(m==0)
         cout<<"Turno mañana"<<endl;

      if(m==1)
         cout<<"Turno tarde"<<endl;

      if(m==2)
         cout<<"Turno noche"<<endl;

      cout<<"Ingrese celular: ";
            cin>>cel;

      while(cel!=0)
      {
         cout<<"Ingrese nombre: ";
               cin>>nombre;
         cout<<"Ingrese direccion: ";
               cin>>dir;
         cout<<"Ingrese tiempo en formato hhmm : ";
               cin>>tiempo;
         cout<<"Ingrese tipo de abono (A, B, C, D o E): ";
               cin>>tipo;
               plan(tipo,costo,minL,cargoXMin);

               minUsa=toMin(tiempo);
               precioFinal(costo, minL, cargoXMin, minUsa, cantExcedida, monto);

               cout<<nombre<<" "<<dir<<" min libres: "<<minL<<" min excedidos: "<<cantExcedida<<" Monto total: "<<monto<<endl;


         cout<<"Ingrese celular: ";
               cin>>cel;
      }


    m++;
   }

   return 0;
}
