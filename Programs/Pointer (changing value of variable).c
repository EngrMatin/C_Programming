#include <stdio.h>

int main()
{
    int n = 25;
    int *pn;

    pn = &n;

    printf("Value of n is %d\n", n);
    printf("Value of *pn is %d\n", *pn);
    printf("Value of pn is %p\n", pn);
    printf("Value of pn is %lld\n", pn);
    printf("Address of n is %p\n", &n);
    printf("Address of n is %lld\n", &n);

    *pn = 40;
    printf("\nValue of n is %d\n", n);
    printf("Value of *pn is %d\n", *pn);
    printf("Value of pn is %p\n", pn);
    printf("Value of pn is %lld\n", pn);
    printf("Address of n is %p\n", &n);
    printf("Address of n is %lld\n", &n);

    n = 50;
    printf("\nValue of n is %d\n", n);
    printf("Value of pn is %p\n", pn);
    printf("Value of pn is %lld\n", pn);
    printf("Value of *pn is %d\n", *pn);
    printf("Address of n is %p\n", &n);
    printf("Address of n is %lld\n", &n);

    int x = 75;
    pn = &x;
    printf("\nValue of n is %d\n", n);
    printf("Value of x is %d\n", x);
    printf("Value of *pn is %d\n", *pn);
    printf("Value of pn is %p\n", pn);
    printf("Value of pn is %lld\n", pn);
    printf("Address of x is %p\n", &x);
    printf("Address of x is %lld\n", &x);
    printf("Address of n is %p\n", &n);
    printf("Address of n is %lld\n", &n);


    return 0;
}
    // n = 100 is same as *pn = 100
