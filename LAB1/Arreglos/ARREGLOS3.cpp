#include <iostream>
#include <cstdlib> 
using namespace std;

int main() {
    
    // inicializamos las variables a utilizar
    int Nveces;
    int cara1=0,cara2=0,cara3=0,cara4=0,cara5=0,cara6=0;
    srand(time(0));
    // int arreglo[6] = {1,2,3,4,5,6};

    cout << "cuantas veces quieres tirar el dado: ";
    cin >> Nveces;

    for (int i=0 ; i<Nveces ; i++){
        int numeroRandom = rand() % 6 +1;

        if (numeroRandom== 1) {
             cara1++;
         }
         if (numeroRandom == 2) {
             cara2++;
         }
         if (numeroRandom == 3) {
             cara3++;
         }
         if (numeroRandom == 4) {
             cara4++; 
            
         }
         if (numeroRandom == 5) {
             cara5++; 
            
         }
         if (numeroRandom == 6) {
             cara6++; 
            
         }
         
    }


    // imprimimos las veces
    cout << "cara 1 : " << cara1 << endl;
    cout << "cara 2 : " << cara2 << endl;
    cout << "cara 3 : " << cara3 << endl;
    cout << "cara 4 : " << cara4 << endl;
    cout << "cara 5 : " << cara5 << endl;
    cout << "cara 6 : " << cara6 << endl;


    return 0;
}
