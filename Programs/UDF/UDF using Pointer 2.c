#include <stdio.h>

void Swap(int *a, int *b);

int main()
{
    int a = 15, b = 40;

    Swap(&a, &b);
    printf("a= %d  b= %d", a, b);

    return 0;
}

void Swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

