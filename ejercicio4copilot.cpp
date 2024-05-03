#include <iostream>
using namespace std;
int main() {
    int notas[10]; // Array para almacenar las notas de los 10 estudiantes
    int suma = 0; // Variable para calcular la suma de las notas
    float promedio; // Variable para calcular el promedio

    // Pedir las notas de los 10 estudiantes
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese la nota del estudiante " << (i + 1) << ": ";
        cin >> notas[i];
        suma += notas[i]; // Sumar la nota actual a la suma total
    }

    // Calcular el promedio
    promedio = static_cast<float>(suma) / 10;

    // Mostrar el promedio general
    cout << "El promedio general de la sección es: " << promedio << endl;

    return 0;
}
