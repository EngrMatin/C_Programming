#include <stdio.h>

int makePositive(int a);

int main()
{
    int a = -10;

    int ans;
    ans=makePositive(a);
    printf("%d", ans);
}

int makePositive(int a)
{
    if (a<0)
    {
        a= -a;
    }
    return a;
}
