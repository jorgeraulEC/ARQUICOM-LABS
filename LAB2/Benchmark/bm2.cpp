#include <iostream>
#include <time.h>
using namespace std;

// declaracion de la funcion 

int funcion1(int n){
    int resultado;
    for(int i =0 ; i<n ; i++){
        resultado = i*(i+1);
    }
    return resultado;

}

int main(){

   int n = 50;
   timespec t1,t2;

    // guardar los tiempos 
     double tiempos[50];

   // bucle para que guarde los tiempos

    for (int i =0 ; i<50 ; i++){

    clock_gettime( CLOCK_REALTIME, &t1);
        
    funcion1(n);
    
    clock_gettime( CLOCK_REALTIME, &t2);
    
    double segundos = (t2.tv_sec - t1.tv_sec) + ((double)(t2.tv_nsec - t1.tv_nsec) / 1e9); 

    tiempos[i] = segundos;
  
    }

    cout<< "los tiempos son " << endl;

    for (int i = 0 ; i<50 ; i++)
    {
        cout << tiempos[i] << " ";
    }
       cout << endl; // <--- Este salto de línea elimina el '%' en Zsh

    return 0;
}
