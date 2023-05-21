#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int p[101], i, v=0;
	double t=0.0, f;

	for(i=1; i<=n; i++)
    {
        scanf("%d", &p[i]);
    }

    for(i=1; i<=n; i++)
    {
        t=t+(double)p[i]/100;
        v++;
    }

    f=100*t/v;
    printf("%.12lf", f);

    return 0;
}

