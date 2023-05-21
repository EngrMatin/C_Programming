#include <stdio.h>

void makeSum(int a, int b, int *sum);

void main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int sum;
    makeSum(a, b, &sum);

    printf("Sum= %d\n", sum);
}

void makeSum(int a, int b, int *sum)
{
    *sum= a+b;
}
