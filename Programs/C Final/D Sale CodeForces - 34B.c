#include<stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

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

    int ans=0;
    for(int i=0; i<m; i++)
    {
        if(a[i]<0)
        {
            ans=ans+(-a[i]);
        }
    }

    printf("%d\n", ans);

    return 0;
}
