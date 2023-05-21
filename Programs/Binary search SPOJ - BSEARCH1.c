#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n+1], q[k+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int j=0; j<k; j++)
    {
        scanf("%d", &q[j]);

        int p=0;
        for(int m=0; m<n; m++)
        {
            if(q[j]==a[m])
            {
                printf("%d\n", m);
                p=1;
                break;
            }
        }
        if(p!=1)
        {
            printf("-1\n");
        }
    }
    return 0;
}
