#include <iostream>
using namespace std;

int main() {
    int notas[8]; 
    int aprobados; 
    int reprobados; 
    float suma = 0; 
   
    for (int i = 0; i < 8; ++i) {
        cout << "Ingrese la nota del estudiante: "; 
        cin >> notas[8];
        suma += notas[8]; 

     
        if (notas[8] >= 70) {
            aprobados++; 
        } else {
            reprobados++;
        }
    }

    float promedio = suma / 8; 

    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0; 
}