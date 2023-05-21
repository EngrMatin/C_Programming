#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, m, p;
	scanf("%d %d", &a, &b);

	m=a-b;
	p=pow(32,m);

    printf("%lld", p);

    return 0;
}

