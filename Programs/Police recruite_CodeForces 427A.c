#include <stdio.h>

int main()
{
    int n,a,uc=0,sum=0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &a);
        if(a==-1)
        {
            if(sum>0)
            {
                sum=sum+a;
            }
            else
            {
                uc++;
            }
        }
        else
        {
            sum=sum+a;
        }
    }

    printf("%d", uc);
    return 0;
}
