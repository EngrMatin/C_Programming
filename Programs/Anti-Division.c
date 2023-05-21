#include <stdio.h>

int main()
{
    long long a, b, c, d, i, count=0;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    for(i=a; i<=b; i++)
    {
        if(i%c!=0 && i%d!=0)
        {
            count++;
        }
    }
    printf("%lld", count);

    return 0;
}
