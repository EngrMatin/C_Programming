#include<stdio.h>

int main()
{
	long long x, ans, bac=1;
	scanf("%lld", &x);

	while(bac<=x)
    {
        bac=bac*2;
    }
    bac=bac/2;
    //printf("bac= %lld\n", bac);

    ans=x-bac;
    //printf("ans= %lld\n", ans);
    ans++;
    printf("%lld\n", ans);

	return 0;
}
