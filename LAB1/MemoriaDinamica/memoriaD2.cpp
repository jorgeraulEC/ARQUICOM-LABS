#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <string.h>
using namespace std;

int main(){

    // hacemos que la cadena de texto sea un conjunto de caracteres en un arreglo 

    int N = 4; // "A B C D"
    char *arr = (char*)calloc(N+1, sizeof(char));

    for(int i=0 ; i<N; i++)
    {
        arr[i] = 'A' + i;
    }


    // calcular el tamaño de arreglo
    int N_manual = 0;
    while (arr[N_manual] != '\0')
    {
        N_manual++;
    }
    

    cout << "el tamaño hallado manualmente es : " << N_manual << endl;
    cout << "el tamaño hallado por comando es es : " << strlen(arr) << endl;


    return 0;
}
