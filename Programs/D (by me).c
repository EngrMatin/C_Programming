#include<stdio.h>
#include<math.h>

int main()
{
	long long x, a;
	scanf("%lld", &x);

	int n=0;
	while(1)
    {
        if(pow(2, n)>x)
        {
            break;
        }
        n++;
    }
    n--;
    if(pow(2, n)==x)
    {
        printf("1");
    }
    else if(pow(2, n)<x)
    {
        a=1+ (x-(pow(2, n)));
        printf("%d", a);
    }
	return 0;
}



