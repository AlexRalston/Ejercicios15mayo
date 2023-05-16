/*Ejercicio 6: Hacer una función para almacenar N números en un arreglo dinámico, posteriormente en otra función buscar un número en particular. ´
NOTA: Puedes utilizar cualquier método de búsqueda(Secuencial o Binaria)*/

#include <iostream>


using  namespace std;




int* crearVector(int n) {
    int* vector = new int[n]; // Crear un vector dinámico

    cout << "Ingrese los numeros:\n";
    for (int i = 0; i < n; i++) {
        cout<<"Introduzca el valor correspondiente a la posicion"<<"["<<i+1<<"]:";
        cin >> vector[i]; // Almacenar los números en el vector
    }

    return vector;
}

bool buscarNumero(int* vector, int n, int numero) {
    for (int i = 0; i < n; i++) {
        if (vector[i] == numero) {
            return true; // El número fue encontrado en el vector
        }
    }
    
    return false; // El número no fue encontrado en el vector
}

int main() {
    int n;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    int* vector = crearVector(n); // Crear el vector y almacenar los números

    int numero;
    cout << "Ingrese el numero a buscar: ";
    cin >> numero;

    bool encontrado = buscarNumero(vector, n, numero); // Buscar el número en el vector

    if (encontrado) {
        cout << "El numero " << numero << " fue encontrado en el vector.\n";
    } else {
        cout << "El numero " << numero << " no fue encontrado en el vector.\n";
    }

    delete[] vector; // Liberar la memoria del vector dinámico

    return 0;
}
