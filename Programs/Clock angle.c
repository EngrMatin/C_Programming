#include <stdio.h>

int main()
{
    int h, m;
    scanf("%d %d", &h, &m);

    double a=((30*h)-(5.5*m));

    if(a<0)
    {
        a= -a;
    }
    else if(a>180)
    {
        printf("%lf\n", 360-a);
    }
    else
    {
        printf("%lf\n", a);
    }
    return 0;
}
