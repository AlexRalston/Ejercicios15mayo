/*Ejercicio 7: Pedir su nombre al usuario y 
devolver el número de vocales que hay. NOTA: Recuerda que debes utilizar punteros.*/

#include <iostream>




using namespace std;





int contarVocales(const char* nombre) {
    int contador = 0;

    while (*nombre != '\0') {
        char letra = *nombre;
        
        // Convertir la letra a minúscula para comparar las vocales
        letra = tolower(letra);

        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            contador++;
        }

        nombre++; // Avanzar al siguiente carácter del nombre
    }

    return contador;
}

int main() {
    char nombre[100];
    cout << "Ingrese su nombre: ";
    cin.getline(nombre, 100);

    int numVocales = contarVocales(nombre);

    cout << "El numero de vocales en su nombre es: " << numVocales << endl;

    return 0;
}
