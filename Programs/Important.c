/* How many way that the sum of 3 integers between 1 to n is x */

#include <stdio.h>

int main()
{
    while(1)
    {
        int n, x;
        scanf("%d %d", &n, &x);

        if(n==0 && x==0)
        {
            break;
        }

        int count=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                for(int k=j+1; k<=n; k++)
                {
                    if(i+j+k==x)
                    {
                        count++;
                    }
                }
            }
        }
        printf("%d\n", count);
        break;
    }
    return 0;
}
