#include<iostream>


using namespace std;



bool esPrimo(int numero){


    if(numero <= 1){


        return false;
    }


    for(int i=2; i*i <= numero;i++){


        if(numero % i == 0){

            return false;
        } 

    }


    return false;

}

    int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    int* puntero = &numero;
    bool primo = esPrimo(*puntero);

    if (primo) {
        cout << "El numero es primo." << endl;
    } else {
        cout << "El numero no es primo." << endl;
    }

    cout << "La posicion de memoria donde se guarda el numero es: " << puntero << endl;

    return 0;





}