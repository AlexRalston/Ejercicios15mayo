/*Ejercicio 5: Pedir al usuario N números, almacenarlos en un arreglo dinámico posteriormente ordenar los números en orden ascendente 
y mostrarlos en pantalla. NOTA: Utilizar cualquier método de ordenamiento.*/

#include <iostream>

using  namespace std;

void ordenarVector(int* vector, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vector[j] > vector[j + 1]) {
                // Intercambiar los elementos si están en el orden incorrecto
                int temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    int* vector = new int[n]; // Crear un vector dinámico

    cout << "Ingrese los numeros:\n";
    for (int i = 0; i < n; i++) {
        cout<<"Introduzca el valor correspondiente a la posicion"<<"["<<i+1<<"]:";
        cin >> vector[i]; // Almacenar los números en el vector
    }

    ordenarVector(vector, n); // Ordenar el vector en orden ascendente

    cout << "Vector ordenado en orden ascendente:\n";
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " | "; // Mostrar los numeros ordenados
    }
    cout << endl;

    delete[] vector; // Liberar la memoria del vector dinámico

    return 0;
}
