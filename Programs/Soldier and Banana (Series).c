#include<stdio.h>

int main()
{
	int k, n, w, b, i;
	scanf("%d %d %d", &k, &n, &w);

	//b=(k+2*k+3*k+ ... +w*k) - n
	int sum=0;
	for(i=1; i<=w; i++)
    {
        sum=sum+i*k;
    }
    if(sum>n)
    {
        b=sum-n;
    }
    else
    {
        b=0;
    }
    printf("%d", b);

    return 0;
}

