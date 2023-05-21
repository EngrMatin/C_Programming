#include <stdio.h>

void makeEqualToAverage(int *a, int *b);

void main()
{
    int a= 10, b= 20;

    makeEqualToAverage(&a, &b);
    printf("%d %d", a, b);
}

void makeEqualToAverage(int *a, int *b)
{
    int avg= (*a+*b)/2;
    *a= *b= avg;
}
