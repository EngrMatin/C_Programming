#include<stdio.h>

void makeCopy(int n, int in[], int out[]);

int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int b[n];
    makeCopy(n, a, b);

    for(int i=0; i<n; i++)
    {
        printf("%d ", b[i]);
    }

	return 0;
}

void makeCopy(int n, int in[], int out[])
{
    for(int i=0; i<n; i++)
    {
        out[i]= in[i];
    }
}

