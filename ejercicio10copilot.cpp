#include <iostream>
#include <vector>

using namespace std;

// Función para imprimir una matriz
void imprimirMatriz(vector<vector<int>> matriz) {
    for (int i = 0; i < matriz.size(); i++) {
        for (int j = 0; j < matriz[i].size(); j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Función para calcular la transposición de una matriz
vector<vector<int>> transponerMatriz(vector<vector<int>> matriz) {
    vector<vector<int>> matrizTranspuesta(matriz[0].size(), vector<int>(matriz.size()));
    for (int i = 0; i < matriz.size(); i++) {
        for (int j = 0; j < matriz[i].size(); j++) {
            matrizTranspuesta[j][i] = matriz[i][j];
        }
    }
    return matrizTranspuesta;
}

int main() {
    int filas, columnas;
    cout << "Ingrese el número de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el número de columnas de la matriz: ";
    cin >> columnas;

    vector<vector<int>> matriz(filas, vector<int>(columnas));
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "Matriz original:" << endl;
    imprimirMatriz(matriz);

    vector<vector<int>> matrizTranspuesta = transponerMatriz(matriz);
    cout << "Matriz transpuesta:" << endl;
    imprimirMatriz(matrizTranspuesta);

    return 0;
}