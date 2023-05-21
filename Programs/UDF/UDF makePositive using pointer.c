#include <stdio.h>

void makePositive(int *a);

void main()
{
    int a = -10;

    //int ans;
    makePositive(&a);
    printf("%d", a);
}

void makePositive(int *a)
{
    if (*a<0)
    {
        *a= -*a;
    }
    //return a;
}
