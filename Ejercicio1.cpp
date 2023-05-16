/*Ejercicio 1: Comprobar si un número es par o impar,
 y señalar la posición de memoria donde se está guardando el número. Con punteros.*/

 #include<iostream>


 using namespace std;


 void comprobarParImpar(int* numero){ //Creamos una funcion que no devuelve nada para comprobar cada numero si es par o impar cuando 
 //se llame a dicha función
    if(*numero % 2 == 0){ //Si la operacion modulo de 2 es igual a 0

        cout<<"El numero es par."<<endl; // el numero es par
    }
    else{

        cout<<"El numero es impar."<<endl; //En cualquier otro caso, no.
    }

 }

 int main(){ //Programa principal

    int numero; //Declaracion de variable para almacenar el numero 
    cout<<"Ingrese un numero: "; //Salida de datos para preguntar al usuario por un numero
    cin>> numero; //Entrada de datos


    int* puntero = new int(numero); //Crea dinamicamente un entero en el heap y devuelve un puntero a esa ubicacion de memoria.


    comprobarParImpar(puntero); //Llamada a la funcion para comprobar si el numero es par o impar, es decir, cuando se ejecute, volverá a la linea de codigo 10.

    cout<<"La posicion de memoria donde se guarda el numero es: "<<endl; //Devuelve la posicion de memoria donde se guarda el numero

    delete puntero; //Libera la memoria anteriormente asignada.
 }

