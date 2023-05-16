/*Ejercicio 5: Pedir al usuario N números, almacenarlos en un arreglo dinámico posteriormente ordenar los números en orden ascendente 
y mostrarlos en pantalla. NOTA: Utilizar cualquier método de ordenamiento.*/

#include <iostream>

using  namespace std;

void ordenarArreglo(int* arreglo, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                // Intercambiar los elementos si están en el orden incorrecto
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Ingrese la cantidad de números: ";
    cin >> n;

    int* arreglo = new int[n]; // Crear un arreglo dinámico

    cout << "Ingrese los números:\n";
    for (int i = 0; i < n; i++) {
        cin >> arreglo[i]; // Almacenar los números en el arreglo
    }

    ordenarArreglo(arreglo, n); // Ordenar el arreglo en orden ascendente

    cout << "Arreglo ordenado en orden ascendente:\n";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " "; // Mostrar los números ordenados
    }
    cout << endl;

    delete[] arreglo; // Liberar la memoria del arreglo dinámico

    return 0;
}
