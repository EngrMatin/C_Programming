#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int x, y, a, b;
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d %d", &x, &y, &a, &b);
        int count=0;


        if((y-x)%(a+b)==0)
        {
            printf("%d\n", (y-x)/(a+b));
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
