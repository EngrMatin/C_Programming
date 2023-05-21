#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, n;
	scanf("%d %d", &a, &b);

    //a<=b
    //x=3^n*a;
    //y=2^n*b;

    for(n=1; n>=1; n++)
    {
        if(a*pow(3,n) > b*pow(2,n))
        {
            break;
        }
    }

	printf("%d", n);

    return 0;
}

