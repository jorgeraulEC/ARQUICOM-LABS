#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()

int main(){

   int num = 10;
   int arreglo[10] = {0,1,2,3,4,5,6,7,8,9};

   // funcion para que los numeros aleatorios cambien cada vez
   srand(time(0));

   // usamos el algoritmo de Fisher-Yates

   for(int i = num-1 ; i>0 ; i--) {
         int j = rand() % (i + 1); // numero aleatorio entre 0 e i 

         // intercambio temporal
            int temp = arreglo[i];
            arreglo[i] = arreglo[j];
            arreglo[j] = temp;

   }

    // Mostramos el resultado
    for (int i = 0; i < num; i++) {
        std::cout << arreglo[i] << " " << std::endl;;
    }




    return 0;
}
