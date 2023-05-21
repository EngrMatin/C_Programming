#include <stdio.h>

int getSquare(int x);

void main()
{
    int a;
    scanf("%d", &a);

    int ans= getSquare(a);
    printf("Square of %d is %d\n", a, ans);
}

int getSquare(int n)
{
    int s= n*n;
    return s;
}
