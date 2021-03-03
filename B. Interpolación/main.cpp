#include <iostream>
using namespace std;

int main()
{

 int A[7]={1,2,3,4,5,6,7};

 int primero = 0;
 int ultimo = 7-1;
 int medio;
 int cont=0;
 int num=3;

 while(A[primero] != num && cont<=7 )
      {

       medio = primero + ((num - A[primero])*(ultimo-primero))/(A[ultimo]-A[primero]);


      if(A[medio]<num)

          primero = medio +1;

      else if(A[medio]>num)

          ultimo = medio-1;

      else
          primero = medio;

       cont++;

      }

 if(A[primero]==num)
    cout<<"ELEMENTO ENCONTRADO";

 else
   cout<<"ELEMENTO NO ENCONTRADO";

}
