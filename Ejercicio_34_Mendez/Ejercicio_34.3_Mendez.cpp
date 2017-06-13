
#include <iostream>
using namespace std;

int main() {
   int A, cero=0, cantpos=1, neg=0, c=0, ant;
   float pos=0;
   cout<<"Ingrese un valor de A:";
   cin>>A;
   while(ant!=A){
      ant=A;
      if (A>0){
         cantpos++;
         pos=pos+A;
      }
      else{
         if(A<0){
            neg=neg+A;
         }
         else cero++;
      }
      c++;
      cout<<"Ingrese un valor de A:";
      cin>>A;
   }
   pos=pos/cantpos;
   cout<<"La cantidad de ceros fue: "<< cero<<endl;
   cout<<"El promedio de positivos es: "<< pos<<endl;
   cout<<"La sumatoria de negativos es: "<< neg<<endl;
   return 0;
}
