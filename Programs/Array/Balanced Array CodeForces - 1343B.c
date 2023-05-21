#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        int n;
        scanf("%d", &n);

        if(n/2 % 2 == 1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
            int arr[n],sum=0;
            for(int j=1, k=2; j<=n/2; j++, k=k+2)
            {
                arr[j]= k;
                sum= sum+arr[j];
            }

            for(int p=n/2 +1, q=1; p<=n-1; p++, q=q+2)
            {
                arr[p]= q;
                sum= sum-arr[p];
            }

            arr[n]= sum;
            for(int x=1; x<=n; x++)
            {
                if(x==1)
                {
                    printf("%d ", arr[1]);
                }
                else if(x==n)
                {
                    printf("%d ", arr[x]);
                }
                else
                {
                    printf("%d ", arr[x]);
                }
            }
        }
    }
    return 0;
}
