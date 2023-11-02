#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int algo(int n)
{
    printf("Valor de n dentro de algo = %d\n", n + 100);
    return 0;
}

int otracosa(int *n)
{
    *n = *n % 100;
    printf("Valor de n dentro de algo = %d\n", *n);
    return 0;
}


int main()
{
    int u = 3;
    int v;
    int *pu, *pv;

    pu = &u;
    v = *pu;
    pv = &v;

    printf("\nu = %d    &u = %X     pu = %X     *pu = %d", u, &u, pu, *pu);
    std::cout << "\nu = " << u << " &u = " << &u << " pu = " << pu << " *pu = " << *pu ;
    printf("\nv = %d    &v = %X     pv = %X     *pv = %d", v, &v, pv, *pv);

    int n = 500;
    printf("\nValor de n afuera = %d\n", n);
    u = algo(n);
    printf("\nValor de n afuera = %d\n", n);
    u = otracosa(&n);
    printf("\nValor de n afuera = %d\n", n);
}