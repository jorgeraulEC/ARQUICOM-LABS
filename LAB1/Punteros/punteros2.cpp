#include <iostream>
#include <cstdlib>
using namespace std;

// creacion de la funcion que invierte los elementos del arreglo usando punteros

void invertir( int *arreglo , int N)
{
        for(int v=0 ; v<(N/2) ; v++)

        {
            // hacemos el swap con los 3 pasos conocidos 
            int temp = *(arreglo + v);              
            *(arreglo + v) = *(arreglo + (N - 1 - v));  // "N-1-v" sirve para expresar los ultimos terminos
            *(arreglo + (N - 1 - v)) = temp;
        
        }

}



int main (){

        // crearemos un arreglo con numeros aleatorios que tenga por ahora 10 elementos
        int N = 10;
        int arreglo[10];

        for (int i=0; i<N; i++)
        {   
            arreglo[i]= rand() % (10);

        }


        // primera impresion
        cout << "Antes:\n ";
        for (int i = 0; i < N; i++) {
        cout << arreglo[i] << " ";
        cout << endl;
        }


        // llamamos a la funcion 
         invertir( arreglo , N);


        // segunda impresion
        cout << "Despues:\n ";
        for (int i = 0; i < N; i++) { 
        cout << arreglo[i] << " ";
        cout << endl;
         }


    return 0;
}
