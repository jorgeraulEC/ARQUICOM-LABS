#include <iostream>
#include <cstdlib> // Para rand() y srand()
using namespace std;

int main(){

    // Asignar memoria para un arreglo de cuatro enteros

    int N = 26;
    char *arr = (char*)calloc(N, sizeof(char));  // cambiamos la notacion default de "int"  a "char" porque nos piden letras

    // asignar las letras al arreglo
    for (int i = 0 ; i<N ; i++)
    {
        arr[i] = 'A' + i;

    }

    // impresion

    cout<< "El arreglo de abecedario : " << endl;
    for (int i = 0 ; i<N ; i++)
    {
        cout << arr[i] << " ";

    }

    return 0;
}
