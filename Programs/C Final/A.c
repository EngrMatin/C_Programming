#include<stdio.h>

int main()
{
	int n;

	x:
	scanf("%d", &n);

	while(n!=42)
    {
        printf("%d\n", n);
        goto x;
    }
    return 0;
}
