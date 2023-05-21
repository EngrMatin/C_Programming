#include <stdio.h>

int main()
{
    int i, n, a[100001];
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int q;
    scanf("%d", &q);

    for(int j=1; j<=q; j++)
    {
        int x, y, sum=0;
        scanf("%d %d", &x, &y);

        for(i=x; i<=y; i++)
        {
            sum=sum+a[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}
