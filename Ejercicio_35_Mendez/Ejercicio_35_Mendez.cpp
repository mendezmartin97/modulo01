#include <iostream>
#include <sstream>
#include <string>
using namespace std;
string pasarAString(int valor)
{
   stringstream iss;
   iss<<valor;
   return iss.str();
}
void ingresoIntegrantes(int&edad, string&nombre,
      string&apellido, char&tipo, char&sexo, char&nivel, char&indicador)
{
   cout<<"Ingrese Nombre: ";
   cin>>nombre;
   cout<<"Ingrese Apellido: ";
   cin>>apellido;
   cout<<"Ingrese Edad: ";
   cin>>edad;
   cout<<"Ingrese Sexo(M/F): ";
   cin>>sexo;
   cout<<"Ingrese Nivel de estudios(N/P/S/T/U): ";
   cin>>nivel;
   if( nivel!='N' )
   {
      cout<<"Termino sus estudios(I/C)? ";
      cin>>indicador;
   }
   else indicador = 'C';
}
int main()
{
   int c = 0,edad = 0,cantidad=0,max=0,prom = 0,acum = 0,acumtotal = 0,
         promtotal = 0,primariaIncompleta = 0,secundariaIncompleta = 0,
         terciariaIncompleta = 0,universidadIncompleta = 0;
   float analfabetismo = 0,sexos = 0;
   string domicilio,domiciliomax,nombre,apellido,datosprimaria,promedios,edade,
         prome;
   char tipo,sexo,nivel,indicador;
   cout<<"Ingrese domicilio(en caso de espacio ingrese _): ";
   cin>>domicilio;
   cout<<"Tipo de vivienda(C/D): ";
   cin>>tipo;
   cout<<"Ingrese cantidad de integrantes: ";
   cin>>c;
   while( c!=0 )
   {
      if( c>max )
      {
         max = c;
         domiciliomax = domicilio;
      }
      for( int i = 0; i<c; i++ )
      {
         ingresoIntegrantes(edad,nombre,apellido,tipo,sexo,nivel,
               indicador);
         cantidad++;
         acum = acum+edad;
         edade = pasarAString(edad);
         if( (nivel=='P'&&indicador=='C')||nivel=='S'||nivel=='T'||nivel=='U' )
         {
            datosprimaria = datosprimaria+nombre+','+apellido+','+edade+','+sexo
                  +'\n';
         }
         if( nivel=='N'&&edad<10 )
         {
            analfabetismo++;
         }
         if( indicador!='C' )
         {
            if( nivel=='P' )
            {
               primariaIncompleta++;
            }
            else
            {
               if( nivel=='S' )
               {
                  secundariaIncompleta++;
               }
               else
               {
                  if( nivel=='T' )
                  {
                     terciariaIncompleta++;
                  }
                  else universidadIncompleta++;
               }
            }
         }
         if( sexo=='M' )
            sexos++;
      }
      prom = acum/c;
      acumtotal=acumtotal+acum;
      acum = 0;
      prome = pasarAString(prom);
      promedios = promedios+apellido+": "+prome+'\n';
      cout<<"Ingrese domicilio(en caso de espacio ingrese _): ";
      cin>>domicilio;
      cout<<"Tipo de vivienda: ";
      cin>>tipo;
      cout<<"Ingrese cantidad de integrantes: ";
      cin>>c;
   }
   promtotal = acumtotal/cantidad;
   sexos = 100/(cantidad/sexos);
   analfabetismo = 100/(cantidad/analfabetismo);
   cout<<"Completaron los estudios primarios: "<<endl<<datosprimaria<<endl;
   cout<<"El porcentaje de analfabetismo es: "<<analfabetismo<<endl;
   cout<<"El domicilio de la familia con mayor cantidad de integrantes es: "
         <<domiciliomax<<endl;
   cout<<"La edad promedio por familia es: "<<endl<<promedios<<endl;
   cout<<"La edad promedio de la ciudad es: "<<promtotal<<endl;
   cout<<"La cantidad de gente que no termino la primaria es: "
         <<primariaIncompleta<<endl;
   cout<<"La cantidad de gente que no termino la secundaria es: "
         <<secundariaIncompleta<<endl;
   cout<<"La cantidad de gente que no termino la terciaria es: "
         <<terciariaIncompleta<<endl;
   cout<<"La cantidad de gente que no termino la universidad es: "
         <<universidadIncompleta<<endl;
   cout<<"El porcentaje de hombres es de "<<sexos
         <<"% mientras que el de las mujeres es "<<100-sexos<<"%."<<endl;
   return 0;
}
