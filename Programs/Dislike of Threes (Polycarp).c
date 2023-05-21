#include<stdio.h>

int main()
{
	int t, i, j;
	scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        int k[110], last=0, count=0;
        scanf("%d", &k[i]);

        for(j=1; count<k[i]; j++)
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

