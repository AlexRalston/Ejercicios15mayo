/*Ejercicio 8: Pedir una cadena de caracteres (string) al usuario, 
e indicar cuantas veces aparece la vocal a,e,i,o,u; en la cadena de caracteres. NOTA: Usar punteros.*/

#include <iostream>


using namespace std;

int contarVocales(const char* cadena) {
    int contador = 0;

    while (*cadena != '\0') {
        char letra = *cadena;
        
        // Convertir la letra a minúscula para comparar las vocales
        letra = tolower(letra);

        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            contador++;
        }

        cadena++; // Avanzar al siguiente carácter de la cadena
    }

    return contador;
}

int main() {
    char cadena[100];
    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(cadena, 100);

    int numVocales = contarVocales(cadena);

    cout << "El numero de vocales en la cadena es: " << numVocales << endl;

    return 0;
}
