#include<stdio.h>

int main()
{
	int v, a, b, c;
	scanf("%d %d %d %d", &v, &a, &b, &c);

    if(v>=(a+b+c))
    {
        v=v%(a+b+c);
    }

    if(v<a)
    {
        printf("F");
    }
    else if(v<(a+b))
    {
        printf("M");
    }
    else if(v<(a+b+c))
    {
        printf("T");
    }

    return 0;
}

