#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n = 100, i, maximo = 0;
    int valor;
    int A[n];
    srand(time(0));
    for (i = 0; i < n; i++)
    {
        valor = 1000 + rand();
        A[i] = valor;
    }
    int minimo = A[0];
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);        
    }

    for (i = 0; i < n; i++)
    {
        if (A[i] > maximo)
        {
            maximo = A[i];
        }

        if (A[i] < minimo)
        {
            minimo = A[i];
        }
    }
    printf("El maximo elemento es: %d; El minimo es: %d\n", maximo, minimo);
    //printf("%d\n", A);
    //printf("%d\n", A[200]);
    //printf("%.4f %d\n", A[0], A[0]);

    return 0;
}