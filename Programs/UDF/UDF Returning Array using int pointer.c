#include<stdio.h>
#include<stdlib.h>

int *makeCopy(int n, int in[]);

int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int *b = makeCopy(n, a);

    for(int i=0; i<n; i++)
    {
        printf("%d ", b[i]);
    }

	return 0;
}

int *makeCopy(int n, int in[])
{
    int *out= (int *) malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
    {
        out[i]= in[i];
    }
    return out;
}

