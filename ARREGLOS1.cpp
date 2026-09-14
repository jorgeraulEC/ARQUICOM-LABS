#include <iostream>

int main() {

    // Declaracion de un arreglo con 20 elementos 

     int arreglo[20] = {1, 3 , 3 ,2 ,4, 1 , 2, 1, 1, 2, 3, 4, 3, 3, 2, 3, 1, 3, 3, 3};
     int numero1, numero2, numero3, numero4;
     numero1 = 0;
     numero2 = 0;
     numero3 = 0;
     numero4 = 0;
     for (int i=0; i < 20; i++) {
         if (arreglo[i] == 1) {
             numero1++;
         }
         if (arreglo[i] == 2) {
             numero2++;
         }
         if (arreglo[i] == 3) {
             numero3++;
         }
         if (arreglo[i] == 4) {
             numero4++; 
         }
     }

       std::cout << "el numero 1 se repite: " << numero1 << " veces" << std::endl;
       std::cout << "EL numero 2 se repite: " << numero2 << " veces" << std::endl;
       std::cout << "el numero 3 se repite: " << numero3 << " veces" << std::endl;
       std::cout << "EL numero 4 se repite: " << numero4 << " veces" << std::endl;








    return 0;
}