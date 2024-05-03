/* Desarrolla un programa que solicite al usuario ingresar dos vectores de igual longitud y luego calcule la suma de ambos vectores.El 
resultado debe mostrarse en un tercer vector*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;

    int vector1[n], vector2[n], vector3[n];

    cout << "Ingrese los valores del primer vector: " << endl; 
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> vector1[i];
    }

    cout << "Ingrese los valores del segundo vector: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> vector2[i];
        vector3[i] = vector1[i] + vector2[i];
        }

      cout << "El tercer vector es: ";
    for (int i = 0; i < n; i++) {
        cout << vector3[i] << " ";
     return 0;
}
}