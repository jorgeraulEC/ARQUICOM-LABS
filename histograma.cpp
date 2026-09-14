#include <iostream>
#include <cstdlib>
#include <time.h>

void histograma1(int *datos,int N, int *hist, int max_value)
{
    for (int v = 0; v<(max_value+1);v++)
    {
        int count = 0;
        for (int i = 0; i<N; i++)
        {
            if (*(datos + i) == v)
            {
                count++;
            }
        }
        *(hist + v) = count;
    }
}

void histograma2(int *datos,int N, int *hist2, int max_value)
{
    for (int i = 0; i<N;i++)
    {
        int valor = *(datos + i);
        //*(hist2 + valor) = *(hist2 + valor) + 1;
        hist2[valor]++;
    }

}

int main()
{
    int N = 2048*4096*32;
    int *datos = (int*)calloc(N, sizeof(int));
    int max_value = 5;
    int *hist = (int*)calloc(max_value + 1, sizeof(int));
    int *hist2 = (int*)calloc(max_value + 1, sizeof(int));

    timespec t1,t2,t3,t4;

    for (int i = 0; i<N; i++)
    {
        *(datos + i) = rand() % (max_value+1);
        //datos[i] = rand() % max_value;
        //std::cout << *(datos + i)<< std::endl;
    }

    clock_gettime( CLOCK_REALTIME, &t1);

    histograma1(datos,N,hist,max_value);
    
    clock_gettime( CLOCK_REALTIME, &t2);
/*    std::cout << "Histograma 1"<< std::endl;

    for (int i = 0; i<(max_value+1); i++)
    {
        std::cout << *(hist+i)<< std::endl;
    }
*/
    clock_gettime( CLOCK_REALTIME, &t3);

    histograma2(datos,N,hist2,max_value);

    clock_gettime( CLOCK_REALTIME, &t4);

 /*   std::cout << "Histograma 2"<< std::endl;
    for (int i = 0; i<(max_value+1); i++)
    {
        std::cout << *(hist2+i)<< std::endl;
    }
*/

    double th1 = t2.tv_sec - t1.tv_sec;
    double th1n = t2.tv_nsec - t1.tv_nsec;
    double elapsed = th1 + th1n/1e9;
    std::cout << "Tiempo Histograma 1" << std::endl;

    std::cout << elapsed << std::endl;

    double th2 = t4.tv_sec - t3.tv_sec;
    double th2n = t4.tv_nsec - t3.tv_nsec;
    double elapsed2 = th2 + th2n/1e9;

    std::cout << "Tiempo Histograma 2" << std::endl;

    std::cout << elapsed2 << std::endl;


}