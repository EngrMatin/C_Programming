#include<stdio.h>

int main()
{
	int t, k[110], i, j, count=0;
	scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%d", &k[i]);
    }

    for(j=1; j<=2000; j++)
    {
        if(j%3==0 || j%10==3)
        {
            continue;
        }
        count++;
        for(i=1; i<=t; i++)
        {
            if(count==k[i])
            {
                printf("%d\n", j);
            }
        }
    }
    return 0;
}

