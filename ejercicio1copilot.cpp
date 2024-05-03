/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n*/

#include <iostream>
using namespace std;

int suma(int n){
    int sum =0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "la suma de los numeros naturales desde 1 es " << n << " es " << suma(n) << endl;
    return 0;
}

