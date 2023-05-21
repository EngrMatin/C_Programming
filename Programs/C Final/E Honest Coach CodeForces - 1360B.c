#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);

	for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d", &n);

        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        int temp;
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<n-1; k++)
            {
                if(a[k]>a[k+1])
                {
                    temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                }
            }
        }

        int ans=1e9;
        for(int i=1; i<n; i++)
        {
            if(ans>(a[i]-a[i-1]))
            {
                ans= a[i]-a[i-1];
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}
