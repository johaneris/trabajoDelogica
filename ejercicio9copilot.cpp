#include <iostream>
#include <vector>

using namespace std;

// Función para mostrar una matriz
void mostrarMatriz(const vector<vector<int>>& matriz) {
    for (const auto& fila : matriz) {
        for (int valor : fila) {
            cout << valor << "\t";
        }
        cout << endl;
    }
}

// Función para multiplicar dos matrices
vector<vector<int>> multiplicarMatrices(const vector<vector<int>>& matriz1, const vector<vector<int>>& matriz2) {
    int filas1 = matriz1.size();
    int columnas1 = matriz1[0].size();
    int filas2 = matriz2.size();
    int columnas2 = matriz2[0].size();

    // Crear una matriz resultado con dimensiones filas1 x columnas2
    vector<vector<int>> resultado(filas1, vector<int>(columnas2, 0));

    // Multiplicación de matrices
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            for (int k = 0; k < columnas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    return resultado;
}

int main() {
    int filas1, columnas1;
    int filas2, columnas2;

    cout << "Ingrese el número de filas de la primera matriz: ";
    cin >> filas1;
    cout << "Ingrese el número de columnas de la primera matriz: ";
    cin >> columnas1;

    cout << "Ingrese el número de filas de la segunda matriz: ";
    cin >> filas2;
    cout << "Ingrese el número de columnas de la segunda matriz: ";
    cin >> columnas2;

    // Verificar compatibilidad para la multiplicación de matrices
    if (columnas1 != filas2) {
        cout << "Las dimensiones de las matrices no son compatibles para la multiplicación." << endl;
        return 1;
    }

    // Leer la primera matriz
    vector<vector<int>> matriz1(filas1, vector<int>(columnas1));
    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas1; j++) {
            cin >> matriz1[i][j];
        }
    }

    // Leer la segunda matriz
    vector<vector<int>> matriz2(filas2, vector<int>(columnas2));
    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filas2; i++) {
        for (int j = 0; j < columnas2; j++) {
            cin >> matriz2[i][j];
        }
    }

    // Multiplicar matrices
    vector<vector<int>> resultado = multiplicarMatrices(matriz1, matriz2);

    cout << "La matriz resultante es:" << endl;
    mostrarMatriz(resultado);

    return 0;
}