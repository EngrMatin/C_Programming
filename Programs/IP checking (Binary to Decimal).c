#include <stdio.h>
#include <math.h>

int B_to_D(n)
{
    int r, d=0, i=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        d=d+r*pow(2,i);
        i++;
    }
    return d;
}

int main()
{
    int t;
    scanf("%d", &t);

    for(int j=1; j<=t; j++)
    {
        int d1, d2, d3, d4, b1, b2, b3, b4;
        scanf("%d.%d.%d.%d", &d1, &d2, &d3, &d4);
        scanf("%d.%d.%d.%d", &b1, &b2, &b3, &b4);

        if(d1==B_to_D(b1) && d2==B_to_D(b2) && d3==B_to_D(b3) && d4==B_to_D(b4))
        {
            printf("Case %d: Yes\n", j);
        }
        else
        {
            printf("Case %d: No\n", j);
        }
    }
    return 0;
}
