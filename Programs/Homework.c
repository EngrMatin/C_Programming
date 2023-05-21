#include <stdio.h>

int main()
{
    int n, m, a, h, sum=0;
    scanf("%d %d", &n, &m);

    for(int i=1; i<=m; i++)
    {
        scanf("%d", &a);
        sum = sum+a;
    }
    h=n-sum;
    if(h<0)
    {
        printf("-1");
    }
    else
    {
        printf("%d", h);
    }

    return 0;
}
