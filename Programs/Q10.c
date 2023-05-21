#include<stdio.h>

int changeArray(int n, int a[], int b[]);

int main()
{
	int n;
	scanf("%d", &n);

	int arr1[n], arr2[n];
	for(int i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }

	changeArray(n, arr1, arr2);

	for(int i=0; i<n; i++)
    {
        printf("%d ", arr2[i]);
    }

	return 0;
}

int changeArray(int n, int a[], int b[])
{
	for(int i=0; i<n; i++)
    {
        b[n-1-i]= a[i];
    }
}
