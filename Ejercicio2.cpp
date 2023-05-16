/*Ejercicio 2: Determinar si un número es primo o no;
 con puteros y además indicar en que posición de memoria se guardo el número.
 */



#include<iostream>


using namespace std; 



bool esPrimo(int numero){ //funcion que devuelve true o false y que evalua un numero de tipo entero


    if(numero <= 1){ //Condicion, si el numero es menor o igual que 1...


        return false;//Devuelve false
    }


    for(int i=2; i*i <= numero;i++){ //Bucle que va contando desde el 2 hasta la raiz cuadrada del numero en cuestion


        if(numero % i == 0){ //Si se encuentra algun divisor retorna false

            return false;
        } 

    }


    return true; //En cualquier otro caso, retorna true.

}

    int main() { //Programa principal
    int numero; //Numero de tipo entero
    cout << "Ingrese un numero: "; //Salida de datos para ingresar un numero
    cin >> numero; //El usuario introduce un numero por pantalla

    int* puntero = new int(numero); //Asignamos una direccion de memoria a la variable puntero
    bool primo = esPrimo(*puntero); //Comprobamos si el numero almacenado en la variable puntero es primo o no mediante una llamada

    if (primo) { //Si el valor de primo es true
        cout << "El numero es primo." << endl; //Salida de datos para anunciar que es primo
    } else {
        cout << "El numero no es primo." << endl;//En cualquier otro caso, no es primo.
    }

    cout << "La posicion de memoria donde se guarda el numero es: " << puntero << endl; //La direccion de memoria donde se almacena el numero....
    delete puntero;
    return 0; //Programa principal retorna valor 0





}