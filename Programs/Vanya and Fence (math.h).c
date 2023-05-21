#include<stdio.h>
#include<math.h>

int main()
{
	int n, h, w, sum=0;
	scanf("%d %d", &n, &h);

	int a[1100], i;

	for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=1; i<=n; i++)
    {

        if(a[i]<=h)
        {
            w=1;
        }
        else
        {
            w=2;
        }
        sum=sum+w;
    }

    printf("%d", sum);

    return 0;
}

