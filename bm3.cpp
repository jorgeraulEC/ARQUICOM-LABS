#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

// definir la funcion 

float integral(int N){
    float resultado = 0;
    float h = 1.0/N;
    float suma1 = 0;
    for(int i =1 ; i<N ; i++ ){
        float x_i = i*h;
         suma1 = 4/(1+x_i*x_i) + suma1;
        resultado = (h/2)*(4 + 2 + 2*(suma1));
    }

    return resultado;

}

int main(){
    int N = 15;
    timespec t1,t2;   // IMPORTANTE 
   double tiempos[15];  // guardar los tiempos



    float resultado_real =  integral(N);

    for (int i =0 ; i<15 ; i++){

    clock_gettime( CLOCK_REALTIME, &t1);

    float resultado_real =  integral(N);

    clock_gettime( CLOCK_REALTIME, &t2);

    double segundos = (t2.tv_sec - t1.tv_sec) + ((double)(t2.tv_nsec - t1.tv_nsec) / 1e9);   //importante para calcular el tiempo correcto

    tiempos[i] = segundos;
    }



     cout<< "ARREGLO: " << endl;
    for (int i = 0 ; i<N ; i++)
    {
        cout << tiempos[i] << " ";
    }
       cout << endl; // <--- Este salto de línea elimina el '%' en Zsh


    return 0;
}

