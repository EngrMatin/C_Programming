#include <stdio.h>

int main()
{
    long long x, p=100, i=1, y=0;
    scanf("%lld", &x);

    while(p<x)
    {
        p=p+p*i/100;
        y++;
    }
    printf("%lld", y);

    return 0;
}
