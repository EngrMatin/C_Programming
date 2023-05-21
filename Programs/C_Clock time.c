#include<stdio.h>

int main()
{
	int s, t, x;
	scanf("%d %d %d", &s, &t, &x);

	if(t>s)
    {
        if((x*60+30)>s*60 && (x*60+30)<t*60)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }

    else if(t<s)
    {
        if((x*60+30)>s*60 && (x*60+30)<(t+24)*60)
        {
            printf("Yes");
        }
        else if((x*60+30)>s*60 || (x*60+30)<t*60)
        {
            printf("Yes");
        }

        else
        {
            printf("No");
        }
    }

    return 0;
}

