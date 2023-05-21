/* Program that sort an array using bubble sort in ascending order */

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

	int temp, count=0;
	for(int j=0; j<n-1; j++)
	{
		for(int k=0; k<n-1; k++)
		{
			if(a[k]>a[k+1])
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
				count++;
			}
		}
	}

	for(int i=0; i<n; i++)
	{
		printf("%d", a[i]);
		if(i != n-1)
        {
            printf(" ");
        }
	}
	printf("\nNo. of swap= %d\n", count);

	return 0;
}
