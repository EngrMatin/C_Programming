#include<stdio.h>
int main()
{
	int a, b, c, empty=0,remaining=0;
	scanf("%d %d %d", &a, &b, &c);

    empty=a-b;
    if(empty<=c)
    {
        remaining=c-empty;
        printf("%d", remaining);
    }
    else
    {
        printf("%d", remaining);
    }
}
