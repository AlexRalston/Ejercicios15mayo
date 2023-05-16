/*Ejercicio 10: Realice un programa que lea una matriz dinámica de NxM y cree su matriz traspuesta. 
Nota: La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.*/


#include <iostream>

using namespace std;

// Función para crear una matriz dinámica e ingresar elementos
int** crearYIngresarMatriz(int filas, int columnas) {
    int** matriz = new int*[filas];

    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
        for (int j = 0; j < columnas; j++) {
            cout << "Introduzca el valor correspondiente a la posicion[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    return matriz;
}

// Función para crear la matriz traspuesta
int** crearMatrizTraspuesta(int** matriz, int filas, int columnas) {
    int** traspuesta = new int*[columnas];

    for (int i = 0; i < columnas; i++) {
        traspuesta[i] = new int[filas];
        for (int j = 0; j < filas; j++) {
            traspuesta[i][j] = matriz[j][i];
        }
    }

    return traspuesta;
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

    cout << "Ingrese el numero de filas: ";
    cin >> filas;

    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    int** matriz = crearYIngresarMatriz(filas, columnas);

    int** traspuesta = crearMatrizTraspuesta(matriz, filas, columnas);

    cout << "La matriz traspuesta es:\n";
    mostrarMatriz(traspuesta, columnas, filas);

    liberarMatriz(matriz, filas);
    liberarMatriz(traspuesta, columnas);

    return 0;
}
