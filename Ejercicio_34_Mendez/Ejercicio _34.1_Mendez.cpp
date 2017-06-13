
#include <iostream>
using namespace std;

int main() {
   int A, cero=0, cantpos=1, neg=0;
   float pos=0;
   for (int i=0;i<167;i++){
      cout<<"Ingrese un valor de A:";
      cin>>A;
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
   }
   pos=pos/cantpos;
   cout<<"La cantidad de ceros fue: "<< cero<<endl;
   cout<<"El promedio de positivos es: "<< pos<<endl;
   cout<<"La sumatoria de negativos es: "<< neg<<endl;
	return 0;
}
