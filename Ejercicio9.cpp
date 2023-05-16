#include <iostream>
/*Ejercicio 9: Realice un programa que calcule la suma de dos matrices dinámicas.*/


using  namespace std;
// Función para crear una matriz dinámica e ingresar elementos
int** crearYIngresarMatriz(int filas, int columnas) {
    int** matriz = new int*[filas];

    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
        for (int j = 0; j < columnas; j++) {
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    return matriz;
}

// Función para sumar dos matrices
int** sumarMatrices(int** matriz1, int** matriz2, int filas, int columnas) {
    int** suma = new int*[filas];

    for (int i = 0; i < filas; i++) {
        suma[i] = new int[columnas];
        for (int j = 0; j < columnas; j++) {
            suma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    return suma;
}

// Función para mostrar una matriz
void mostrarMatriz(int** matriz, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Función para liberar la memoria de una matriz
void liberarMatriz(int** matriz, int filas) {
    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }

    delete[] matriz;
}

int main() {
    int filas, columnas;

    cout << "Ingrese el número de filas: ";
    cin >> filas;

    cout << "Ingrese el número de columnas: ";
    cin >> columnas;

    int** matriz1 = crearYIngresarMatriz(filas, columnas);
    int** matriz2 = crearYIngresarMatriz(filas, columnas);

    int** matrizSuma = sumarMatrices(matriz1, matriz2, filas, columnas);

    cout << "La suma de las matrices es:\n";
    mostrarMatriz(matrizSuma, filas, columnas);

    liberarMatriz(matriz1, filas);
    liberarMatriz(matriz2, filas);
    liberarMatriz(matrizSuma, filas);

    return 0;
}
