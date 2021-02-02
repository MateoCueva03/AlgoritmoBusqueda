#include <iostream>
#include<fstream>
using namespace std;
int busqueda(int arr[], int t, int dato);
int solicitarNumero();
char r;
int main() {
  ofstream archivoprueba;
  archivoprueba.open("lineal.txt",ios::out);
  archivoprueba<<"El arreglo de elementos es: "<<"1,2,3,4,5"<<endl;
  do
  {
  int a[5]={1,2,3,4,5};
  int dato=solicitarNumero();

   if(busqueda(a,5,dato)==6)
  {
    cout<<"ELEMENTO NO ENCONTRADO";
    archivoprueba<<"El numero "<<dato<<" no se encontro"<<endl;


  }
  else
  {
    cout<<"ELEMENTO ENCONTRADO EN LA POSICIÓN "<<busqueda(a,5,dato)<<endl;
    archivoprueba<<"El numero "<<dato<<" Esta en la posicion "<<busqueda(a,5,dato)<<endl;
  }

  cout<<endl<<"Desea ingresar otro numero [s/n] "<<endl;

    cin>>r;
    cin.ignore();
  } while(r=='s');
  cout<<"Adios"<<endl;
  archivoprueba.close();
}
////////////////////////////////////////busqueda////////
int busqueda(int arr[], int t, int dato)
{
  int i;

  for( i=0 ; i<5 ; i++)
  {

    if(arr[i]==dato)
    {
      return i;
    }
  }

  return 6;
}
/////////////solicita//////////////
int solicitarNumero()
{
  int n;
  cout<<"ingresa el número:";
  cin>>n;
  return n;
}
