#include <iostream>
#include <fstream>
using namespace std;

//para generar el tamaño del arreglo
#define tamanio(a) (sizeof(a)/sizeof(a[0]));

int main()
{
    ofstream Archivodata;
    int b,i,j,k;
    int a[10]={1,2,3,4,5,6,7,8,9};
    
   

   
   i= 0;
   j= 10-1;
   cout << "Ingrese el elemento a buscar: ";
   cin >> b;
   cout << "\n";

    Archivodata.open("Binario",ios::out);
    Archivodata << "Arreglo { ";
    for(int y=0; y<10 ;y++)
    {
      Archivodata << a[y]  << ",";
    }
    Archivodata << " }";
    Archivodata << "\nElemento:  " << b << endl;

    Archivodata.close();
  do 
  { 
     k= (i+j)/2;
      if (a[k]<=b)
        i=k+1;
      if (a[k]>=b)
        j= k-1;
  }
   while (i<=j);
   if(b<=9 && b>=0)
   {
     cout<<"Tamaño del arreglo: "<<tamanio(a);
     cout<<"\nEl elemento esta en la posicion (vector): "<<a[k];
   }
   else
   {
     cout<<"Tamaño del arreglo: "<<tamanio(a);
     cout << "\nElemento no encontrado ";
   }
}