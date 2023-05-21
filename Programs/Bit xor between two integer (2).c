#include<stdio.h>
#include<string.h>

int main()
{
    unsigned int l, r;
    printf("Enter two integer values: ");
    scanf("%d %d", &l, &r);

    unsigned int xor=0;
    for(int i=l; i<=r; i++)
    {
        xor= xor ^ i;
    }
    printf("xor of all numbers between %d and %d= %d\n", l, r, xor);

    return 0;
}

