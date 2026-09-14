#include <iostream>
#include <cstdlib> // Para rand() y srand()
using namespace std;

int sumarElementos(int *arreglo , int N)
{
    int suma = 0;
    for(int v =0 ; v < N ; v++)
    {   
    
        suma = suma + arreglo[v];
    //  suma = suma + *(arreglo + v ) ; es otra forma


    }
    return suma;

}



int main(){

  
    // creamos el arreglo , usaremos 10 elementos 

    int N=10;
    int arreglo[N];

    for(int i=0 ; i<N ; i++)
    {
        arreglo[i] = rand() % 10;

    }


    // impresion del arreglo y luego su suma 

    cout << "El arreglo es" <<endl;

    for(int i=0 ; i<N ; i++)
    {
        cout << arreglo[i] << endl;

    }


   int resultado = sumarElementos(arreglo , N);

    cout << "La suma es : " << resultado << endl;



    return 0;
}
