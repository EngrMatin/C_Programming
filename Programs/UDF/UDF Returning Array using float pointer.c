#include<stdio.h>
#include<stdlib.h>

float *makeCopy(int n, float in[]);

int main()
{
	int n;
	scanf("%d", &n);

	float a[n];
	for(int i=0; i<n; i++)
    {
        scanf("%f", &a[i]);
    }

    float *b = makeCopy(n, a);

    for(int i=0; i<n; i++)
    {
        printf("%f ", b[i]);
    }

	return 0;
}

float *makeCopy(int n, float in[])
{
    float *out= (float *) malloc(n*sizeof(float));

    for(int i=0; i<n; i++)
    {
        out[i]= in[i];
    }

    return out;
}


