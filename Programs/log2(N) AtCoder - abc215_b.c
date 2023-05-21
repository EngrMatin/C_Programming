#include <stdio.h>
#include <math.h>

int main()
{
    long long n;
    scanf("%lld", &n);

    int log, i=0;
    while((long long)pow(2,i)<=n)
    {
        i++;
    }
    printf("%d\n", i-1);

    return 0;
}
