#include<stdio.h>
int main()
{
	int x, n, p[100], unspent[100], sum=0, remaining=0, i;
	scanf("%d", &x);
	scanf("%d", &n);

	for(i=1; i<=n; i++)
    {
        scanf("%d", &p[i]);
    }
    for(i=1; i<=n; i++)
    {
        unspent[i] = x - p[i];
        sum=sum+unspent[i];
    }

    remaining=x+sum;
    printf("%d\n", remaining);

}
