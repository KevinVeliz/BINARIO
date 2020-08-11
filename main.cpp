#include <iostream>
#include <fstream>
using namespace std;
#define tamanio(a) (sizeof(a)/sizeof(a[0]));
//funciones
void escribir();
int menu(int);

int main() 
{
   int tam;
  char tip;
  float kil,pre;
  int op,x;
   do{
   switch (menu(op))
   {
    case 1:
    escribir();
    system("read -p 'Presiona Enter para continuar...' var"); 
    break;
    case 2:
    cout<<"------GRACIAS-----\n";
      x=2;
      system("read -p 'Presiona Enter para continuar...' var"); 
    break;
   }
system("clear");
  }while(x !=2);
}


int menu(int op)
{
  op= -1;
  while((op< 0) || (op>2)) 
  {
    cout<<"***************************"<<endl;
    cout<<"*  1- INGRESAR DATOS      *" << endl;
    cout<<"*  2- SALIR               *" << endl;
    cout<<"***************************"<<endl;
    cout<<"Digite la opción: ";
    cin>>op;
    if((op< 0) || (op> 2)) 
    {
      cout << "Opción no válida" << endl;
    }
  }
  return op;
}

void escribir()
{
  ofstream archivo;
  string nombreArchivo;
  int b,i,j,k;
  int a[]={1,2,3,4,5,6,7,8,9};
  int longitud=sizeof(a)/sizeof(*a);
 char r; 
  i=0;
  j=10-1;
   cout<<"INGRESA EL NOMBRE DEL ARCHIVO: ";
    cin.ignore();
    getline(cin,nombreArchivo);
    archivo.open(nombreArchivo.c_str(),ios::app);
      do
    {
      cout<<"INGRESE ELEMNTO A BUSCAR: ";
      cin>>b;
  do 
  {

  k=(i+j)/2;
  if (a[k]<=b)
  {
    i=k+1;
  }

  if(a[k]>=b)
  {
    j=k-1;
  }

  }while(i<=j);

  }while(r=='s');
  if (i==a[k] || j==a[k])
  {
      archivo<<"TAMANIO DEL ARREGLO: "<<longitud<<endl;
      archivo<<"ELEMENTO A BUSCAR: "<<b<<endl;
      cout<<" ELEMENTO ENCONTRADO EN: "<<a[k]<<endl;
      archivo<<" ELEMENTO ENCONTRADO EN LA POSICIÓN: "<<a[k]-1<<endl;
      //archivo<<a[k]<<endl;

  }
  else 
  {
    cout<<" ELEMENTO NO ENCONTRADO"<<endl;
    archivo<<" ELEMENTO NO ENCONTRADO"<<endl;
  }
  archivo.close();
}
