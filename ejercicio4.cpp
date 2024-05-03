
#include <iostream>
using namespace std;

int main() {
    int notas[10];
    float sumaNotas=0;

    for (int i = 0; i < 10; ++i) {
        cout << "Ingrese nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];
        sumaNotas += notas[i];
    }

    float promGeneral = sumaNotas / 10;
    cout << "El promedio general de la sección es " << promGeneral<<endl;

    return 0;
}