/*Ejercicio 3: Rellenar un array de 10 números, 
posteriormente utilizando punteros indicar cuales son números pares y su posición en memoria.*/


#include<iostream>


using namespace std; //Evitamos escribir std:: en la E/S de datos



int main(){ //Programa principal


int* numeros =new int[10]; //Creamos un array dinámico de 10 posiciones
int* puntero = numeros; //Asignamos una direccion de memoria a dicho vector



for(int i=0; i<10;i++){ //Bucle que recorre el array añadiendo un valor introducido por el usuario a cada posicion
   cout<<"Ingrese un numero, por favor: ";
   cin>> *(puntero + i);

}

cout<<"Numeros pares encontrados: "<<endl; //Salida de datos


for(int i=0; i<10;i++){ //Bucle que itera para buscar aquellos numeros que sean pares, es decir, cuya operacion modulo de como resultado 0
  if(*(puntero+i) % 2 == 0){
    cout << "Numero par: " << *(puntero + i) << ", Posicion de memoria: " << (puntero + i) << endl;    //Salida de datos con el numero de par y la direccion de memoria asignada a dicho numero
  }
}
delete[] numeros; //Escribimos delete para evitar fugas de memoria a posterior
return 0; //El programa principal retorna valor 0

}