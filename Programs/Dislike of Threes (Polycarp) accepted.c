#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        int k, last=0, count=0;
        scanf("%d", &k);

        for(int j=1; count<k; j++)
        {
            if(j%3==0 || j%10==3)
            {
                continue;
            }
            else
            {
                count++;
                last=j;
            }
        }
        printf("%d\n", last);
    }
    return 0;
}

