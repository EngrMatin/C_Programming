#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d", &n);

        int evenc=0, oddc=0;
        for(int j=0; j<n; j++)
        {
            int a[n];
            scanf("%d", &a[j]);

            if(a[j]%2 != j%2)
            {
                if(j%2==0)
                {
                    evenc++;
                }
                else
                {
                    oddc++;
                }
            }
        }

        if(evenc==oddc)
        {
            printf("%d\n", evenc);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
