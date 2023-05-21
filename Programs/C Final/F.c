#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int x;
	scanf("%d", &x);

	int ans=1;
	for(int i=1; i<=n; i++)
    {
        if(ans*2 <= ans+x)
        {
            ans= ans*2;
        }
        else
        {
            ans= ans+x;
        }
    }

    printf("%d\n", ans);

    return 0;
}
