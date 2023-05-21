#include<stdio.h>

int main()
{
	int a, b, c, d, e, f, x, s1, s2;
	scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &x);


	if(x%(a+c)>=a)
    {
        s1=((x/(a+c))*a+a)*b;
    }
    else if(x%(a+c)<a)
    {
        s1=((x/(a+c))*a+x%(a+c))*b;
    }

    if(x%(d+f)>=d)
    {
        s2=((x/(d+f))*d+d)*e;
    }
    else if(x%(d+f)<d)
    {
        s2=((x/(d+f))*d+x%(d+f))*e;
    }


	if(s1>s2)
    {
        printf("Takahashi");
    }
    else if(s2>s1)
    {
        printf("Aoki");
    }
    else if(s2==s1)
    {
        printf("Draw");
    }

    return 0;
}

