#include<stdio.h>

int main()
{
	long long x, ans=0;
	scanf("%lld", &x);

	while(x>0)
    {
        ans=ans+x%2;
        x=x/2;
    }
    printf("%lld\n", ans);

	return 0;
}
