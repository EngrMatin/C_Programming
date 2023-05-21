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
        while(x<=y)
        {
            x=x+a;
            y=y-b;
            count++;
            if(x==y)
            {
                break;
            }
        }

        if(x==y)
        {
            printf("%d\n", count);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
