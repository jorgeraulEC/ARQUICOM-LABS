#include <iostream>
using namespace std;

int main (){

        // definimos 2 enteros
        int a = 10;
        int b = 20;


        // utilizamos el concepto de que "p" guarda la direccion de memoria de A pero "*p" guarda el valor de A . Lo mismo para B

        int *p = &a;
        int temp1 = *p;
        int nuevoB = temp1;

        int *pp = &b;
        int temp2 = *pp;
        int nuevoA = temp2;

        cout << "El nuevo valor de A sera "<< nuevoA << " y el nuevo valor de B sera " << nuevoB <<endl;


    return 0;
}