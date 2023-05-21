#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int mul;
    scanf("%d", &mul);

    int flag=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(ar[i]*ar[j]==mul)
            {
                flag=1;
            }
        }
    }
    if(flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
