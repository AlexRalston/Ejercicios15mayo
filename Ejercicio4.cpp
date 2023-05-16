/*Ejercicio 4: Rellenar un arreglo con n números, 
posteriormente utilizando punteros determinar el menor elemento del vector.*/





#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingrese la longitud del vector: ";
    cin >> n;

    int vector[n];
    int* puntero = vector;

    cout << "Ingrese los " << n << " numeros del vector:\n";
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el valor correspondiente a la posicion [" << i << "]: ";
        cin >> *puntero;
        puntero++;
    }

    puntero = vector;

    cout << "El vector ingresado es: ";
    for (int i = 0; i < n; i++) {
        cout << *puntero << " | ";
        puntero++;
    }
    cout << endl;

    puntero = vector;

    int menor = *puntero;

    for (int i = 1; i < n; i++) {
        puntero++;

        if (*puntero < menor) {
            menor = *puntero;
        }
    }

    cout << "El menor elemento del vector es: " << menor << endl;

    return 0;
}
