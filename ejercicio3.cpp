 /*Escriba el programa para calcular la suma de los cuadrados de los 
números entre 1 y 100.*/

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int suma=0;
    int cuadrado;  
   
    for(int i = 1; i <= 100; i++){
         cuadrado=pow(i, 2);
         suma += cuadrado;
         cout << "El cuadrado de "<< i << "=" << cuadrado << endl;
         cout << "la suma de los cuadrados del 1 al 100 es: " <<suma<<endl;
        }
        return 0;  
    }
  
