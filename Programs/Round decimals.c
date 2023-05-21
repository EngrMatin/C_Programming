#include<stdio.h>

int main()
{
	float n, r;
	scanf("%f", &n);

	int i, p;
	i=(int)n;
	r=n-i;

	if(r>=0.5)
    {
        p=ceil(n);
    }
    else
    {
        p=floor(n);
    }

	printf("%d", p);

    return 0;
}

