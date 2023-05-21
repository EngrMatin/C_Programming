#include <stdio.h>

int fun(int a);

int main()
{
    int a, ans;
    scanf("%d", &a);

    ans=fun(a);
    printf("%d", ans);

    return 0;
}

int fun(int a)
{
    return a>0;
}

