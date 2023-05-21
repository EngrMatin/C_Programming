#include <stdio.h>

int getGCD(int p, int q);

void main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int ans= getGCD(a, b);
    printf("GCD of %d and %d is %d\n", a, b, ans);
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
