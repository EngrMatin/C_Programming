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

        int i=0, j=n-1, k=0;
        while(i<=j)
        {
            if(k%2==0)
            {
                printf("%d ", a[i]);
                i++;
            }
            else
            {
                printf("%d ", a[j]);
                j--;
            }
            k++;
        }
        printf("\n");
    }

    return 0;
}
