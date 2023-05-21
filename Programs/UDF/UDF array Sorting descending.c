#include<stdio.h>

void bubbleSort(int n, int a[]);

int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	for(int i=0; i<n; i++)
		{
			scanf("%d", &a[i]);
		}

	bubbleSort(n, a);
	return 0;
}

void bubbleSort(int n, int a[])
{
    int temp;
	for(int j=0; j<n; j++)
	{
		for(int k=0; k<n-1; k++)
		{
			if(a[k]<a[k+1])
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
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
}
