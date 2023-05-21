#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int n[t], a[101];
    for(int i=1; i<=t; i++)
    {
        scanf("%d", &n[i]);

        for(int j=0; j<n[i]; j++)
        {
            scanf("%d", &a[j]);
        }
        for(int j=0; j<n[i]-2; j++)
        {
            int count=0;
            for(int k=j+1; k<j+2; k++)
            {
                if(a[j]!=a[k] && a[j+1]==a[k+1])
                {
                    printf("x=%d\n", k);
                    count++;
                }

                else if(a[j]!=a[k] && a[j+1]!=a[k+1])
                {
                    printf("y=%d\n", k+1);
                    count++;
                }

                else if(a[j]==a[k] && a[j+1]!=a[k+1])
                {
                    printf("z=%d\n", k+2);
                    count++;
                }

            }
            if(count != 0)
            {
                break;
            }
        }
    }
    return 0;
}
