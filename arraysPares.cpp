#include<iostream>


using namespace std;



int main(){


int numeros[10];
int* puntero = numeros;



for(int i=0; i<10;i++){
   cout<<"Ingrese un numero, por favor: ";
   cin>> *(puntero + i);

}

cout<<"Numeros pares encontrados: "<<endl;


for(int i=0; i<10;i++){
  if(*(puntero+i) % 2 == 0){
    cout << "Numero par: " << *(puntero + i) << ", Posicion de memoria: " << (puntero + i) << endl;    
  }
}
 
return 0;

}