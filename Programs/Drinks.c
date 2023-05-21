#include<stdio.h>

int main()
{
	double n, p, i, sum=0;
	scanf("%lf", &n);

	for(i=1; i<=n; i++)
    {
        scanf("%lf", &p);
        sum=sum+p;
    }

    printf("%lf\n", (sum/n));
    return 0;
}
