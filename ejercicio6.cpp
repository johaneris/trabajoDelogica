/*Hacer un programa que sume los números pares comprendidos entre 
100 y 200.
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int suma=0;  
    for(int i = 100; i <= 200; i++){
        if(i % 2 == 0);
        suma += i;
        cout << i << endl;
    }
    cout << "La suma de los numeros pares es: " << suma << endl;
    return 0;
}