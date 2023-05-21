#include <stdio.h>

int main()
{
    const int n = 25;
    int *pn;

    pn = &n;

    printf("Value of n is %d\n", n);
    printf("Value of pn is %p\n", pn);
    printf("Value of pn is %lld\n", pn);
    printf("Value of *pn is %d\n", *pn);
    printf("Address of n is %p\n", &n);
    printf("Address of n is %lld\n", &n);

    *pn = 40;
    printf("\nValue of n is %d\n", n);
    printf("Value of pn is %p\n", pn);
    printf("Value of pn is %lld\n", pn);
    printf("Value of *pn is %d\n", *pn);
    printf("Address of n is %p\n", &n);
    printf("Address of n is %lld\n", &n);

    return 0;
}

