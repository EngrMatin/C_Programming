#include <stdio.h>

int main()
{
    long long n, d;
    scanf("%lld %lld", &n, &d);

    long long a[n+1], b[n+1], i;
    for(i=0; i<n; i++)
    {
        scanf("%lld", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        if((i+d)<n)
        {
            b[i]=a[i+d];
        }

        if((i+d)>=n)
        {
            b[i]=a[i-(n-d)];
        }

        printf("%lld ", b[i]);
    }
    return 0;
}
