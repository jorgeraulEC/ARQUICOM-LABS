#include <iostream>
#include <cstdlib> // Para rand() y srand()
using namespace std;


void invertirLetras(int N , char *arr)
{
    // algoritmo para intercambiar letras
    for(int v=0 ; v<(N/2) ; v++)
        {
            // hacemos el swap con los 3 pasos conocidos 
            char temp = *(arr+ v);              
            *(arr + v) = *(arr + (N - 1 - v));  // "N-1-v" sirve para expresar los ultimos terminos     
            *(arr + (N - 1 - v)) = temp; 
        }
}



int main(){

    int N = 5; // "SOLOS" por ejemplo
    char *arr = (char*)calloc(N, sizeof(char));  

    // definir letras arr[6] = 0
    arr[0] = 'S';
    arr[1] = '0';
    arr[2] = 'M';
    arr[3] = 'O';
    arr[4] = 'S';


    // impresion ANTES del swap 

     cout<< "ARREGLO ANTES : " << endl;
    for (int i = 0 ; i<N ; i++)
    {
        cout << arr[i] << " ";
    }


    // llamamos a la funcion 
    invertirLetras(N , arr);
    
    
    // impresion DESPUES del swap 

     cout<< " \n ARREGLO DESPUES : " << endl;
    for (int i = 0 ; i<N ; i++)
    {
        cout << arr[i] << " ";
    }



    return 0;
}
