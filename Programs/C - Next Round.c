#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int a[101];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
        int score;
        for(int j=1; j<=n; j++)
        {
            if(j==k)
            {
                score=a[j];
            }
        }

        for(int m=1; m<=n; m++)
        {
            if(a[m]>=score)
            {
                printf("%d\n", m);
            }
        }
    return 0;
}
