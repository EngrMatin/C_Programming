#include <stdio.h>

int main()
{
    int x = 10;

    printf("Value of x is %d\n", x);
    printf("Address of x is %p\n", &x);
    printf("Address of x is %lld\n", &x);

    int n = 25;
    int *pn;   //data type of pointer should be same as variable
               // *pn means "content of pn"
    pn = &n;

    printf("\nValue of n is %d\n", n);
    printf("Value of pn is %p\n", pn);
    printf("Value of pn is %lld\n", pn);
    printf("Value of *pn is %d\n", *pn);
    printf("Address of n is %p\n", &n);
    printf("Address of n is %lld\n", &n);

    printf("\n n=   %d\n", n);
    printf(" &n=  %d\n", &n);
    printf(" *&n= %d\n", *&n);

    return 0;
}


