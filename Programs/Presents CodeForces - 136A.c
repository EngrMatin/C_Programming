#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    int a[n+1], af[n+1];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
        af[a[i]]=i;
    }

    for(i=1; i<=n; i++)
    {
        printf("%d ", af[i]);
    }

    return 0;
}
