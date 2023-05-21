#include <stdio.h>

void makeNArray(int n, int squares[]);

void main()
{
    int n, squares[n];
    scanf("%d", &n);

    makeNArray(n, squares);
}

void makeNArray(int n, int squares[])
{
    for(int i=0; i<n; i++)
    {
        squares[i]=(i+1)*(i+1);
    }

    printf("The square of first %d natural number is ", n);
    for(int i=0; i<n; i++)
    {
        printf("%4d", squares[i]);
    }
}
