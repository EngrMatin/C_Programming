#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int n, h;
    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        h=(n-1)*n/2;
        printf("%d\n", h);
    }
    return 0;
}
