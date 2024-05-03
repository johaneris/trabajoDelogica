/* Diseña un programa que solicite al usuario ingresar dos matrices y 
luego realice la multiplicación de matrices. Asegúrate de que las 
dimensiones de las matrices sean compatibles para la multiplicación y 
muestra la matriz resultante. */

#include <iostream>
using namespace std;

int main() {
    int filas1, columnas1; 
    int filas2, columnas2; 

   
    cout << "Ingrese las dimensiones de la primera matriz (filas columnas): ";
    cin >> filas1 >> columnas1;

    int matriz1[filas1][columnas1];
    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas1; j++) {
            cout << "Elemento (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matriz1[i][j];
        }
    }

    cout << "Ingrese las dimensiones de la segunda matriz (filas columnas): ";
    cin >> filas2 >> columnas2;

    if (columnas1 != filas2) {
        cout << "Las dimensiones de las matrices no son compatibles para la multiplicación." << endl;
        return 0;
    }

    int matriz2[filas2][columnas2];
    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filas2; i++) {
        for (int j = 0; j < columnas2; j++) {
            cout << "Elemento (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matriz2[i][j];
        }
    }

    int matrizFinal[filas1][columnas2];
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            matrizFinal[i][j] = 0;
            for (int k = 0; k < columnas1; k++) {
                matrizFinal[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    cout << "La matriz resultante de la multiplicación es:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            cout << matrizFinal[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}