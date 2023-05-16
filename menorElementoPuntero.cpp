/*Ejercicio4:Rellenar un arreglo con n númneros, posteriormente utilizando punteros
, posteriormente utilizando punteros determinar el menor elemento del vector.*/

#include <iostream>


using namespace std;



int main() {

    int n;

    cout << "Ingrese el tamaño del arreglo: "; //Salida de datos preguntando por el tamaño del array.
    cin >> n; //Datos entrantes del usuario.

    int arreglo[n];//Declaracion arreglo de tamaño variable. 
    int* puntero = arreglo; // Inicializar el puntero al arreglo.

    cout << "Ingrese los " << n << " números del arreglo:\n";
    for (int i = 0; i < n; i++) {
        cin >> *puntero; // Guardar el valor en la posición apuntada por el puntero.
        puntero++; // Avanzar el puntero a la siguiente posición del arreglo.
    }

    puntero = arreglo; // Reiniciar el puntero al inicio del arreglo.

    int menor = *puntero; // Inicializar el valor menor con el primer elemento del arreglo.

    for (int i = 1; i < n; i++) {
        puntero++; // Avanzar el puntero a la siguiente posición del arreglo.

        if (*puntero < menor) {
            menor = *puntero; // Actualizar el valor menor si se encuentra un número menor.
        }
    }

    cout << "El menor elemento del arreglo es: " << menor << endl; //Salida de datos mostrando el menor elemento del arreglo.

    return 0;
}
