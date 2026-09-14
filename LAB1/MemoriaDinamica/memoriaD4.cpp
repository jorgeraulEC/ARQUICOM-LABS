#include <iostream>
#include <cstdlib> // Para rand() y srand()
using namespace std;


void SEPARAR_NUMEROS (int X , int N , char *arr)
{
            // inicializamos el arreglo
           char *espacio1 = (char*)calloc(N+1, sizeof(char));  
           char *espacio2 = (char*)calloc(N+1, sizeof(char));  


    for(int i =0 ; i<N ; i++)
    {     
            // guardamos los elementos en sus respecticos espacios respecto a X
            if (i < X)
            {
                espacio1[i] = *(arr + i);
            }

            if (i>=X)
            {
                espacio2[i] = *(arr+i);
            }
            
    }

         cout<< "\nESPACIO 1 : " << endl;
    for (int i = 0 ; i<X ; i++)
    {
        cout << espacio1[i] << " ";
    }
       cout << endl; 


        cout<< "\nESPACIO 2 : " << endl;
    for (int i = X ; i<N ; i++)
    {
        cout << espacio2[i] << " ";
    }
       cout << endl; 


}


int main(int argc, char *argv[]) {

    int X = atoi(argv[1]);    // para enteros
   
    int N = 9; // Hola coco 
    char *arr = (char*)calloc(N+1, sizeof(char));  

    // definir letras arr[6] = 0
    arr[0] = 'H';
    arr[1] = '0';
    arr[2] = 'L';
    arr[3] = 'A';
    arr[4] = ' ';
    arr[5] = 'C';
    arr[6] = 'O';
    arr[7] = 'C';
    arr[8] = 'O';




    // print antes del espacio

     cout<< "ARREGLO: " << endl;
    for (int i = 0 ; i<N ; i++)
    {
        cout << arr[i] << " ";
    }
       cout << endl; 



     SEPARAR_NUMEROS (X , N , arr);





    return 0;
}
