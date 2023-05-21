#include <stdio.h>

int getGCD(int p, int q);
int getGcdMulti(int n, int value[]);

void main()
{
    int n=10, value[10];
    for(int i=0; i<10; i++)
    {
        scanf("%d", &value[i]);
    }

    int ans;
    ans = getGcdMulti(n, value);

    printf("GCD= %d\n", ans);
}

int getGCD(int x, int y)
{
    while(x%y!=0)
		{
			int g=x%y;
			x=y;
			y=g;
		}
    return y;
}

int getGcdMulti(int n, int value[])
{
    int gcd= value[0];
    for(int i=0; i<10; i++)
    {
        gcd= getGCD(value[i], gcd);
    }
    return gcd;
}
