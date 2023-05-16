/*Ejercicio 6: Hacer una función para almacenar N números en un arreglo dinámico, posteriormente en otra función buscar un número en particular. ´
NOTA: Puedes utilizar cualquier método de búsqueda(Secuencial o Binaria)*/

#include <iostream>


using namespace std;




int* crearArreglo(int n) {
    int* arreglo = new int[n]; // Crear un arreglo dinámico

    cout << "Ingrese los numeros:\n";
    for (int i = 0; i < n; i++) {
        cin >> arreglo[i]; // Almacenar los números en el arreglo
    }

    return arreglo;
}

bool buscarNumero(int* arreglo, int n, int numero) {
    for (int i = 0; i < n; i++) {
        if (arreglo[i] == numero) {
            return true; // El número fue encontrado en el arreglo
        }
    }
    
    return false; // El número no fue encontrado en el arreglo
}

int main() {
    int n;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    int* arreglo = crearArreglo(n); // Crear el arreglo y almacenar los números

    int numero;
    cout << "Ingrese el numero a buscar: ";
    cin >> numero;

    bool encontrado = buscarNumero(arreglo, n, numero); // Buscar el número en el arreglo

    if (encontrado) {
        cout << "El numero " << numero << " fue encontrado en el arreglo.\n";
    } else {
        cout << "El numero " << numero << " no fue encontrado en el arreglo.\n";
    }

    delete[] arreglo; // Liberar la memoria del arreglo dinámico

    return 0;
}
